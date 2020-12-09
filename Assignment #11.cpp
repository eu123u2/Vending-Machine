/*Ezigbo Ugochukwu 10/15/2020 Assignment #11 This program displays a message that corresponds to two input keys*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{
	/*define variables*/
	char l;
	int n;
	
	/*get input values*/
	printf("Enter the letter");
	scanf(" %c", &l);
	
	printf("Enter the number");
	scanf("%d", &n);
	
	/*calculate, error check, and display*/
	
	switch (l)
	{
		case 'W':
		{
			switch (n)
		{
				case 0:
					printf("Smartwater \n");
					break;
				case 1:
					printf("Fiji \n");
					break;
				case 2:
					printf("Evian \n");
					break;
				case 3:
					printf("Voss \n");
					break;
				default:
					printf("Invalid input /n");
		}
			break;
		}
		case 'P':
		{
			switch (n)
			{
				case 0:
					printf("Sierra mist \n");
					break;
				case 1:
					printf("Dr. Pepper \n");
					break;
				case 2: case 3:
					printf("Mountain dew \n");
					break;
				default:
					printf("Invalid input \n");
			}
			break;
		}
		default:
		printf("Invalid input \n");
	}
	return 0;
}
/*Enter the letterW
Enter the number0
Smartwater
Enter the letterP
Enter the number2
Mountain dew
Enter the letterC
Enter the number1
Invalid input /n*/
