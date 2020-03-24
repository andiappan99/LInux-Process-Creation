Process Creation in Linux

Requirements:
1.linux os
2.gcc compiler

step1: start the linux os by booting or via virtual machine.
step2: download all 3 c files(process_creation.c,parent_termination.c,execv.c).
step3: open the terminal for the directory where you have saved the files.

Q1.create a parent and child process?

	1)In terminal of saved file directory go and type 
		$gcc process_creation.c
	2)then
		$./a.out
	
	output:
		WorldHello
		   (or)
		HelloWorld

Q2.Terminate the parent process after the child process terminate?

	1)In terminal of saved file directory go and type 
		$gcc parent_termination.c
	2)then
		$./a.out
	
	output:
		now parent terminating

Q3.By using execv , display the other file output for the program of addition of five numbers?

	 1)In terminal of saved file directory go and type 
		$gcc process_creation.c -o fo
	 2)then
		$./fo
  	 3)now in terminal
		$gcc execv.c
	 4)then
		$a.out
	
	output:
	enter five numbers:5
	enter five numbers:4
	enter five numbers:3
	enter five numbers:2
	enter five numbers:1
	WorldHello
		  