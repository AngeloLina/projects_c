/*
 * main.c
 *
 *  Created on: 22.01.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>

int sum(int a, int b);
int power2(int a);
int power3(int a);

int main(){
	int res = sum(15,39);
	printf("sum is %d\n", res);

	int a = 6;
	res = power2(a);
	printf("square is %d\n", res);

	res = power3(a);
	printf("a power 3 is %d", res);

	return 0;

}

int sum(int a, int b){
	return a+b;

}

int power2(int a){
	return a*a;

}

int power3(int a){
	return power2(a)*a;
}
