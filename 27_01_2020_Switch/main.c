/*
 * main.c
 *
 *  Created on: 27.01.2020
 *      Author: Alina Angelo
 */
#include<stdio.h>

void fan(int mode);
int main(){

	fan(3);
	return 0;

}
void fan(int mode){
	switch(mode){
	case 0:
		printf("Power is off\n");
		break;
	case 1:
		printf("Low mode\n");
		break;
	case 2:
		printf("Middle mode\n");
		break;
	case 3:
		printf("High mode\n");
		break;
	case 4:
		printf("Wrong mode\n");
		break;


	}
}
