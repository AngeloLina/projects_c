/*
 * main.c
 *
 *  Created on: 05.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void isTheNumberSimple(int number);

int main(){
	int number;
	printf("input a number\n");
	fflush(stdout);
	scanf("%d", &number);

	isTheNumberSimple(number);
	return 0;
}

void isTheNumberSimple(int number){
	int i = 1;
	int d = 0;
	while(i<=number){
		if(number%i++ ==0){
			d++;
		}else
			continue;
		if(d==3)break;
	}
	printf("number %d is %s prime number", number, (d==2)? " " : "not");
}

