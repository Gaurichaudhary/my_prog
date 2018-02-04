#include <stdio.h>
#include <string.h>
int main()
{
 char a[100],character;
 int i,j,max=0,count=0;
 gets(a);
 for(i=0;i<strlen(a);i++){
     for(j=0;j<strlen(a);j++){
         if(i!=j&&a[i]==a[j]){
             count++;
             if(count>max){
             max=count;
             character=a[i];
             }
         }
         
             
         }}
 
printf("%c",character);
}
