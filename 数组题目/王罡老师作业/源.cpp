#include <iostream>
#include<stdlib.h>
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char* argv[]) {
	int a[50];
	int b[10];
	int n;

	printf("a:\n");
	rand_array(a, 20);
	printf("b:\n");
	rand_array(b, 10);
	printf("a:\n");
	sort(a, 20);
	printf("b:\n");
	sort(b, 10);


	merge(a, b, 30, 10);
	output(a, 30);

	return 0;
}

