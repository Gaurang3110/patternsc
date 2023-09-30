#include <stdio.h>

int main()
{
   int n,m,i,j;
   printf("Enter no of rows : ");
   scanf("%d",&n); 
   int nsp = n-1;

   for(i=1;i<=n;i++){
        int a = i-1;
        for(int q=1;q<=nsp;q++){  /*for(j=1;j<=n-i;j++){  
                                    printf(" ");
                                    }*/
            printf(" ");
            
        }
        nsp--;
        for(j=1;j<=i;j++){
            char ch = (char)(j+64);
            printf("%c",ch);
        }
        for(int k=1;k<=i-1;k++){
            char ch = (char)(a+64);
            printf("%c",ch);
            a--;
        }
        printf("\n");
   }
}
