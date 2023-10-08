#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int answer=81;
	int num;
	
	do {
		
		printf("Guess a number: ");
		scanf("%d",&num);
		
		if (num>answer) {
			printf("High\n");
		} 
		else if (num<answer) {
			printf("Low\n");
		}
	} 
	while(num!=answer);
	
	printf("congratulation!\n");
			
	return 0;
}
