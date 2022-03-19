/* Write a program to create 3*3 matrix and check it is diagonal or not:
Date:18/02/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[3][3],i,j,c;
	clrscr();
	//Logic: To print matrix
	for(i=0;i<3;i++)//this loop for row
	{
		for(j=0;j<3;j++)//This loop for column
		{
			printf("\n Enter value for m1[%d][%d]:",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	//Logic:print 2d array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m[i][j]);
			printf("\n");
	}
	printf("_______________________________________________");
	printf("\n Matrix\n");
	printf("\n==============================================\n");
	for(i=0;i<3;i++)
	{
		for(j=0,c=0;j<3;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0,c=0;j<3;j++)
		{
			if(i==j && m[i][j]==0)
			{
				c=1;
			}
			if(i!=j && m[i][j]!=0)
			{
				c=1;
			}
		}
	}
	if(c==1)
	{
		printf("\n The matrix is not diagonal matrix:");
	}
	else
	{
		printf("\n The matrix is a diagonal matrix:");
	}
	getch();
}