#include <stdio.h> 

   int pedirEntero (void) {
           int n;

           printf ("Ingrese un valor entero:\n");
           scanf ("%d", &n);
           
        return n;

   }

void imprimir_entero (int a) {
        printf ("El valor ingresado es: %d\n", a);

}

int main (void) {
        imprimir_entero(pedirEntero());

return 0;
}

// Ingrese un valor entero:
// 90
// El valor ingresado es: 90