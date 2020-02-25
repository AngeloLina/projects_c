/*
 * main.c
 *
 *  Created on: 02.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>

int main(){
	int num;
	printf("Please enter a number:\n");
	scanf("%d", &num);
	if(num %2 ==0)
	printf("%d is even",num);
	else
		printf("%d is odd", num);


	return 0;
}



