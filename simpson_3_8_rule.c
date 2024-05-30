#include <stdio.h>
double f(double x)
{
    return (1 / (1 + x));
}
double simpsons(double a, double b, int n)
{
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    double xi, yi;
    printf("x0 = %lf, y0 = %lf\n", a, f(a));
    printf("x%d = %lf, y%d = %lf\n", n, b, n, f(b));
    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        if (i % 3 == 0)
        {
            yi = 2 * f(x);
            printf("x%d = %lf, y%d = %lf\n", i, x, i, yi);
            sum += yi;
        }
        else
        {
            yi = 3 * f(x);
            printf("x%d = %lf, y%d = %lf\n", i, x, i, yi);
            sum += yi;
        }
    }
    return sum * (h * 3 / 8);
}
int main()
{
    double a = 2, b = 6;
    int n = 4;
    double result = simpsons(a, b, n);
    printf("Result of integration: %lf\n", result);
    return 0;
}
