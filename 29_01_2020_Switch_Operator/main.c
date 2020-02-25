/*
 * main.c
 *
 *  Created on: 29.01.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>

int main(){
	int a = 5;
	switch(a){
	case 0:
		printf("%d\n", 0);
		break;
	case 1:
		printf("%d\n", 1);
		break;
	case 2:
		printf("%d\n", 2);
		break;
	case 3:
		printf("%d\n", 3);
		break;
	default:
		printf("error");
	}
	return 0;

}
