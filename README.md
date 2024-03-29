C -FUNCTIONS AND NESTED LOOPS, HOLBERTON CODING SCHOOL:

1. What are nested loops and how to use them.
2. What is a function and how do you use functions.
3. What is the difference between a declaration and a definition of a function.
4. What is a prototype.
5. Scope of variables.
6. What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
7. What are header files and how to to use them with #include

GENERAL RULES:

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
You do not have to understand the call by reference (address), stack, static variables, recursions or arrays, yet.

C -HELLO, WORLD, HOLBERTON CODING SCHOOL:

Why C programming is awesome
Who invented C
Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
What happens when you type gcc main.c
What is an entry point
What is main
How to print text using printf, puts and putchar
How to get the size of a specific type using the unary operator sizeof
How to compile using gcc
What is the default program name when compiling with gcc
What is the official C coding style and how to check your code with betty-style
How to find the right header to include in your source code when using a standard library function
How does the main function influence the return value of the program

MANUAL OR HELP:

gcc
printf (3)
puts
putchar

GENERAL RULES:

Allowed editors: vi, vim, emacs.
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line.
A README.md file at the root of the repo, containing a description of the repository.
A README.md file, at the root of the folder of this project, containing a description of the project.
There should be no errors and no warnings during compilation.
You are not allowed to use system.
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
All your scripts should be exactly two lines long ($ wc -l file should print 2)
The first line of all your files should be exactly #!/bin/bash

MORE INFORMATION, BETTY LINTER:

To run the Betty linter just with command betty <filename>:

Go to the Betty repository
Clone the repo to your local machine
cd into the Betty directory
Install the linter with sudo ./install.sh
emacs or vi a new file called betty, and copy the script below:

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
*/

Once saved, exit file and change permissions to apply to all users with chmod a+x betty
Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/
You can now type betty <filename> to run the Betty linter!
