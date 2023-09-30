#include <stdio.h>

int main()
{
   int n,a,i,j;
   printf("Enter no of rows : ");
   scanf("%d",&n); 
 
   for(i=1;i<=n;i++){
        a=1;
        for(j=1;j<=i;j++){
            printf("%d",a);
            a+=2;
            
        }
        printf("\n");
   }
}
