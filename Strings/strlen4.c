#include<stdio.h>
int str_len(char*);
int main()
{
char s[100];
gets(s);
printf("length=%d\n, str_len(s));
return 0;
}
int str_len(char*s)
{
if(*s=='\0')
return 0;
return(1+str_len(++s));
}
