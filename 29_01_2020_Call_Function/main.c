/*
 * main.c
 *
 *  Created on: 29.01.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>

float median(int n1, int n2);

int main(){
	int num1 =10;
	int num2 =13;
	float result;
	printf("%.2f\n", median (num1, num2));
	result = median(124, 315);
	printf("%.2f\n", result);


	return 0;
}

float median(int n1, int n2){
	return(float)(n1+n2)/2;
	//float res;
	//res = (float)(n1+n2)/2;
	//return res;
}
