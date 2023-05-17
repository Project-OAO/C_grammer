// C에서는 변수의 선언 위치에 따라 해당 변수의 유효 범위, 메모리 반환 시기, 저장되는 장소 등이 변경된다.
// 배운 내용을 계속 이을 줄 알아야 한다.
// 스택에는 return address도 같이 저장이 된다.
// 그래서 메모리 오버플로우가 일어날 경우 리턴값을 알게 되고, 이 return address 는 다음에 실행하는 코드가 저장되는 Program Counter Address에 올라가게 되고, 그에 따라 임의의 코드를 실행시킬 수 있게 된다. 이를 주의해서 코딩을 해야 한다.
// C언어에서 변수는 4가지로 구분할 수 있다.
// 1. 지역변수, 2. 전역 변수, 3. 정적 변수, 4. 레지스터 변수

// 메모리 공간은 다음과 같이 구분이 된다.
// 코드, 데이터, 스택, 힙

#include<stdio.h>

void local(void);
int var; // 전역 변수 선언

int main(void){
	printf("전역 변수 var의 초깃값은 %d입니다. \n", var);
	int i = 5;
	int var = 10; // 지역 변수 선언
	printf("main() 함수 내의 지역 변수 var의 값은 %d입니다.\n", var);

	if (i < 10)
	{
		local();
		printf("현재 변수 var의 값은 %d입니다. \n", var); // 지역 변수에 접근
	}

	printf("더 이상 main() 함수에서는 전역 벼눗 var에 접근할 수가 없습니다. \n"); // 이미 rust의 shadowing 개념이 여기에도 있었구나.

	return 0;
}

void local(void){
	var = 20; // 전역 변수의 값 변경
	printf("loca() 함수 내에서 접근한 전역 변수 var의 값은 %d입니다.\n", var);
}
