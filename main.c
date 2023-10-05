#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int num;
	
	printf("정수 하나를 입력하시오: ");
	scanf("%d", &num);
	
	if (num<0)
		printf("절댓값은 %d", -num);
	else
		printf("절댓값은 %d", num);
	
	return 0;
}
