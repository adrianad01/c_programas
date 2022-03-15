#include<stdio.h>

main(){
	
	int a, b, c;
	
	printf("Ingrese el primer lado del triangulo: \n");
	scanf("%d", &a);
	printf("Ingrese el segundo lado del triangulo: \n");
	scanf("%d", &b);
	printf("Ingrese el tercer lado del triangulo: \n");
	scanf("%d", &c);
	
	if(a == b && b == c && a == c){
		printf("Es un triangulo equilatero. \n");
	} 
		else if(a==b && b!=c && c!=a){
		printf("Es un triangulo isoceles. \n");
	} 
		else if(a!=b && b!=c && c!=a){
		printf("Es un triangulo escaleno. \n");
	} 	else{
		printf("Es un triangulo isoceles. \n");
	}
	return 0;
}



