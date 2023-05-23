#include<stdio.h>

int main(void)
{
	int i;
	int test = 0x12345678;
	char* ptr = (char*)&test;

	for (i=0; i<sizeof(int); i++)
	{
		printf("%x", ptr[i]);
	}
	return 0;
}
