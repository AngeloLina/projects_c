/*
 * main.c
 *
 *  Created on: 03.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
int isNumberEven(int a); //Task1
void printEvenCheck(int a); //TAsk1
void isNumberInTheRange(int a); //Task2
float average(int num1, int num2, int num3); //Task3

int main(){
	printEvenCheck(5); //Task1
	isNumberInTheRange(10); //Task2
	int num1 =2, num2 =5, num3 =6; // Task3
	float res = average(num1, num2, num3); //Task 3
	printf("%f\n", res); //TAsk3
	printf("%f\n", average(4,7,12)); //Task3
	return 0;
}

//Task1
int isNumberEven(int a){ //Task1
	if(a%2 ==0){
		return 0;
	}else{
		return 1;
	}
}

void printEvenCheck(int a){
	(isNumberEven(a)==0)? printf("%d is even\n", a):printf("%d is odd\n", a);
}

//Task2
void isNumberInTheRange(int a){
	if(a>=0&&a<=100){
		printf("yes\n");

	}else{
		printf("no\n");
	}
	(a>=0&&a<=100)? printf("y\n"):printf("n\n");
}


//Task3

float average(int num1, int num2, int num3){
	return (float)(num1 + num2 + num3)/3;

}
