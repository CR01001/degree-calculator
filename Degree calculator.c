/* Name: Conor Rimmer	Student ID: 10828456
This is a program for my 4023CEM (Introduction into computer engineering) coursework
The task includes
(a). Display a welcome message on the computer screen
(b). the number of modules used for the degree classification calculation is 10 in total,
we need to read each module mark one by one and calculate the average mark for the set of modules,
and print it on the screen.
(c). if the average mark is 70% or greater, display first class message.
If the average mark is 50% < x < 70% then display the second class message.
If the average mark is 40% < x < 50% then display the third class message.
If the mark is < 40% then display the 'No degree' message.*/


#include <stdio.h>

int main()
{

	int mod1, mod2, mod3, mod4, mod5, mod6, mod7, mod8, mod9, mod10, sum, average;
	printf("Hello, thank you for choosing the grade calculator 3000! \n");
	printf("Please enter each of your 10 module marks, with a space on the new line for each mark. \n");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &mod1, &mod2, &mod3, &mod4, &mod5, &mod6, &mod7, &mod8, &mod9, &mod10);
	sum = mod1 + mod2 + mod3 + mod4 + mod5 + mod6 + mod7 + mod8 + mod9 + mod10;
	average = sum / 10;
	printf("Your average mark is: %d%\n", average);
	if ((average) >= (70))
	{
		if ((average) <= (100))
		{
			printf("Congratulations, You got a first class degree!\n");
		}
	}
	else if ((average) >= (50))
	{
		if ((average) <= (70))
		{
			printf("Congratulations, You got a second class degree!\n");
		}
	}
	else if ((average) >= (40))
	{
		if ((average) <= (50))
		{
			printf("Congratulations, You got a third class degree!\n");
		}
	}
	else if ((average) <= (40))
	{
		printf("Sorry… you haven’t got a degree…\n");
	}
	else if ((average) > (100))
	{
		printf("Something went wrong, please try again\n");
	}
}