/*
 * main.c
 *
 *  Created on: 26.01.2020
 *      Author: Alina Angelo
 */
#include <stdio.h>

float div(float a,float b);
int mult(int a, int b);
int sum( int a, int b);
double power4(double a);

int main(){
	float res;
	res = div(10,3);
	printf("%f\n", res);
	printf("%d\n", mult(7,2));
	printf("%f\n", power4(7.7));
	printf("%d\n", mult(7,-2));
	printf("%d\n", sum(6,9));
	return 0;


}

float div(float a,float b){
	return a/b;

}

int mult(int a,int b){
	return a*b;


}

int sum(int a, int b){
	return a+b;

}

double power4(double a){
	return a*a*a*a;

}

