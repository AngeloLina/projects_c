/*
 * main.c
 *
 *  Created on: 24.02.2020
 *      Author: Alina Angelo
 */

#include <stdio.h>
#include <string.h>
	char* sayHello();
	char* sayHelloTo(char* name);


int main(){
	char name[256];
	fflush(stdout);
	scanf("%s", &name);

	printf("%s", sayHelloTo(name));
	char string[100]="This is a string";
	printf("\n%s\n", string);
	char* string2 = "This is also string";
	printf("%s\n", string2);
	string[5] = 'X';
	printf("%s\n", string);
	puts(sayHello());
	printf("%s", sayHello());


	return 0;
}

	char* sayHello(){
		return "Hello!\n";
	}

	char* sayHelloTo(char* name){
		char welcome[256]="Hello, ";
		if(strcmp("Lena", name)==0){
			strcpy(name, "Master!");
			}
		return strcat(welcome, name);
	}
