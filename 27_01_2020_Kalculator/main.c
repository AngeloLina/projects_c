/*
 * main.c
 *
 *  Created on: 27.01.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>

float calc(float a, float b, int oper);

int main(){

	float a, b;
	printf("please enter number\n");
	fflush(stdout);
	scanf("%f", &a);
	printf("you entered %.2f\n", a);


	printf("please enter second number\n");
	fflush(stdout);
	scanf("%f", &b);
	printf("you entered %f\n", b);

	int c;
	printf("Please enter operation number\n");
	printf("1 - Sum\n");
	printf("2 - Sub\n");
	printf("3 - Mult\n");
	printf("4 - Div\n");
	fflush(stdout);
	scanf("%d", &c);

	float res1 = calc(a,b,c);
	printf("Result: %f\n", res1);

	float res2 = calc(5,8,2);
	printf("Result2: %.2f\n", res2);
	return 0;

}

float calc(float a, float b, int oper){   //oper=c
	float res = 0;
	if(oper==1){
		return a+b;
	}
	if(oper==2){
		return a-b;
	}
	if(oper==3){
		return a*b;
	}
	if(oper==4){
		if(b==0){
			printf("error: disaster division by zero\n");
			return res;
		}
		return a/b;

		}
	if (oper<1|| oper>4){
		printf("error: wrong operation");

		}

	return res;

}
