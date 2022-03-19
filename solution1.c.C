/* Write a program to create 2 3*3 matrix and print sum of its:
Date:18/02/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],i,j,sum[3][3];
	clrscr();
	//Logic: To print matrix1
	for(i=0;i<3;i++)//this loop for row
	{
		for(j=0;j<3;j++)//This loop for column
		{
			printf("\n Enter value for m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	printf("\n________________________________________________\n");
	printf("\n------------matrix-1---------------------------\n");
	printf("\n________________________________________________\n");
	//Logic:print 2d array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m1[i][j]);
			printf("\n");
	}
	printf("_______________________________________________");
	//Logic:To print matrix 2
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("\n________________________________________________\n");
	printf("\n------------matrix-2---------------------------\n");
	printf("\n________________________________________________\n");
	//Logic:print 2D array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m2[i][j]);
				printf("\n");
	}
	printf("___________________________________________________________\n");
	//Logic: To print sum of two matrix:
	printf("\n Sum of matrix-1 and matrix-2:");
	printf("\n___________________________________________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}

	getch();
}
