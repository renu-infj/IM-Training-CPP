#include <stdio.h>
int main() {
    char s[] = "Innominds Office!";
    int c=0;
    while( s[c]!='\0')
	c++;
    printf("Length of the string: %d", c);
    return 0;
}
