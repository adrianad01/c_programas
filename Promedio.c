#include <stdio.h>

main(){
	int calif_1, calif_2, calif_f;
	printf("Introduce la primer calificacion: \n");
	scanf("%d", &calif_1);
	
	printf("Introduce la segunda calificacion: \n");
	scanf("%d", &calif_2);
	
	calif_f = ((calif_1 + calif_2)/ 2);
	
	printf("La calificacion final es: %d", calif_f);

	return 0;
}
