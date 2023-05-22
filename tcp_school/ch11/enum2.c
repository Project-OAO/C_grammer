#include<stdio.h>

enum Days {MON, TUE, WED, THU, FRI, SAT, SUN};

int main(void)
{
	enum Days today;
	today = SAT;

	if(today >= SAT && today <= SUN)
	{
		puts("오늘은 주말이네요~ 주말에도 열심히 공부하는 여러분은 최고에요!");
	}
	else
	{
		printf("주말까지 %d일 남았어요~ 조금만 더 힘내자구요!", 5-today);
	}

	puts("각각의 열거체에 해당하는 정수값은 다음과 같습니다.");
	printf("%d %d %d %d %d %d %d\n", MON, TUE, WED, THU, FRI, SAT, SUN);

	return 0;
}
