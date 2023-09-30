#include <stdio.h>

int main()
{
   int n,m,i,j;
   printf("Enter no of rows : ");
   scanf("%d",&n); 
 
   for(i=1;i<=2*n-1;i+=2){
        for(j=1;j<=i;j+=2){
            printf("%d",j);
            
        }
        printf("\n");
   }
}
