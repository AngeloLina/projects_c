/*Написать функцию, которая на вход получает массив целых чисел
 *  от 0 до n, но они располагаются не по порядку {2, 3, 1, ....., 0, n}
 *  и одно число пропущено. Функция должна найти (за один цикл) пропущенное число и напечатать его.
 * main.c
 *
 *  Created on: 23.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void missingNumber(int a[], int size);
int main(){

	int a[] = {2,8,5,1,3,4,6,0};
	missingNumber(a, 8);
	return 0;
}

void missingNumber(int a[], int size){
	int sum1=0;
	int sum2=0;
	int i;
	for(i=0; i<size; i++){
		sum1 = sum1 + a[i];
		//printf("%d) ", i);
		sum2 = sum2 + i;
		//printf("%d\n", sum2);
	}
	sum2=sum2 + i;
	printf("The missing number is: %d", sum2-sum1);
}
