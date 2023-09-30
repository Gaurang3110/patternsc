#include <stdio.h>

int main()
{
   int n,a,i,k,j;
   printf("Enter no of rows : ");
   scanf("%d",&n); 
    
   for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0==0) printf("1");
            else printf("0");
        
        }
        printf("\n");
   }
}

//(i+j)%2==0==0 so..i+j = even means true
//then true is not equal to 0 so false
//hence ulta code aa rha isse
