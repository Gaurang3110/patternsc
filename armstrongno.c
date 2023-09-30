#include <stdio.h>

int main()
{
   int n,ans,rem;
   scanf("%d",&n);
   ans = 0;
   while(n!=0){
    ans = rem*rem*rem;
    n=n/10;
   }
   printf("ans is%d",ans);
}