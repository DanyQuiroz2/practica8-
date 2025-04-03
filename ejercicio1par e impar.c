//practica 8, Daniela Quiroz//

#include <stdio.h>
#include <math.h>

#include <stdio.h>

int main() {
    int n, i;
    int ultimoPar, ultimoImpar;

    printf("Ingresa el valor de n: ");
    scanf("%d", &n);

    printf("Primeros %d números pares: ", n);
    for (i = 1; i <= n; i++) {
        ultimoPar = 2 * i;  
        printf("%d ", ultimoPar);
    }

    printf("\nPrimeros %d números impares: ", n);
    for (i = 0; i < n; i++) {
        ultimoImpar = 2 * i + 1; 
        printf("%d ", ultimoImpar);
    }

    printf("\nÚltimo número par: %d\n", ultimoPar);
    printf("Último número impar: %d\n", ultimoImpar);

    return 0;
}
