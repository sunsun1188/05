#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int num;
	
	printf("���� �ϳ��� �Է��Ͻÿ�: ");
	scanf("%d", &num);
	
	if (num<0)
		printf("������ %d", -num);
	else
		printf("������ %d", num);
	
	return 0;
}
