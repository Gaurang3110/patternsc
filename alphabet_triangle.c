#include <stdio.h>

int main()
{
   int n,m,i,j;
   printf("Enter no of rows : ");
   scanf("%d ",&n); 

   for(i=1;i<=n;i++){
        int a=65;
        for(j=1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
   }
}
