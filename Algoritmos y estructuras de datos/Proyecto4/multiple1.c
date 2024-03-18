#include <stdio.h>

int main(void) {
int x, y, aux_x, aux_y;
printf ("Ingrese valores para x, y\n");
scanf ("%d", &x);
scanf ("%d", &y);
printf ("Los valores son: x = %d, y = %d\n", x,y);

x = x+1;
y = x+y;

aux_x = x;
aux_y = y;

printf ("Los nuevos valores son: x = %d, y = %d\n", aux_x, aux_y);
return 0;

}