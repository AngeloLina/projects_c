/*
 * main.c
 *
 *  Created on: 03.02.2020
 *      Author: Alina Angelo
 */

#include<stdio.h>
void calcFine(int speedFine, int lineFine);
int checkSpeed(int maxSpeed, float currentSpeed);
int checkLine(int line, int typeCar);
int getTypeCar(float weight, int axis);
int getMaxSpeed(int line);
void checkAll(int line, float weight, int axis, float currentSpeed);

int main(){
	float currentSpeed = 80;
	float weight = 4900;
	int axis = 1;
	int line = 3;

	checkAll(line, weight, axis, currentSpeed);

	return 0;
}

void checkAll(int line, float weight, int axis, float currentSpeed){
	int maxSpeedLine = getMaxSpeed(line);
	int typeCar = getTypeCar(weight, axis);
	int lineFine = checkLine(line, typeCar);
	int speedFine = checkSpeed(maxSpeedLine,currentSpeed);
	calcFine(speedFine, lineFine);
}

int getMaxSpeed(int line){
	switch(line){
	case 1:
		return 130;
		break;
	case 2:
		return 110;
		break;
	case 3:
		return 90;
		break;
	default:
		printf("Error\n");
		return -1;
	}
}

int getTypeCar(float weight, int axis){
	if(weight<=3500){
		return 1;
	}if(weight>3500 && axis>2){
		return 2;
	}
	return 3;
}

int checkLine(int line, int typeCar){
	if(line<3 && typeCar==2){
		return 100;
	}if(line==1 && typeCar==3){
	return 100;
	}
	return 0;
}

int checkSpeed(int maxSpeed, float currentSpeed){
	float res = currentSpeed - maxSpeed;
	if(res<10){
		return 0;
	}if(res >=10 && res<20){
		return 30;
	}if(res>=20 && res<30){
		return 200;
	}if(res>=30 && res<50){
		return 500;
	}if(res>=50){
		printf("You are pedestrian\n");
		return 5000;
	}
	return 0;
}
void calcFine(int speedFine, int lineFine){
	if(speedFine>0 || lineFine>0){
		printf("Dear driver\n");
		printf("Speed fine is: %d\n", speedFine);
		printf("Line fine is: %d\n", lineFine);
		printf("Total fine is: %d\n", speedFine + lineFine);
		printf("Have a nice day!");
	}else{
		printf("Have a nice day!");
	}
}
