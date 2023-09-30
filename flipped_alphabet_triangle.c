#include <stdio.h>

int main()
{
   int n,a,i,j;
   printf("Enter no of rows : ");
   scanf("%d",&n); 

   for(i=1;i<=n;i++){
        a=65;
        for(j=n;j>i;j--){  //or j=1;j<=n-i;j++
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%c",a);
            a++;
        }
        
        printf("\n");
   }
}
