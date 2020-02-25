/*
 * main.c
 *
 *  Created on: 27.01.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>

int main(){

	int number;
	printf("Enter your number, please\n");
	fflush(stdout);
	scanf("%d",&number);
	printf("we double your number: %d\n", number*2);


	int a =20;int b =15;
	a =(a>b)?b:a;
	printf("%d\n", a);

	printf("%s", (1>0)? "true" : "false");
	//printf("%d", (1>0)? 10 : 0);



	return 0;
}
