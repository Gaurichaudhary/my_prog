#include <stdio.h>
#include <string.h>
# define Infinity 100000
int main()
{
 int a,b,max;
 if(a<=100000&&b<=100000){
 scanf("%d %d",&a,&b);
 if(a>b){
     max=a;
 }
 else{
     max=b;
 }
 for(int i=1;i<=Infinity;i++){
     if(i%a==0&&i%b==0){
        printf("%d",i);
         break;
     }
 }
}
}
