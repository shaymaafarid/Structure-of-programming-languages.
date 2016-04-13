//===========================================================================
//=  to run on linux you can use =
//=    - gcc exp.c -lm           =
//=    - ./a.out                 =
//===========================================================================
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


double expon(double x);
double rand_val(int seed); 

int main(void){
    double   lambda;
    double   res;
    int      num_values;
    char     temp_string[256];
    int      i;
 
     // Prompt for rate (lambda)
     printf("Rate in customers per second =======================> ");
     scanf("%s", temp_string);
     lambda = atof(temp_string); 
     // Prompt for number of values to generate
     printf("Number of values to generate =======================> ");
     scanf("%s", temp_string);
     num_values = atoi(temp_string);
     // Generate and output exponential random variables
    for (i=0; i<num_values; i++)
  {
         res = expon(1.0 / lambda);
    	 printf( "%lf \n", res);
  }

}

//===========================================================================
//=  Function to generate exponentially distributed random variables        =
//=    - Input:  Mean value of distribution                                 =
//=    - Output: Returns with exponentially distributed random variable     =
//===========================================================================
double expon(double x)
{
  double z;                     // Uniform random number (0 < z < 1)
  double exp_value;             // Computed exponential value to be returned

  // Pull a uniform random number (0 < z < 1)
 /* do
  {
    float rndm = rand()/(float)RAND_MAX;
  }
  while ((z == 0) || (z == 1));*/
  z = rand()/(double)RAND_MAX;

  // Compute exponential random variable using inversion method
  exp_value = -x * log(z);

  return(exp_value);
}

