#include<stdio.h>

enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

int main(void)
{
	enum Weather wt;
	wt = SUNNY;

	switch(wt)
	{
		case SUNNY:
			puts("오늘은 햇볕이 쨍쨍!");
			break;
		case CLOUD:
			puts("비가 올락말락하네요!");
			break;
		case RAIN:
			puts("비가 내려요... 우산 챙기세요!");
			break;
		case SNOW:
			puts("오늘은 눈싸움 하는 날!");
			break;
		default: puts("도대체 무슨 날씨인건가요!!!");
	}

	puts("각각의 열거체제 해당하는 정수값은 다음과 같습니다.");
	printf("%d %d %d %d\n", SUNNY, CLOUD, RAIN, SNOW);
	return 0;
}
