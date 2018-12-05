#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int print_row(int row, int H, int L);

int main(int argc, char *argv[]) {
	int height=atoi(argv[1]);
	int level=atoi(argv[2]);
	int i=1;
	int tri_height=ceil(height/2.0);

	if(height<=0 || height%2==0){
		printf("ERROR: Bad argument. Height must be positive odd integer. \n");

	return -1;

	}

	if(argc > 3 || argc < 1) {
		printf("ERROR: Wrong number of arguments. Two required. \n");

	return -1;

	}

	if(tri_height<(int)(pow(2, level-1)) || tri_height%2 == 1) {
		printf("ERROR: Height does not allow evenly dividing requested number of levels. \n");

	return -1;

	}

	while(i<height/2+1) {
		print_row(i, height, level);
		printf("\n");
		i++;
	}
	i=height/2+1;
	while(i>=0) {
		print_row(i, height, level);
		printf("\n");
		i--;
	}
	return 0;

}

int print_row(int row, int H, int L) {
	int j;
	if(L==1) {
			for(j=1; j<=H/2-row+1; j++)
			printf(" ");
			for(j=1; j<=2*row-1; j++)
			printf("*");
			for(j=1; j<=H/2-row+1; j++)
			printf(" ");
		return 0;

		}


	else if(row<=H/4+1) {
		for(j=1; j<=H/4+1; j++)
		printf(" ");

		print_row(row, H/2, L-1);

		for(j=1; j<=H/4+1; j++)
		printf(" ");

	}
	else {
			print_row((row-(H+1)/4), H/2, L-1);
			printf(" ");
			print_row((row-(H+1)/4), H/2, L-1);
	}

	return 0;
}



