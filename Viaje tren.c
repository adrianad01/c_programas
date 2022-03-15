#include <stdio.h>

main(){
	
	int dias, km;
	float precio, pkm;
	pkm = 14.25;
	printf("Introduza la cantidad de dias que planea viajar: \n");
	scanf("%d", &dias);
	printf("Introduza la cantidad de km que piensa recorrer: \n");
	scanf("%d", &km);
	precio = km * pkm;
	
	if(km>350 && dias>4){
		precio = precio * 0.75;
	} else {
	precio = km * pkm;
	}
	
	printf("El precio del viaje fue: %f \n", precio);
	return 0;
}
