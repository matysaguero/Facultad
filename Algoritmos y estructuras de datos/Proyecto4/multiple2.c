#include <stdio.h>

int main(void) {
  int x, y, z, aux_x, aux_y, aux_z;
  printf ("Ingrese valores para x, y, z\n");
  scanf ("%d", &x);
  scanf ("%d", &y);
  scanf ("%d", &z);
  printf ("Los valores son: x = %d, y = %d, z = %d\n", x, y, z);

  x = y;
  aux_x = x;
  y = x + y + z;
  aux_y = y;
  z = x + z;
  aux_z = z;

printf ("Los nuevos valores son: x = %d, y = %d, z = %d\n", aux_x, aux_y, aux_z);
return 0;

}