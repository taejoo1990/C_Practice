#include<stdio.h> //헤더를 선언하는 부분으로, 표준함수를 사용하기 위해 꼭 선언해야 한다. 2021.11.04 - Ted

int main(void)
{
	printf("Hello World! \n"); 
	printf("%d %d %d\n", 30, 40, 50); //C언어의 출력함수이다. %d는 서식문자로 콤마(,)뒤에 출력할 값이 10진수임을 의미한다. 2021.11.04 - Ted

	printf("My age: %d \n", 20);
	printf("%d is my point \n", 100);
	printf("Good \nmorning \neverybody\n");
	return 0; // main함수의 출력값. int형이므로 정수로 되어 있다. 2021.11.04 - Ted
}