Compile command gcc -o fibonacci fibonacci.c
Compile command gcc -o fibonacci_recursive fibonacci_recursive.c
Compile command gcc -o fibonacci_iterative fibonacci_iterative.c

Start-up: ./fibonacci
Start-up: ./fibonacci_recursive
Start-up: ./fibonacci_iterative

  The Fibonacci sequence is the series of numbers 
  0, 1, 1, 2, 3, 5, 8, 13...
  Formally, it can be expressed as:
  
    fib0 = 0
    fib1 = 1
    fibn = fibn-1 + fibn-2
    
  -Iterative approach
    for (int =2; --Because every number after 1 is unknown so they number has to be greater than one for the function to be called -- i++)
    term_n = term1 + term2; --Reassigning term_n to the addition of term1 and term2
    term1 = term2
    term2 = term_n -- this allows the sequence to continue without losing a spot for the next number

  -Recursive solution
    for (int i = 0; --First number of the sequence -- i < length; --what the user inputs for the sequence length -- i++)
    if (n > 1) return fib(n-1) + fib(n-2); -- mathmatically correct equation for the squence
    Include error handling

Update 1.0
-Created the main Fibonacci program
-Added an iterative solution
-Added a recursive solution
-Both solutions are included in the main program
-Comments have been added to explain how both solutions work
-Added timing comments/code to compare the iterative and recursive approaches

Files
Fibonacci/
|--fibonacci.c
|--fibonacci_iterative.c
|--fibonacci_recursive.c
|--README.txt

fibonacci.c
-Contains both the iterative and recursive Fibonacci solutions
-Used to compare the two different approaches

fibonacci_iterative.c
-Contains only the iterative Fibonacci solution

fibonacci_recursive.c
-Contains only the recursive Fibonacci solution
```
