/*
 * main.c
 *
 *  Created on: 16.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void triangle(int linesNumber);
int main(){

	triangle(6);

	return 0;
}

void triangle(int linesNumber){
	//printf("Please enter the number of lines: ");
	//fflush stdout;
	//scanf("%d\n", &linesNumber);
	//fflush stdout;
	int i,j;
	for(i=1; i<=linesNumber; i++){
		//printf("%d", i%3);
		for(j=1; j<=i; j++){
			//printf(" ");

		//for(j=0; j<=i*3; j++){
			printf("*");
		}
		printf("\n");
	}
	}


