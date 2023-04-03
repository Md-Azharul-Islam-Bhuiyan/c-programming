#include <stdio.h>

int main()
{
    int Taka;

    scanf("%d", &Taka);

    if (Taka >= 20000)
    {
        printf("Ekta Graphics Card kinbo\n");
        if (Taka >= 25000)
        {
            printf("8GB RAM kinbo\n");
        }
        else
        {
            printf("RAM Kinte parbo na\n");
        }
    }
    else
    {
        printf("Graphics card Kinar Taka nai\n");
    }

    return 0;
}