#include<stdio.h>

main(){
	int num1, num2;
	
	printf("Ingrese el primer numero: \n");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: \n");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("El numero mayor es: %d", num1);
	} else if (num2 > num1){
		printf("El numero mayor es: %d", num2);
	} else {
		printf("Ambos numeros son iguales \n");
	}
	
	return 0;
}
