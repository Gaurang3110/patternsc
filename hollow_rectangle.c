#include <stdio.h>

int main()
{
    int n,i,m,j;
    printf("Enter no of rows : ");
    scanf("%d",&n); 
    printf("Enter no of coloumn : ");
    scanf("%d",&m); 

     for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==1 || j==1 || i==n || j==m ){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
   }
    
}