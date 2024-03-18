#include <stdio.h>

int main(void){
    int x, y, z, m;

    printf ("Introduce valores para: x, y, z y m\n");
    scanf ("%d", &y);
    scanf ("%d", &x);
    scanf ("%d", &z);
    scanf ("%d", &m);

    if (x < y) {
        m = x;
    } else {
        m = y;
    } 

    if (m < z) {
        ;
    } else {
        m = z;
    }

printf("σ2 : (x -> %d, y -> %d, z -> %d, m -> %d)\n", x, y, z, m);

return 0;
}

// a)
// [|σ0: (x → 5 ,y → 4 ,z → 8 ,m → 0)|]
// 
// Var x,y,z: Int;
//  
// if (x < y) →
//  m = x;
// ▫️ (x ≥ y) →
//  m = y;
// fi
//
// [|σ1 : (x → 5, y → 4, z → 8, m → 4) |]
// 
// if (m < z) →
// skip;
// ▫️ (m ≥ z) →
// m = z;
// fi
//
// [|σ2 : (x → 5, y → 4, z → 8, m → 4) |]
