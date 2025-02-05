#include <stdio.h>

void voidExample();

int main(){
	printf("here is the first code to be executed in main");
	voidExample();
	printf("the end is near");
	return 1;
}

void voidExample(){
	int a = 7;
	char b = 'b';
	printf("voidExample is being called");
}
