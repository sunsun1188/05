#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	char c;
	int num=0;
	
	while ( (c=getchar())!='\n') {
		
		if (c>='0'&&c<='9') {
			num++;
		}
	}
	
	printf("���� ����  ����: %d\n",num);
		
	return 0;
}
