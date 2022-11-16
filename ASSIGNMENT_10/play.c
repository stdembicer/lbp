#include <stdio.h>

char ga[27] = "abcdefghijklmnopqrstuvwxyz";

void  one(char[] ca) {
	 printf("&ca = %p, &ca[0] = %p, &ca[1] = %p", &ca, &ca[0], &ca[1]);
 }

void two(char* pa) {
	printf("&pa = %p, &pa[0] = %p, &pa[1] = %p, ++pa = %p", &pa, &pa[0], &pa[1],++pa); 
}

main() {
	one(ga);
	two(ga);
	printf("&ga = %p, &ga[0] = %p, &ga[1] = %p", &ga, &ga[0], &ga[1]);
}


