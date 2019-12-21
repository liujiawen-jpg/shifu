
#include<stdlib.h>
#include<stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void rand_array(int* parray, int n);
void output(int* parray, int n);
void sort(int array[], int n);
void merge(int array_a[], int array_b[], int a_n, int b_n);
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

void rand_array(int* parray, int n)
{
	int i;
	for (i = 0; i < n; i++)
		*(parray + i) = rand() % 100;
	output(parray, n);
}

void output(int* parray, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", *(parray + i));
	printf("\n");

}

void sort(int array[], int n)
{
	int i, j, t;
	for (i = 1; i < n; i++)
		for (j = 0; j < n - 1; j++)
		{
			if (array[j] > array[j + 1]) {
				t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
			}
		}
	output(array, n);
}

void merge(int array_a[], int array_b[], int a_n, int b_n)
{
	int* pa = array_a;
	int* pb = array_b;
	int i = 0, j = 0, k, label, count = 0;
	while (i < a_n && j < b_n) {
		if (*(pa + i) < *(pb + j))
			i++;
		else
		{
			label = i;
			count++;
			for (k = a_n - 1 + count; k > label; k--)
				*(pa + 1) = *pa;
			*(pa + label) = *(pb + j);
			j++;
		}
	}


}
