#include<stdio.h>

int main(void)
{
	char str[20];
	char ch;

	puts("당신의 이름을 적어주세요 : ");
	scanf("%s",str);

	fflush(stdin);

	puts("당신의 성별을 약자로 적어주세요 : ");
	puts("(남성=M, 여성=F)");
	scanf("%c", &ch);

	if(ch=='m'|ch=='M')
	{
		printf("당신은 남성인 %s입니다.\n",str);
	}
	else if(ch == 'f'|ch=='F')
	{
		printf("당신은 여성인 %s입니다.\n", str);
	}
	else
	{
		printf("%s님, 성별을 잘못 입력하셨습니다.\n",str);
	}
	return 0;
}
