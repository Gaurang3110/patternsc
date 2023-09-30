#include <stdio.h>

int main()
{
    float a,km,miles,inches,foot;
    printf("Which Unit Conversion You want for your program :\n1:km to miles \n2:inches to foot \n3:cm to inches \n4:pounds to kgs \n5:inches to meters\n");
    scanf("%f",&a );
    if(a==1){
        printf("You had selected km to miles\n");
        printf("Enter distance in kms :");
        scanf("%f",&km);
        miles=km*0.62137119;
        printf("Your Distance in miles is %f",miles);
    }
    if(a==2){
        printf("You had selected inches to foot\n");
        printf("Enter length in inches :");
        scanf("%f",&inches);
        foot=inches*0.08333333;
        printf("Your length in foot is %f",foot);
    }
}