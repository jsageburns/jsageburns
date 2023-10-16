
#include <stdio.h>
char* str = "";
int possible[] = {6,3,2,8,7};
int score = 0;
int num = 0;
int reducednum = 0;
int len = 0;


	
int findNumbers(int score, int possible[], int num, int reducednum)
{
	if (reducednum < 0) {
		return 0;
	}
	
	if (reducednum == 0) {
	
		printf("%s", str);
	}	
	
	for (int i = 0; i<5; i++) 
	{
		if ((score-possible[i]) >= 0) 
		{
			len = sizeof(*str) / sizeof(char);
			str[len + 1] = possible[i];
		}
	}
	return 0;
}


int main() {

	
	
	int score = 2;

	while (score >= 2) {
			
		printf("Enter 0 or 1 to STOP.\nEnter the NFL score:\n");
		scanf("%d", &score);
		
		if (score == 0) {
			printf("Score is 0. Stopping.");
		}
		else if (score == 1) {
			printf("Score is 1. Stopping.");
		}
		else {
			printf("Score is 2 or more.\n");
			//----------------------
			findNumbers(score, possible, num, reducednum);
				
			}
		}
	return 0;
	}
		


