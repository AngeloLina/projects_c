/*
 * main.c
 *
 *  Created on: 17.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void changeNumber(int arr[], int size);
void changeChar(char chars[], int size);

int main(){

	int array[] = {1,2,5,7,8,9,1,2,5};
	changeNumber(array,9);
	printf("\n");
	char privet[]= "PrivEt MedvEd";
	changeChar(privet, 13);

	return 0;
}

void changeNumber(int arr[], int size){
	int i;
	for(i=0; i<size; i++){
		if(arr[i]==1){
			arr[i]=0;
		}
		printf("%d ", arr[i]);
	}
}

void changeChar(char chars[], int size){
	int i;
	for(i=0; i<size; i++){
		if(chars[i]=='e' || chars[i]=='E'){
			chars[i]=' ';
		}
		printf("%c", chars[i]);
	}
}
