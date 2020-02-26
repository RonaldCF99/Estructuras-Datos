#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

main()
{
	float fahr, celsius;
	float lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

/* lower limit of temperatuire scale */
/* upper limit */
/* step size */
	celsius = lower;
	
	printf("C\tF\n");
	while (celsius <= upper) {
		fahr = (celsius * 9/5) + 32 ;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
