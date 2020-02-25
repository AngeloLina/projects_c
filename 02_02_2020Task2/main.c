/*
 * main.c
 *
 *  Created on: 02.02.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>

int a;

int main(){

	int a;
	printf("Please enter a number:\n");
	scanf("%d", &a);
	if (a>=0 && a<=100)
		printf("Correct");
else
	printf("Error");

	return 0;
}

