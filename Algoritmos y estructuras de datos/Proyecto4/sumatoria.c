#include <stdio.h>


int sumatoria(int tam, int a[])
{
    int i=0;
    int suma = 0 ;

    printf ("Dar los elementos del arreglo:\n");

    while (i<tam)
    {
        printf ("elemento %d:",i+1);
        scanf ("%d",&a[i]);

        suma = suma + a[i];
        i=i+1 ;

    }

    return suma;

}

        int main (void)
        {
            int tam;

            printf("dar el tamaño del arreglo \n");
            scanf ("%d",&tam);

            int a[tam] ;
            
            int resultado = sumatoria(tam, a);

            printf ("resultado de la sumatoria = %d \n",resultado);

            return 0;
        }