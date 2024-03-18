#include <stdio.h>

   struct div_t 
    {
        int cociente;
        int resto;
     
    };  

 
 struct div_t division(int x, int y) 
 {
    struct div_t  resultado ;
    
     if (y != 0)
        {
            resultado.cociente = x/y ;
            resultado.resto = x % y ;
        }
        else
        {
            printf ("Error (no se puede dividir por 0)\n");

            
            resultado.cociente = 0;
            resultado.resto = 0;
        }
  
    return resultado ;
    
 }

  
 
    int main (void)
    {
        int x,y;
        struct div_t resultado ;


         printf ("ingresa un valor para x (dividendo):\n");
         scanf ("%d",&x);

        printf ("ingresa un valor para y (divisor):\n");
        scanf ("%d",&y);
       
        printf ("\n");
        resultado = division (x,y);

        printf ("el cociente es %d y el resto es %d ",resultado.cociente , resultado.resto);

        return 0;
    }


 
 
