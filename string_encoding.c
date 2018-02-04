#include<stdio.h>
#include<string.h>
void main()
{  char a[100000];
   scanf("%s",a);
   int i;
   for(i=0;i<strlen(a);i++){
       a[i]=a[i]+3;
   }
   printf("%s",a);
}
