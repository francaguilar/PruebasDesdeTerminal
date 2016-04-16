#include <stdio.h>
#define TAM_MAXIMO 80

int main() {
	
	char cadena [TAM_MAXIMO];
	int entero1, entero2;
	float decimal;
	printf("hello world");
	printf("Por favor, escribe una linea de no mas de 80 caracteres:\n");
	gets(cadena);
	printf("La linea introducida es:\n");
	puts(cadena);
	printf("Introduce dos enteros separados por un espacio: \n");
	scanf("%d %d", &entero1, &entero2);
	printf("Introduce un numero decimal:\n");
	scanf("%f", &decimal);
	printf("Introduce una cadena:\n");
	scanf("%s", cadena);
	printf("Has escrito lo siguiente:\n");
	printf("%d %d %.2f %s", entero1, entero2, decimal, cadena);
	
	return 0;
}
