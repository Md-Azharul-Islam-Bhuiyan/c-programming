#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d%d", &a, &b);

    int Addition = (a + b);
    int subtraction = (a - b);
    int Multiplication = (a * b);
    float Divition = (a*1.0 / b);
    int reminder = (a % b);

    printf("%d\n", Addition);
    printf("%d\n", subtraction);
    printf("%d\n", Multiplication);
    printf("%f\n", Divition);
    printf("%d\n", reminder);

    return 0;
}