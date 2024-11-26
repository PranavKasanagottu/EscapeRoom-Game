#include<stdio.h>
#include<stdlib.h>
#define A1 125
#define A2 195
#define A3 118
int main()
{
 system("cls"); //to clear screen in output
 printf("                    *********THE ESCAPE ROOM*********\n\n\n");
 printf("You are currently in a room which has a door with 3 locks.\n");
 printf("The only way to escape is to open all three locks and go out.\n");
 printf("For each lock to open you have to answer a question in three attempts.\n");
 printf("If you don't answer the question in three attempts you can't unlock the door and you lose.\n");
 printf("You can only proceed to the next question if you answer the previous question correctly.\n");
 printf("You may find hints or clues in the room for some questions.\n");
 printf("Good luck on trying to escape the room.\n\n");
 int attempts=1;
 float answer1;
 printf("First Question:\n");
 printf("Solve this with BODMAS Rule: 20*6+40/8\n");
 printf("Enter the answer: ");
 do             //First question loop
 {
	if(attempts>3)
	{
		printf("You have lost.\n");
		break;
	}
	if(scanf("%f",&answer1)==0)       //loop to only enter number as input
	{
		printf("Invalid input.Please enter a number.\n");
		while(getchar() != '\n');
		continue;
	}
	if(answer1!=A1)
	{
		if(attempts!=3)              //to not get Try again after 3 attempts
		{
			printf("Wrong Answer, Try again.\n");
		}	
		attempts++;
	}
	else
	{
		printf("\aBingo! You answered correctly in %d attempts.\n",attempts);
		printf("The first lock has opened.\n");
	}
 }while(answer1!=A1);               //do while loop 1 ends
 
 if(answer1==A1)
 {
  int turns=1;
  float answer2;
  printf("\n\n");	 
  printf("Second Question:\n");
  printf("How many countries are there in the world currently?\n");
  printf("Enter the answer: ");
  do                       //Second question loop
  {
	if(turns>3)
	{
		printf("You have lost.\n");
		break;
	}		
	if(scanf("%f",&answer2)==0)                     //loop to only enter number as input
	{
		printf("Invalid input.Please enter a number.\n");
		while(getchar() != '\n');
		continue;
	}
	if(answer2!=A2)
	{
	   if(turns!=3)                     //to not get Try again after 3 attempts
	   {
		printf("Wrong Answer, Try again.\nHint: The answer is close to 200.\n");
	   }	
	   turns++;
	}
	else
	{
		printf("\aBingo! You answered correctly in %d attempts.\n",turns);
		printf("The second lock has opened.\n");	
	}
 }while(answer2!=A2);           //do while loop 2 ends
 
 if(answer2==A2)
 {
 int tries=1;
 float answer3;
 printf("\n\n");	 
 printf("Third and Final Question:\n");
 printf("How many elements are there in the modern periodic table?\n");
 printf("Enter the answer: ");
 do                           // Third question loop
 {
	if(tries>3)
	{
		printf("You have lost.\n");
		break;
	}		
	if(scanf("%f",&answer3)==0)                  //loop to only enter number as input
	{
		 printf("Invalid input.Please enter a number.\n");
		 while(getchar() != '\n');
		 continue;
	}
	if(answer3!=A3)
	{
		if(tries!=3)             //to not get Try again after 3 attempts
		{
			printf("Wrong Answer, Try again.\nHint: The answer is close to 120.\n");
		}	
		tries++;
	}
	else
	{
		printf("\aBingo! You answered correctly in %d attempts.\n",tries);
		printf("The third lock has opened.\n\n");
		printf("*****CONGRATULATIONS!! YOU HAVE ESCAPED THE ROOM.*****\n\n\n");
	}
 }while(answer3!=A3);           //do while loop 3 ends
 }
 }
 int a;
 printf("How much did you like the game?\n");
 printf("Choose one out of the below 4 options.\n");
 printf("1(Very Good)\n");
 printf("2(Good)\n");
 printf("3(Average)\n");
 printf("4(Bad)\n");
 scanf("%d",&a);
 while(a<1 || a>4)
 {
	 if(a<1 || a>4)
	 {
	printf("Please enter a number from one to four.\n");
	 scanf("%d",&a);
	 }
 }
 printf("Thank you for your feedback.\n");
 printf("We wish you play the game again anytime soon.");
 return 0;  //end of program
}



