/*
 * main.c
 *
 *  Created on: 05.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>

int main(){

	//int a =10;
	//int b = 20;
	//while(a<b){
		//printf("%d\n", ++a);
//}
	int countEven=0;
	int c = 10;
	int d = 20;
	while(c<d){
		if(c%2==0)
			countEven++;
		c++;
	}
	printf("They are %d even number in sequence\n", countEven );

	int input;
	do{
		printf("Enter a divider for 100 (remember, that you cannot divide by zero)\n");
		fflush(stdout);
		scanf("%d", &input);
	}while(input==0);

	printf("100/%d = %d\n", input, 100/input);
	printf("and the remember will be %d, by the way", 100%input);



	return 0;

}

