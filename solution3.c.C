/* Write a program to create 2 3*3 matrix and print multiplication of its:
Date:18/02/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],i,j,mul[3][3],k;
	clrscr();
	//Logic: To print matrix1
	printf("\n Matrix-1:");
	printf("\n___________________________________________\n");
	for(i=0;i<3;i++)//this loop for row
	{
		for(j=0;j<3;j++)//This loop for column
		{
			printf("\n Enter value for m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	//Logic:print 2d array
	printf("\n_____________________________________________\n");
	printf("\n-----------------MATRIX-1---------------------\n");
	printf("\n______________________________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m1[i][j]);
			printf("\n");
	}
	printf("_______________________________________________");
	//Logic:To print matrix 2
	printf("\n Matrix-2:");
	printf("\n_______________________________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter value for m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	//Logic:print 2D array
	printf("\n_____________________________________________\n");
	printf("\n-----------------MATRIX-2---------------------\n");
	printf("\n______________________________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m2[i][j]);
				printf("\n");
	}
	printf("___________________________________________________________\n");
	//Logic: To print multiplication of two matrix:
	printf("\n Multiplication of matrix-1 and matrix-2:");
	printf("\n___________________________________________________________\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(k=0;k<3;k++)
			{
				mul[i][j]+=m1[i][k]*m2[k][j];
			}
		}
	}
	//Logic:For printing result
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	getch();
}
