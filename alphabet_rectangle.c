#include <stdio.h>

int main()
{
   int n,m,i,j;
   printf("Enter no of rows : ");
   scanf("%d ",&n); 
   printf("Enter no of colomn : ");
   scanf("%d ",&m); 

   for(i=1;i<=n;i++){
        int a=65;
        for(j=1;j<=m;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
   }
}
