#include <stdio.h>
#include <stdbool.h>

bool todos_pares(int tam, int a[])
{
    int i = 0 ;

    printf ("los elementos del arreglo son:\n");

    while (tam > i)
    {
        printf ("elemento %d:",i+1);        //arreglar (no me toma los elementos a partir del 2do)
        scanf ("%d",&a[i]);

        if (a[i] % 2 != 0 )
        {
            
            return false ;
        }
         
            i=i+1 ; 
    }

        return true ;
        
}


        bool existe_multiplo(int m, int tam, int a[])
        {
            int i=0;

            while (i < tam)
            {

                if (a[i] % m == 0)
                {
                    return true ;
                }
        
                    i = i+1;
            }
            
            return false; 
            
        }
        
              int main (void) 
                {
                    int tam ,m;

                    printf ("Dar un tamaño para el arreglo:\n");
                    scanf ("%d",&tam);

                    int a[tam];

                    if (todos_pares (tam, a))
                    {
                        
                        printf ("Los elementos del arreglo son pares\n");
                        
                    }
                    else 
                    {
                        printf ("No todos los elementos de el arreglo son pares\n");
                    }

                   
                    printf ("1: para ver los multiplos de n.\n0: para no hacerlo. \n");
                    scanf ("%d",&m);

                    if (m == 1)
                    {
                        
                        printf ("dar un valor para m:\n");
                        scanf ("%d",&m);

                        if (existe_multiplo (m, tam, a))
                        {
                            printf ("hay algun multiplo de %d en el arreglo\n",m);
                        }
                        else 
                        {
                            printf ("no hay ningun multiplo de %d en el arreglo\n",m);
                        }

                    }else
                    {

                    }
                    
                    return 0;
                }