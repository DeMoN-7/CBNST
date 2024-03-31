#include <stdio.h>
#include <math.h>
float form(float x1, float x2, float f1, float f2)
{
    float f = (((x1 * f2) - (x2 * f1)) / (f2 - f1));
    return f;
}
float eq(float x)
{
    float q = (x * x * x) - 3 * x + 1;
    return q;
}
void main()
{
    float x1 = 1, x2 = 2, x3, f1, f2, f3, z, t;
    int i = 1;
    do
    {
        f1 = eq(x1);
        f2 = eq(x2);
        printf("\niteration %d\t",i);
        printf("\nx1:%f\tx2:%f",x1,x2);
        printf("\nf1:%f\tf2:%f",f1,f2);
        x3=form(x1,x2,f1,f2);
        f3=eq(x3);
        x1=x2;
        x2=x3;
        i++;
    } while (fabs(x1-x2)>0.0001);
}