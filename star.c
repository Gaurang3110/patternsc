#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    //outer loop
    for (i=1;i<=n;i++){
        //space print
        for(j=1;j<=n-i;j++){
            printf("  ");
        }
        //star print
        for (int j=1; j<=i; j++){
            printf("*");
        }
        printf(" \n");
    }
}