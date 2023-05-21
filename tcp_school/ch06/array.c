#include<stdio.h>

int main(void){
	int i;
	int sum = 0;
	int grade[3];

	grade[0] = 85;
	grade[1] = 65;
	grade[2] = 90;

	for (i=0;i<3;i++){
		sum += grade[i];
	}

	printf("국영수 과목 총 점수 합계는 %d점이고, 평균 점수는 %f점입니다.\n", sum, (double)sum/3);
}
