// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,size, a[10];
    printf("enter size:");
    scanf("%d", &size);
    printf("enter array elements:");
    for(i=0; i<size; i++)
    {
     scanf("%d",&a[i]);   
    }
    int max,min= a[0];
    for(i=0;i<size;i++)
    {
        if(min>a[i])
        {
        min=a[i];
        }
        if(max<a[i])
        {
        max=a[i];
        }
    }
    printf("max num:%d  min num:%d", max, min);
    return 0;
}
