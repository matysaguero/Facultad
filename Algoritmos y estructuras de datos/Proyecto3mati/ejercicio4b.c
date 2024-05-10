#include <stdio.h>

int main(void) {
    int x,y,z,m;
    printf ("Introduzca cuatro valores enteros\n");
    scanf ("%d", &x);
    scanf ("%d", &y);
    scanf ("%d", &z);
    scanf ("%d", &m);
    printf ("σ0 : (x → %d, y → %d, z → %d, m → %d)\n", x, y, z, m);

    if (x<y) {
        m = x;
    } else {    
        m = y;
    }

    printf ("σ1 : (x → %d, y → %d, z → %d, m → %d)\n", x, y, z, m);
    
    if (m<z) {
        ;
    } else {
        m = z;
    }
    printf ("σ2 : (x → %d, y → %d, z → %d, m → %d)\n", x, y, z, m);

return 0;
}

