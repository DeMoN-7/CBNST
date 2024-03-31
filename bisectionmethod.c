#include<stdio.h>
#include<math.h>
double eq(double x)
{
    double f;
    f=(x*x*x)-4*x-9;
    return (f);
}
int main()
{
    float x1=2,x2=3;
    double z,x3;
    float range=0.000001;
    int i=1;
    do
    {
        printf("iteration %d\n",i);
        printf("x1= %f \t x2=%f\t",x1,x2);
        x3=(x1+x2)/2;
        printf("x3= %f",x3);
        z=eq(x3);
        printf("\n");
        if(z>0){
            x2=x3;
        }
        else{
            x1=x3;
        }
            i++;
    } while (fabs(x1-x2)>=range);
    return 0;
    
}