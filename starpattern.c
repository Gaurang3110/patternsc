#include <stdio.h>

int main()
{
    int n,l,i,j;
    printf("Enter which pattern you want to be printed :\n1-Triangular Pattern\n 2- Reversed Triangular Pattern\n");
    scanf("%d",&n);
    printf("Enter how many lines of Star you want : ");
    scanf("%d",&l);
    
    if(n==1){
        for(i=1;i<=l;i++){
            for(j=1;j<=i;j++){
        printf("*");
            }
            printf(" \n");
        }
    }
    
    
    
    else if(n==2){
        for(i=l;i>=1;i--){
           for(j=1;j<=i;j++){
               printf("*");
           } 
           printf("*\n");
        }
    }  
    
    else
    printf("BAD OUTPUT");
            
        
    
    return 0;
}
