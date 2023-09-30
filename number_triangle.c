#include <stdio.h>

int main()
{
   int n,m,i,j;
   printf("Enter no of rows : ");
   scanf("%d",&n); 
   printf("Enter no of colomn : ");
   scanf("%d",&m); 

   for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
   }
}
