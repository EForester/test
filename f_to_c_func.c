#include <stdio.h>

//Define symbolic constants
#define LOWER 0 	//Lower limit of the table
#define UPPER 300 	//Upper limit of the table
#define STEP 20 	//Step size

double f_to_c(double f);

main() {
	double f = 0;
	double c = 0;
	
	//Display header
	printf("Farenheit to Celsius");
	
	for(f = LOWER; f <= UPPER; f = f + STEP)
		printf("%6.0d, %13.1d\n",
			f, f_to_c(f));
	return 0;
}

double f_to_c() {
	double c = (5.0/9.0) * (f-32);
	return c;
}