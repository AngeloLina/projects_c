/*
 * main.c
 *
 *  Created on: 27.01.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>

int main(){

	int a;
	printf("Enter number\n");
	fflush(stdout);
	scanf("%d", &a);
	if(a>5){
		printf("%d > 5\n", a);
	} else if (a<5){
		printf("%d <5\n", a);
	} else {
		printf("%d = 5",a);


	}

	return 0;

}
