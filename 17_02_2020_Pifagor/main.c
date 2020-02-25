/*
 * main.c
 *
 *  Created on: 17.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
#include<stdlib.h>

void printPifagor();
void printPifagorArray();

int main(){
	//printPifagor();
	printPifagorArray();
	return 0;
}

void printPifagor(){
	int i,j;
	for(i=1; i<=10; i++){
		for(j=1; j<=10; j++){
			int res = i*j;
			printf("%d\t", res);
		}
		printf("\n");
	}
}

void printPifagorArray(){
	int rows = 10;
	int columns = 10;
	int table[rows][columns];
	int i,j;
	for(i=1; i<=rows; i++){
		for(j=1; j<=columns; j++){
			table[i][j]=i*j;
			}

	}
	for(i=1; i<=rows; i++){
		for(j=1; j<=columns; j++){
			printf("%7d", table[i][j]);
		}
		printf("\n");
	}
}


