1. Write a program using fork() and wait()
2. Process Address Space
3. Write a program using Shared Memory


Exercise for Process

Exercise 1
Write a program using fork() and wait(): Create 3 child processes by fork(), and the relationship between processes is shown in the process tree below. Design your program using fork() and wait() to guarantee that the creation order of 4 processes (including parent process) is 1-2-3-4, and the exited order should be 3-2-4-1

Requirements
Write a program using fork() and wait(): Create 3 child processes by fork(). If the order of creation (including parentprocess) is 1-2-3-4, the exited order should be 3-2-4-1.

1. Firstly, print "This is the beginning of the program!”;
2. Create 3 child processes and control the creation and exit order using fork() and
wait().
	• Each child process should print: "The exited child process ID now is **, whose parent process ID is **."
	• The final exited parent process should print: "The final exited process ID now is *."
3. Finally, print "This is the END of the program!";
Note that:
(1) sleep() is not allowed here.
(2) If the creation and exited order is wrong, no points will be given.
(3) If the output format is not consistent with the requirements, it will be penalized.

Exercise 2
Process address space: According to the provided program, analyze the memory layout of the program.
For the variables data1, data2, data3, data4, data4[0], data5:
(1) Where are these variables stored? Give you reasons.
A. Code segment
B. Data segment
C. BSS
D. Heap
E. Stack segment
(2) Estimate the stack size of RecursiveFunc1 and give your reasons.

Submit your answers in one PDF file:
(1) Draw a diagram to show the locations of variables and give your reasons.
(2) Analyze the stack size and give your reasons; Include some screenshots of running results if needed instead of only providing theoretical analysis.

Exercise 3

Write a program using Shared Memory which receives three positive integers from the command line. In the program:
1. Check whether the number of command line arguments is 3. If not, print the error information and return;
"Error: The number of input integers now is *. Please input 3 integers.”
2. Use fork() to create a child process:
1) In the child process, sort these 3 integers in increasing order, and print the sorting results; "Child process ID: **; Sorting results: **, **, **."
2) According to the sorting results above, use execv() to call para_sum.c to calculate the sum of the two smallest arguments in the parent process; "Parent process ID: **; Calculate the sum of the two smallest arguments: **, **.\n"

