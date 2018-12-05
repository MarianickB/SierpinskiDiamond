#include <stdio.h>
#include <stdlib.h>

void main(int argc, char* argv[])
{
	int height=atoi(argv[1]);

	int row,j;

	if(argc!=2) {
		printf("ERROR: Too many arguments supplied.\n");
	}

	if(height<0 || (height%2==0)) {
		printf("ERROR: Bad argument. Height must be a positive odd integer.\n");
	}

	else {

	for(row=1;row<=(height/2)+1;row++)
	{
		for(j=1;j<=(height/2)-row+1;j++)
		printf(" ");
		for(j=1;j<=2*row-1;j++)
		printf("*");
		printf("\n");
	}

	for(row=(height/2);row>=1;row--)
	{
		for(j=1;j<=(height/2)-row+1;j++)
		printf(" ");
		for(j=1;j<=2*row-1;j++)
		printf("*");
		printf("\n");
	}

	}

}


