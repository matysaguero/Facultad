#include <stdio.h>
#include <assert.h>

int pedir_entero(void){
  int x;
  printf ("ingrese un entero\n");
  scanf ("%d", &x);

return x;
}

int valor_absoluto(int x) {
  assert (x >0 || x < 0);
   if (x>0) {
     return x;
   } else {
     return -x;
   }

}

int main(void){
  int x;
  x = pedir_entero();
  int resultado = valor_absoluto(x);
  printf("el valor absoluto de %d es %d\n", x, resultado);
  return 0;

}
