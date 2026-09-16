/* 
   Fibonacci Sequence Both 
    - Has to be run with any number that is greater then 2
    - For Experimenting the speeds between Iterative and Recursive
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

  int term_1 = 0;
  int term_2 = 1;
  int term_n = 0;
  int length;
 
 do
 {
 
  /* User Input */
  printf("Enter sequence length: ");
  scanf ("%d", &length);
  
  /* Error Handeling*/
  if (length < 3)
    printf("Error: Please input a number greater than 3\n");
    
 } 
 
  while (length < 3);
  printf("Iterative Sequence Result: ");
  printf("%d,%d,", term_1, term_2);
  
  /* Loop for Iterative */
  for (int i = 2; i < length; i++)
  {
  
    /* New value for term_n */ 
    term_n = term_1 + term_2;
    printf("%d", term_n);
    
    /* Moves all the int up by one to make room for the next number */
    term_1 = term_2;
    term_2 = term_n;
    
    /* If the code is incomplete will add a comma for the next number */
    if ( i != (length - 1)) printf(",");
    else printf("\n");
    
  }
  
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

