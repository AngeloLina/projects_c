/*
 * main.c
 *
 *  Created on: 16.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void printStars(int starsInRow, int rows);
void printStarsSquare(int stars);

int main(){
	printStars(6,8);
	printf("\n");
	printStarsSquare(4);

	return 0;
}

void printStars(int starsInRow, int rows){
	int i,j;
	for(j=0; j<=rows; j++){
		for(i=0; i<=starsInRow; i++){
			printf("*");
		}
		printf("\n");
	}
}

void printStarsSquare(int stars){
	int i,j;
	for(i=1; i<=stars; i++){
		for(j=1; j<=stars; j++){
			if(i==1 || j==1 || i==stars || j==stars){
				printf("*");
				}else{
					printf(" ");
				}
		}
		printf("\n");
		}
	}
