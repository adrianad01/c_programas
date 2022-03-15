#include <stdio.h>

main(){
	float n1, n2, sum, res, mul, div;
	
	printf("Digite el primer numero: \n");
	scanf("%f", &n1);
	printf("Digite el segundo numero: \n");
	scanf("%f", &n2);
	
	sum = n1 + n2;
	res = n1 - n2;
	mul = n1 * n2;
	div = n1 / n2;
	
	printf("El resultado de la suma es: %f \n" ,sum);
	printf("El resultado de la resta es: %f \n" ,res);
	printf("El resultado de la multiplicacion es: %f \n" ,mul);
	printf("El resultado de la division es: %f \n" ,div);
	
	
	return 0;
}


