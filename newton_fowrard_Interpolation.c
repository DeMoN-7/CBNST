#include <stdio.h>
int main()
{
    float x[10], y[10], h, X, diff[10][10] = {0};
    int n;
    float p;
    printf("enter the number of element");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of x: ");
        scanf("%f", &x[i]);
        printf("Enter the value of y: ");
        scanf("%f", &y[i]);
    }
    h = x[1] - x[0];
    printf("difference :%f\n", h);
    printf("Enter the value of X: ");
    scanf("%f", &X);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         diff[i][j] = 0;
    //     }
    // }

    for (int i = 0; i < n - 1; i++)
    {
        diff[i][1] = y[i + 1] - y[i];
    }

    for (int j = 2; j < 4; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            diff[i][j] = (diff[i + 1][j] - diff[i][j - 1]);
        }
    }
    printf("______Differnece table____\n");
    for (int i = 0; i < n; i++)
    {
        printf("x:%0.2ff \ty:%0.2ff", x[i], y[i]);
        for (int j = 0; j < n; j++)
        {
            printf("%0.2f\t ", diff[i][j]);
        }
        printf("\n");
    }
    int i = 0;
    do
    {
        i++;
    } while (x[i] < X);
    i--;

    p = (X - x[i]) / h;

    float y1 = p * diff[i][1];
    float y2 = p * (p - 1) * diff[i][2] / 2;
    float y3 = p * (p - 1) * (p - 2) * diff[i][3] / 6;
    float y4 = p * (p - 1) * (p - 2) *(p-3)* diff[i][4] / 24;
    float fy = y[0] + y1 + y2 + y3 + y4;
    printf("\n final result: \t %f", fy);
}
