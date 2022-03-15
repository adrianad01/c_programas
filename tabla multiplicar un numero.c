#include<stdio.h>

main(){
	
	int num, i, mul;
	
	printf("Ingrese la el numero de la tabla que se va a multiplicar: \n");
	scanf("%d", &num);
	
	for(i=1; i<=10; i=i+1){
		mul = num * i;
		printf("%d * %d = %d \n", num, i, mul);
	}
	return 0;
}
