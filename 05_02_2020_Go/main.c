/*
 * main.c
 *
 *  Created on: 05.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void gagarin(int number);
void gagarin2(int number);
int main(){
	gagarin(10);
	gagarin2(10);


	return 0;
}

void gagarin(int number){
	int i = 1;
	for(i =1; i<=number; i++){
		printf("%d\n", i);
	}
	printf("Go!");
}

void gagarin2(int number){
	while(number!=0){
		printf("%d\n", number);
		number--;
	}
	printf("Go!");
}
