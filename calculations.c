#include <stdio.h>
#include <math.h>


#include <string.h>

int main()
{
	char functionName[50];
	double p1;
	double p2;
	double r;

	printf("Enter the input line\n");
	scanf("%s %lf %lf", functionName, &p1, &p2);

	printf("Function is: %s with parameters %lf and %lf\n" , functionName, p1, p2);

	if(strcmp(functionName, "sqrt") == 0)
		r = sqrt(p1);
	else if(strcmp(functionName, "pow") == 0)
		r = pow(p1, p2);
	else if(strcmp(functionName, "sqrt") == 0)
		r = sqrt(p1);
	else if(strcmp(functionName, "sqrt") == 0)
		r = sqrt(p1);
	else if(strcmp(functionName, "sqrt") == 0)
		r = sqrt(p1);

	printf("Result is: %lf\n", r);

}
