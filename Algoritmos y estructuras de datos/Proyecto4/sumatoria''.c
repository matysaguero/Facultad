#include <stdio.h>
#define N 5

int sumatoria(int tam, int a[])
{
    int i=0;
    int suma = 0 ;


    while (i<tam)
    {
        suma = suma + a[i];
        i=i+1 ;

    }

    return suma;

}


  int main (void)
 {
      int i = 0;
      int a[N];

        while (N > i)
        {
            printf ("El elemento en a[%d]\n",i);
            scanf ("%d",&a[i]);
            i=i+1;
        }
            
            int resultado = sumatoria(N, a);

            printf ("resultado de la sumatoria = %d \n",resultado);

            return 0;
    }