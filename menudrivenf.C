/* Write a menu driven program to perform following task using user define
function and its different category:
1)Addition
2)Substraction
3)Division
4)Modulus
5)Exit
Date:21-mar-2022*/
#include<stdio.h>
#include<conio.h>
void addition();//function without argument without returntype
void subtraction(int,int);//function with argument without returntype
int division();//function without argument with returntype
int modulus(int,int);//function with argument with returntype
int menu();//function without argument with returntype
void main ()
{
	int c,x,y,div;
	char yn;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:
				addition();//function call
				break;
			case 2:
				printf("\n Enter two number:");
				scanf("%d%d",&x,&y);
				subtraction(x,y);//function call
				break;
			case 3:
				div=division();//function call
				printf("\n Division is %d",div);
				break;
			case 4:
				printf("\n Enter two values:");
				scanf("%d%d",&x,&y);
				div=modulus(x,y);
				printf("\n Modulus of %d&%d is %d",x,y,div);
				break;
			case 5:
				exit(0);
			default:
				printf("\n Invalid choice. Please enter valid choice.Please enter no.between 1 to 5");
				break;
		       }
	printf("\n\t Do you want to continue?(yes=Y/y or no=N/n):");
	flushall();
	scanf("%c",&yn);
	}while(yn=='Y'||yn=='y');
	getch();
}
int menu()
{
	int choice;
	printf("\n Menu:");
	printf("\n___________________");
	printf("\n1.Addition \n2.substraction \n3.Division \n4.modulus \n5.exit");
	printf("\n_____________________________\n");
	printf("\n\t Enter your choice:");
	scanf("%d",&choice);
	return(choice);
}
void addition()
{
	int x,y;
	printf("\n Enter two value:");
	scanf("%d%d",&x,&y);
	printf("\n Addion of %d &%d is %d",x,y,x+y);
}
void subtraction(int x,int y)
{
	printf("Substraction of %d & %d is %d",x,y,x-y);
}
int division()
{
	int x,y;
	printf("Enter two value:");
	scanf("%d%d",&x,&y);
	return(x/y);
}
int modulus(int x,int y)
{
	return(x%y);
}



