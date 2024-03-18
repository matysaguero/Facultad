#include <stdio.h>
#include <stdbool.h>
#define N 4

bool todos_pares(int tam, int a[])
{
    bool val;
    int i = 0 ;
   
    while (tam > i)
    {   
         if (a[i] % 2 == 0)
      {
          (val = 1 && val);   
      }
        else
        {
          (val = 0 && val);   
        }
        
        i=i+1;
    } 

    if (val){
    printf("Tdos los elementos son pares\n");
    } else {
    printf("No existe elemento par\n");
  }     
  return val;
}

bool existe_multiplo(int m, int tam, int a[])
  {
    bool mul;
    int i = 0 ;

    while (tam > i)
    {   
      if (a[i] % m == 0)
      {
        (mul = 1 || mul);
      }
      else
      {
        (mul = 0 || mul);
      }
    }
    if (mul)
    {
    printf("Existe un elemento que es multiplo\n");
    } else {
    printf("No existe multiplo\n");
  }
  return mul;
}

int main (void)
{
      int a[N];
      int x,m;
      int i = 0;
        while (N > i)
        {
            printf ("El elemento en a[%d]\n",i);
            scanf ("%d",&a[i]);
            i=i+1;
        }


          printf ("Elegir entre existe_multiplo (poner 1) o todos_pares (poner 2) \n");  
          scanf ("%d",&x);

          if (x==1)
          {
            printf("Dar un entero\n");
            scanf("%d",&m);
            existe_multiplo (m,N,a);
          } 
          else 
          {
           todos_pares(N,a);
          }

     return 0;
}
