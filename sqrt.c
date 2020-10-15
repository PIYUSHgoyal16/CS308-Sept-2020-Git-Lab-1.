/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Hey, I am added by Piyush goyal
int main(int argc, char* argv[]) {

	if (argc != 2) {
		printf("NEGSUPPORT: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if (input >= 0)
		printf("NEGSUPPORT: Sqrt of %d is %f\n",input,sqrt(input));
	else
		printf("NEGSUPPORT: Sqrt of %d is %fi\n", input, sqrt(-1*input));
	printf("NEGSUPPORT: End of program. Exiting\n");
	return(0);

} // end main

