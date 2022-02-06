#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <math.h>

void explain(void) {
	puts("***********************************************************");
	puts("다음 계산기는 이렇게 사용합니다.");
	puts("한 번에 두 숫자만 가능합니다. (숫자는 소숫점 2자리 까지)");
	puts("숫자 입력 -> 엔터 -> 연산 기호 -> 숫자 입력 -> 값 출력");  //사용 방법
	puts("한 번 계산한 값은 누적되어 다시 첫번째 값이 됩니다.");
	puts("새로 계산하고 싶다면 계산이 끝난 후 c를 입력해주세요.");
	puts("다음 계산 내용을 저장하고 싶다면 s를 입력해주세요.");
	puts("************************************************************\n");
}

void first(void) {
	printf("\n--------------------------계산기--------------------------\n");
}

int main(void) {
	explain();
	first();
	while(1){
		double x, y, result;
		char cal;
		printf(": ");
		scanf("%lf", &x);
		printf("\n");
		scanf("%c", &cal);
		printf("\n: ");
		scanf("lf", &y);
		printf("-----------------------\n: %lf", result);
		scanf("");
		first();
	}
}