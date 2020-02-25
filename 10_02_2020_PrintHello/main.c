/*
 * main.c
 *
 *  Created on: 10.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void printHello(int num);
void printHello2(int num);
int main(){
	printHello(8);
	printHello2(4);
	return 0;
}

void printHello(int num){
	int i;
	for (i=1; i<=num; i++){
		printf("%d Hello!\n", i);

	}
}

void printHello2(int num){
	while(num!=0){
		printf("%d Hello!\n", num);
		num--;
	}
}
