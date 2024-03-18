#include <stdio.h>
#include <assert.h>
int suma_hasta(int n){
  assert (n>=0);
  return (n*(n+1))/2;
}

int main(void){
  int n, x;
  printf ("Ingrese un valor para n\n");
  scanf ("%d", &n);
  x = suma_hasta(n);
  if (n>=0){
    printf ("La suma de los primeros %d es: %d\n", n, x);
  }
return 0;
}