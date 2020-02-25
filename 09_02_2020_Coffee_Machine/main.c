/*Написать программу для Кофе-машины;
 * main.c
 *
 *  Created on: 09.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void coffeeMachine(int choice);
void Latte();
void Americano();
void Espresso();
void Cappuccino();
void addCoffee(int quantity);
void addWater(int quantity);
void addMilk(int quantity);

int main(){

	int choice;
	printf("Enter number of drink\n");
	scanf("%d", &choice);

	coffeeMachine(choice);

	return 0;

}

void coffeeMachine(int choice){
	switch(choice){
	case 1:
		Latte();
		break;
	case 2:
		Americano();
		break;
	case 3:
		Espresso();
		break;
	case 4:
		Cappuccino();
		break;
	default:
		printf("Such drink doesn't exist!\n");

	}
}
void Latte(){
	printf("your choice Latte");
	addCoffee(5);
	addWater(20);
	addMilk(180);
	printf("Your Latte is ready\n");
}
void Americano(){
	printf("your choice Americano");
	addCoffee(8);
	addWater(180);
	printf("Your Americano is ready\n");
}
void Espresso(){
	printf("your choice Espresso");
	addCoffee(8);
	addWater(50);
	printf("Your Espresso is ready\n");
}
void Cappuccino(){
	printf("your choice Cappuccino\n");
	addCoffee(8);
	addWater(20);
	addMilk(180);
	printf("Your Cappuccino is ready\n");
}

void addCoffee(int quantity){
	printf("adding %d g coffee\n", quantity);
}
void addWater(int quantity){
	printf("adding %d ml water\n", quantity);
}
void addMilk(int quantity){
	printf("adding %d ml milk\n", quantity);
}
