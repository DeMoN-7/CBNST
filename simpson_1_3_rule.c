#include<stdio.h>
double f(double x){
    return(1/(1+x*x));
}
int main(){
    double s1=0,s2=0,h,simp=0,a,b;
    int n;
    printf("Enter upper,lower limit and N");
    scanf("%lf %lf %d",&a,&b,&n);
    h=(b-a)/n;
    simp=f(a)+f(b);
    printf("x0: %lf\t%lf\n",a,f(a));
    for(int i=1;i<n;i++){
        double x=a+i*h;
        if(i%2==0){
            s1=2*f(x);
            
            simp+=s1;
        }
        else{
            s2=4*f(x);
            simp+=s2;
        }

    }
    simp=simp*h/3;
    printf("%lf",simp);
}
