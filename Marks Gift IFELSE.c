#include <stdio.h>

int main() {
    int a;
    printf("Enter in which subject you passed 1-Maths 2-Science 3-Both : %d",a);
    scanf("%d", &a);

    if(a==3){
        printf("You are eligible for 45rs Gift");
    }
    else{
        printf("You are eligible for 500rs gift");
    }

    
    return 0;
}