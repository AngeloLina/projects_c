/*
 * main.c
 *
 *  Created on: 29.01.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>
void calcl(float a, float b, int oper);
void calcl2(float a, float b, char oper);

int main(){

	calcl(3.14, 1.25, 5);
	float a = 1.25;
	float b = 3.12;
	int oper = 4;
	char operation = '-';

	printf("\n");
	calcl(a,b,oper);
	printf("\n");
	calcl2(a,b,operation);
	printf(3.14, 1.25,'v');
	return 0;

}

void calcl(float a, float b, int oper){
	if (oper==1){  // tip vozvraschaemih dannih, imya funkyii (parametri)
		printf("%.2f", a+b);
	}
	if (oper==2){
		printf("%.2f", a-b);
	}
	if (oper==3){
		printf("%.2f", a*b);
	}
	if (oper==4){
		if (b==0){
			printf("error");
		}else{
			printf("%.2f", a/b);
		}
	}
	if (oper<0 || oper>4){
		printf("error");
	}
}

void calcl2(float a, float b, char oper){
	switch(oper){
	case'+':
		printf("%.2f", a+b);
		break;
	case '-':
		printf("%.2f", a-b);
		break;
	case '*':
		printf("%.2f", a*b);
		break;
	case '/':
		if (b==0){
			printf("error");
			break;
		}else{
			printf("%.2f", a/b);
			break;}
	default:
		printf("error");

}
}

