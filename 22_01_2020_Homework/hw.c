/*
 * hw.c
 *
 *  Created on: 22.01.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>

int main(){
	printf("|500|\n");
	printf("|%8d|\n", 500);
	printf("|%-8d|\n", 500);
	printf("\n");

	printf("Words:%12d\n", 59);
	printf("Letters:%10d\n", 1004);
	printf("Digitis:%10d\n", 8);
	printf("\n");
	printf("\n");

	char  c = 63;
	//char- tip peremenoj
	unsigned char cha = 'r';
	short j = 'b', k = 99;
    printf("%c == %d\n", c, c);
	printf("%c == %d\n", cha, cha);
	printf("%c, %d\n", j, k);
	//printf("%c, %c\n", j, k,);
	int a = 10;
	printf("a is %d\n", a);
	printf("adress a is %p\n", &a);


	return 0;

}

