/*
 * main.c
 *
 *  Created on: 05.02.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>
int sumDigitis(int num);

int main(){
	printf("%d", sumDigitis(8756));
	return 0;

}

int sumDigitis(int num){
	int sum =0;
	while(num!=0){
		sum = sum + num%10;
		num = num/10;
	}
	return sum;
}
