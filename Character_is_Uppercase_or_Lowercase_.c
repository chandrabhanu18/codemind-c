#include<stdio.h>
int main()
{
 char x,a,z,A,Z;
 scanf("%c",&x);
 if(x>='A'&&x<='Z')
 {
     printf("uppercase alphabet");
 }
 else if(x>='a'&&x<='z')
 {
     printf("lowercase alphabet");
 }
 else
 {
     printf("not an alphabet");
 }
}