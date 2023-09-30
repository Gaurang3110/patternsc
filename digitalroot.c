#include <stdio.h>

int main()
{
    int n,sod,ans;
    scanf("%d",&n);
   
    while(n>=10){
        sod = 0;
        {
            while(n>0){
                sod += n%10;
                n/=10;
            }
            n=sod;
        }
    }
        printf("%d",n);
    }
