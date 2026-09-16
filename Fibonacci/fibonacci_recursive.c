/* 
   Fibonacci Sequence Recursive 
    - Has to be run with any number that is a positive
*/

#include <stdio.h>



/* Function for Recursive */
int fib_r(int n)
{

  /* Mathmatically correct equation */
  if (n > 1) return fib_r(n-1) + fib_r(n-2);
  
  /* Base Cases */
  else if (n == 1) return 1;
  else if (n == 0) return 0;
  
  /* Any negitive numner Error Handeling */
  else
  {
    printf("Error: Number must be a Positive");
    return -1;
  }
  
}



int main(void) 
{

  int length;

  /* User Input */
  printf("Enter sequence length: ");
  scanf ("%d", &length);
    

  /* Loop for Recursive */
  printf("Recursive Sequence Result: ");
  for (int i = 0; i < length; i++)
  {
  
    /* Calling on the fib function with the value of i */
    printf("%d", fib_r(i));
    
    /* If the code is incomplete will add a comma for the next number */
    if ( i != (length - 1)) printf(",");
    else printf("\n");
  }
  
  return 0;
}

/*Luminokx*/
/*Credit to Portfolio Courses*/