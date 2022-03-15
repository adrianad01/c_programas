#include<stdio.h>

main(){
	
	float compra, dinero, total, cambio; 
	
	printf("Ingrese el monto de su compra: \n");
	scanf("%f", &compra);
	printf("Ingrese la cantidad de dinero con el cual va a realizar su compra: \n");
	scanf("%f", &dinero);
	cambio = dinero - compra;
	if(compra > 0 && compra <= 800){
		printf("No tiene descuento, su total es: %f \n", compra);
		printf("Y su cambio es: %f \n", cambio);
	} 
		else if (compra > 800 && compra <= 2000){
		compra = compra * 0.85;
		printf("Tiene un 15 porciento de descuento, su total es: %f \n", compra);
		printf("Y su cambio es: %f \n", cambio);
	} 	
		else if (compra > 2000 && compra <= 3200){
		compra = compra * 0.75;
		printf("Tiene un 25 porciento de descuento, su total es: %f \n", compra);
		printf("Y su cambio es: %f \n", cambio);
	} 
		else if (compra > 3200){
		compra = compra * 0.60;
		printf("Tiene un 40 porciento de descuento, su total es: %f \n", compra);
		printf("Y su cambio es: %f \n", cambio);
	}	
	
	return 0;
}


