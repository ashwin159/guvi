#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
int a;
string name;
gets(name);
a=strrev(name);
if(a==name)
printf("%s",name);
else
printf("not palindrome");
getch();
}
