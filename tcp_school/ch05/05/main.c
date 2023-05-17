#include<stdio.h>

int sum(int n){
	int i;
	int result = 0;

	for (i = 1; i <= n; i++){
		result += i;
	}

	return result
}

int rSum(int n){
	if(n==1){
		return 1;
	}
	return n + rSum(n-1);
}

int main(void){
}
