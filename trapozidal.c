#include<stdio.h>
float func(float x){
    return ((4*x)-(3*x*x));
    // return(1/(1+(x*x)));
}
int main(){
    int a,b;
    printf("Enter lower limit");
    scanf("%d",&a);
    printf("Enter upper limit");
    scanf("%d",&b);
    int n=10;
    float sum=0;
    float h=(float)(b-a)/n;
    for (int i=1;i<n;i++){
        sum=sum+func(a+i*h);
    }
    float tr=h*(func(a)+func(b)+2*sum)/2;
    printf("%f",tr);

}
