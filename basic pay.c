// basic pay
#include <stdio.h>

int main() {
    // Write C code here
    float basic,hra,ta,da,gross;
    printf("Enter the Basic Salary : ");
    scanf("%f", &basic);
    hra = (0.3)*basic;
    ta = (0.1)*basic;
    da = (0.18)*basic;
    
    gross = basic+hra+ta+da;
    
    printf("The gross salary is %f", gross);
    
    return 0 ;

}