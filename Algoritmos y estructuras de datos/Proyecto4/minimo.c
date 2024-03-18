#include <stdio.h>
#include <assert.h>

int main(void) {
  int x, y;
  printf ("Ingresar dos valores enteros\n");
  scanf ("%d", &x);
  scanf ("%d", &y);

  int min;
  min = x < y ? x : y;

  assert (x==min || y==min); 
  printf ("el minimo es: %d\n", min);
  return 0;
}