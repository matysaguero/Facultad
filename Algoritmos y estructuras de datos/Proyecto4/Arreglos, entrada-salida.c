#include <stdio.h>

void pedir_arreglo(int tam, int a[])
{
    int i = 0 ;

    printf ("Dar valores para el arreglo:\n");

    while (tam > i)
    {
        printf ("elemento %d:",i+1);
        scanf ("%d",&a[i]);
        i=i+1;
    }


}
        void imprimir_arreglo(int tam, int a[])
        {
            int i = 0;

            printf ("los elementos del arreglo son:\n");

            printf ("\n");

            while (tam > i)
            {
                printf ("%d",a[i]);
                
                i=i+1;
            }
        }

            int main (void)
            {
                int n_max ;

                printf ("dar el tamaño del arreglo:\n");
                scanf ("%d",&n_max);

                int a[n_max] ;

                printf ("\n");

                pedir_arreglo (n_max,a);
                imprimir_arreglo (n_max,a);
                
                
                return 0;
            }