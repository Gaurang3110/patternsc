#include <stdio.h>

int main(){
    int n,nsp,nst,i,j;
    printf("Enter no of rows : ");
    scanf("%d ",&n); 
    nst = n;
    nsp = 1;
    for(int i=1;i<=n;i++){
        for(j=n;j>=i;j--){ //METHOD 1
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){ // METHOD 2
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}
