/*
 * main.c
 *
 *  Created on: 10.02.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>
int countNumber1(int num);
int countNumber2(int num);
int countNumber3(int num);

int main(){

	printf("%d\n",countNumber1(0));
	printf("%d\n",countNumber2(45678));
	printf("%d\n",countNumber3(57893583));
	return 0;
}

int countNumber1(int num){
	int res = 0;
	//if(num==0) return 1;

	do{
		printf("res: %d\n", res);
		num = num/10;
		res++;
	}while(num>0);

	return res;
}

int countNumber2(int num){
	int res = (num==0)? 1 : 0;
	while(num!=0){
		num = num/10;
		res++;
	}
	return res;
}

int countNumber3(int num){
	int res = 1;
	int i;
	for(i=1; i<num; i++){
		num = num/10;
		res++;
		printf("res: %d,i: %d, num: %d\n" res, i, num);
	}
	return res;
}
