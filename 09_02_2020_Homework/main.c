/*
 * main.c
 *
 *  Created on: 09.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>

int sumNumbers(int number);
int main(){

	printf("Arithmetic mean is %d", sumNumbers(5));

	return 0;

}

	int sumNumbers(int number){
		int i = 1;
		int res = 0;
		while(i<=number){
			res = res +i;
			i++;
			printf("res: %d\n", res);

		}
		return res/number;
	}





