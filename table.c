#include <stdio.h>

int main()
{ 
    int num,c,m;
    printf("Enter the number for its table : ");
    scanf("%d",&num);

    m=1;
    c=num*m;

    while(m<11){
        printf("%d * %d = %d\n",num,m,c);
        m=m+1;
        c=num*m;
        
    }
    
    return 0;
}
