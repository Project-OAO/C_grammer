#include<stdio.h>

int main(void){
	int arr[2][3] = {
		{10, 20, 30},
		{40, 50, 60}
	};

	printf("%d\n", *arr[0]);
	printf("%d\n", *arr[1]);
}
