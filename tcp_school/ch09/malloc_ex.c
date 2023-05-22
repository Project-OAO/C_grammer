#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	ptr_arr = (int *) malloc(arr_len * sizeof(int));

	if(ptr_arr == NULL)
	{
		printf("메모리의 동적 할당에 실패했습니다.\n");
	}


	return 0;
}
