#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Ingresar temperaturas hasta una temperatura  igual a 1000, indicar e imprimir la mayor y menor
    int temp;
    int mayor,menor;

    printf("\n Ingrese las temperaturas\n");
    scanf("%d", &temp);
    ///    500
    mayor = temp;
    menor = temp;

    while ( temp != 1000 )
    {
        if ( mayor < temp )
        {
            mayor = temp;
        }
        if ( menor > temp )
        {
            menor = temp;
        }

        printf("\n Ingrese las temperaturas\n");
        scanf("%d", &temp);
    }

    printf("\n La temperatura mayor es %d", mayor);
    printf("\n La temperatura menor es %d", menor);


    return 0;
}
