#include <stdio.h>

int main()
{
    int g1,g2,g3,g4,g5,i,j;
    printf("Enter Salary from 750-1500 : ");
    scanf("%d",&g1);
    printf("Enter Salary from 1501-3000 : ");
    scanf("%d",&g2);
    printf("Enter Salary from 3001-4500 : ");
    scanf("%d",&g3);
    printf("Enter Salary from 4501-6000 : ");
    scanf("%d",&g4);
    printf("Enter Salary above 6000 : ");
    scanf("%d",&g5);
    
    
    for(i=1;i<=3;i++){
        for(j=1;j<=g1;j++){
            printf("*");
        }
        printf(" \n");
    }
    printf(" \n");
    
    for(i=1;i<=3;i++){
        for(j=1;j<=g2;j++){
            printf("*");
        }
        printf(" \n");
    }
    printf(" \n");
    for(i=1;i<=3;i++){
        for(j=1;j<=g3;j++){
            printf("*");
        }
        printf(" \n");
    }
    printf(" \n");
    for(i=1;i<=3;i++){
        for(j=1;j<=g4;j++){
            printf("*");
        }
        printf(" \n");
    }
    printf(" \n");
    for(i=1;i<=3;i++){
        for(j=1;j<=g5;j++){
            printf("*");
        }
        printf(" \n");
    }
    printf(" \n");
}