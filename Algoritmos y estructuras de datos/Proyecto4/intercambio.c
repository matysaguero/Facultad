#include <stdio.h>
int main(void){
int x, y, z;
    printf ("Ingrese valores para x, y, z\n");
    scanf ("%d", &x);
    scanf ("%d", &y);
    scanf ("%d", &z);
    printf ("Los valores ingresados son: x = %d, y = %d, z = %d\n", x,y,z);

int aux_x, aux_y, aux_z;
    aux_x = x;
    aux_y = y;
    aux_z = z;
    z = aux_x;
    x = aux_y;
    y = aux_z;
printf ("Ahora los valores de cada uno son: x = %d, y = %d, z = %d\n", x,y,z);
return 0;
}
