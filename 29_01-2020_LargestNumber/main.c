/*
 * main.c
 *
 *  Created on: 29.01.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>
int greatestNumber(int a, int b, int c);
void printGreatest(int a, int b, int c);

int main(){

	printGreatest(5,12,4);
	printGreatest(8,21,56);
	return 0;

}

void printGreatest(int a, int b, int c){
	printf("The greatest number of %d, %d, %d is %d\n", a,b,c, greatestNumber(a,b,c));
}

int greatestNumber(int a, int b, int c){
	int greatest;
	if(a>b){
		if(a>c){
			greatest = a;
		}else{
			greatest = c;
		}
		}else{
			if(b>c){
				greatest = b;
			}else{
				greatest = c;
			}

	}
	return greatest;
}


