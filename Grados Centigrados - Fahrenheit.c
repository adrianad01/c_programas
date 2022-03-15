#include <stdio.h>

main(){
	
	int g_cen, g_fah;
	printf("Introduce la temperatura en grados Centigrados: \n");
	scanf("%d", & g_cen);
	g_fah = g_cen * 1.8 + 32;
	printf("La temperatura en grados fahrenheit es: %d \n", g_fah);
	return 0;
}
