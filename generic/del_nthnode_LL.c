/* C program to merge two sorted linked lists */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

/* Link list node */
typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* deleteNode(Node* head, int key)
{

	// We will be using this pointer for holding address
	// temporarily while we delete the node
	Node* temp;

	// First pointer will point to the head of the linked
	// list
	Node* first = head;

	// Second pointer will point to the Nth node from the
	// beginning
	Node* second = head;
	for (int i = 0; i < key; i++) {

		// If count of nodes in the given linked list is <=N
		if (second->next == NULL) {

			// If count = N i.e. delete the head node
			if (i == key - 1) {
				temp = head;
				head = head->next;
				free(temp);
			}
			return head;
		}
		second = second->next;
	}

	// Increment both the pointers by one until
	// second pointer reaches the end
	while (second->next != NULL) {
		first = first->next;
		second = second->next;
	}

	// First must be pointing to the Nth node from the end
	// by now So, delete the node first is pointing to
	temp = first->next;
	first->next = first->next->next;
	free(temp);
	return head;
}

/* Function to insert a node at the beginning of the
linked list */
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = (Node*)malloc(sizeof(Node));
	/* put in the data */
	new_node->data = new_data;
	/* link the old list off the new node */
	new_node->next = (*head_ref);
	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(struct Node* node)
{
	while (node != NULL) {
		printf("%d ", node->data);
		node = node->next;
	}
}

// Driver program
int main()
{
	struct Node* head = NULL;
	push(&head, 7);
	push(&head, 1);
	push(&head, 3);
	push(&head, 2);
	printf("Created Linked list is:\n");
	printList(head);
	int n = 1;
	deleteNode(head, n);
	printf("\nLinked List after Deletion is:\n");
	printList(head);
	return 0;
}
