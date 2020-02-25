/*
 * main.c
 *
 *  Created on: 10.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void printStars(int num, int row);
int main(){

	printStars(22,5);
	return 0;

}

void printStars(int num, int row){
	int i = 1, j = 1;
	while (i<=num){
		if(j<row){
			printf("*");
			j++;
		}else{
			printf("*\n");
			j=1;
		}
		i++;
	}
}
