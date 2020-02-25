/*Написать функцию, которая создаст новый массив из "перевернутых" элементов массива, полученного на вход.
 *Т.е. из массива {5, 3, 2, 1} получится новый {1, 2, 3, 5}
 *
 *
 * main.c
 *
 *  Created on: 23.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void reverseArrays(int a[], int size);
void revertArray (int arr[], int size);

int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	reverseArrays(a, 9);

	//int arr[8]={12,3,4,7,5,9,8,1};
	//printArray(arr,8);
	//revertArray(arr,8);
	return 0;
}

void reverseArrays(int a[], int size){
	int i;
	for(i=0; i<=size; i++){
		printf("%d ",a[size-i]);
	}
}

/*void revertArray (int arr[], int size){
	int revertArray[size];
	int i;
	for(i=0; i<size; i++){
		revertArray[size-1-i]=arr[i];
	}
	printArray(revertArray, size);
}
*/
