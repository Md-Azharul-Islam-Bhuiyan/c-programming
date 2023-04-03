#include <stdio.h>

int main()
{
    int Taka;

    scanf("%d", &Taka);

    if (Taka >= 140)
    {
        printf("1 liter ice Creame kinbo");

    }
    else if(Taka >= 50)
    {
        printf("Chawkbar Icecream khabo");
    }
    else{
        printf("Icecream Kinar Taka nai onno kisu khabo");
    }
    
    

    return 0;
}