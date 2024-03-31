#include<stdio.h>
#include<math.h>
void main(){
    float truee,appr,relErr,perErr;
    printf("Enter the true value");
    scanf("%f",&truee);
    printf("Enter the absolute value");
    scanf("%f",&appr);
    float absErr=fabs(truee-appr);
    if(truee==0){
        printf("Divide by zero");
    }
    else{
        relErr=absErr/truee;
        perErr=relErr*100;
    }
    printf("%f\n%f\n%f",absErr,relErr,perErr);
}