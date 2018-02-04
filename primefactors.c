#include<stdio.h>
void main()
{  int n,flag=0;
   scanf("%d",&n);
   for(int i=2;i<n/2;i++){
       if(n%i==0){
           for(int j=2;j<i/2;j++){
               if(i%j==0){
                   flag=1;
                   break;
               }
           }
        if(flag!=1){
            printf("%d ",i);
        }
       }
       
   }
   
}        




    
