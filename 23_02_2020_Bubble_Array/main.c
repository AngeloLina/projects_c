/*
 * main.c
 *
 *  Created on: 23.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>

int main(){

	int a[]= {4,1,5,2,3};
	int isSorted=0;
	int i;
	while(isSorted==0){
		isSorted=1;
		for(i=0; i<=3; i++){
			if(a[i]>a[i+1]){
				isSorted=0;
				int tmp = a[i];
				a[i]=a[i+1];
				a[i+1]= tmp;
			}
		}
	}
	for(i=0; i<=4; i++){
		printf("%d ", a[i]);
	}

	return 0;
}

