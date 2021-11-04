#include<stdio.h> //헤더를 선언하는 부분으로, 표준함수를 사용하기 위해 꼭 선언해야 한다. 2021.11.04 - Ted

int main(void)
{
	printf("Hello World! \n");
	printf("%d %d %d\n", 30, 40, 50); //C언어의 출력함수. 콤마(,)를 기준으로 앞쪽에 서식문자를(%d는 10진수), 뒤쪽에 출력할 내용을 쓴다. 2021.11.04 - Ted
	return 0; // main함수의 출력값. int형이므로 정수로 되어 있다. 2021.11.04 - Ted
}