#include <stdio.h>

main(){
	int base, altura, area;
	printf("Introduce la cantidad de la base: \n");
	scanf("%d", &base);
	
	printf("Introduce la cantidad de la altura: \n");
	scanf("%d", &altura);
	
	area = ((base * altura) / 2);
	printf("El area es: %d", area);
	return 0;
}
