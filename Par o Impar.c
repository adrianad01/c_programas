#include <stdio.h>

main(){
	int num;
	printf("Introduce un numero: \n");
	scanf("%d", &num);
	
	if (num % 2 == 0){
		printf("Es par");
	}
	else{
		printf("Es impar");
	}
	
	return 0;
}
