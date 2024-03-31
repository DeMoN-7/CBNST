#include<stdio.h>
#include<math.h>
float eq(float x){
    float r=(x*x*x)-4*x-9;
    return r;
}
void main(){
    float f1,f2;
    for(int i=0;i>=0;i++){
        f1=eq(i);
        f2=eq(i+1);
        if((f1>0 && f2<0)||(f1<0 &&f2>0)){
            printf("intervals are: %d,%d",i,i+1);
            break;
        }
    }

}
/*
float apr,tru,abs,rel,per;
    printf("Enter the true value:");
    scanf("%f",&tru);
    printf("Enter the approx value:");
    scanf("%f",&apr);
    abs=fabs(tru-apr);
    if (tru==0){
        printf("Divide by zero error");

    }
    else{
        rel=abs/tru;
        per=rel*100;
    }
    printf("%f\n%f\n%f\n",abs,rel,per);
*/