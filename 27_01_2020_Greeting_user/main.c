/*
 * main.c
 *
 *  Created on: 27.01.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>
int main(){

	char answer;
	printf("Do you want me to salute you?(y/n)\n");
	scanf("%c", &answer);
	if(answer=='y'){
		printf("Hello, user!");
	}else if(answer=='n'){
		printf("I didn't want to salute you anyway");
	}else{
		printf("I can't understand your input!");

	}
	return 0;
}
