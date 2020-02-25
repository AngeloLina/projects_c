/*
 * main.c
 *
 *  Created on: 05.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>

int sumNumber(int number);
void sumNumber2(int number);

int main(){

	printf("%d", sumNumber(9));
	printf("\n");
	sumNumber2(5);

	int i;
	for(i=100; i>0; i/=2){
		printf("i is %d\n", i);
	}
	return 0;

}
int sumNumber(int number){
	int i = 1;
	int res = 0;
	while(i<= number){
		res += i;
		i++;
	}
	return res;
}

void sumNumber2(int number){
	int i;
	int res = 0;
	for(i=1; i<=number; i++){
		res = res +i;
		printf("step %d sum is %d\n", i, res);

	}
}
