
![Logo Monty](https://camo.githubusercontent.com/b32fc84889b63b30d73d84553419e4190d552be0e75b28f106478bb3c1859798/68747470733a2f2f7777772e6765656b73756c74642e636f6d2f77702d636f6e74656e742f75706c6f6164732f323032302f30352f4d6f6e74792d537461636b732d5175657565732e6a7067) 
# Monty Bytecode Interpreter

This repository contains the files for Holberton's **Monty Bytecode Interpreter**. 

### Requirements:

<ul>
<li>Allowed editors: vi, vim, emacs</li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic</li>
<li>All your files should end with a new line</li>
<li>A README.md file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
<li>You allowed to use a maximum of one global variable</li>
<li>No more than 5 functions per file</li>
<li>You are allowed to use the C standard library</li>
<li>The prototypes of all your functions should be included in your header file called monty.h</li>
<li>Don’t forget to push your header file</li>
<li>All your header files should be include guarded</li>
<li>You are expected to do the tasks in the order shown in the project</li>
</ul>

### GCC command to compile:

<li>gcc -Wall -Werror -Wextra -pedantic *.c -o monty</li>

### Examples:

<li>The push opcode: the opcode push pushes an element to the stack. </li>

    Usage: push <int>
    where <int> is an integer
    if <int> is not an integer or if there is no argument given to push, print the error message L<line_number>: usage: push integer, followed by a new line, and exit with the status EXIT_FAILURE
    where is the line number in the file
    You won’t have to deal with overflows. Use the atoi function

<li>The pall opcode: the opcode pall prints all the values on the stack, starting from the top of the stack. </li>

    Usage pall
    Format: see example
    If the stack is empty, don’t print anything

### Contact Info:
- Enyel Feliz Mercado <Enyelfm@gmail.com>
- Jimmy Hernandez Rivera <jimoem24@gmail.com>
