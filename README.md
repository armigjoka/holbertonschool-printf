Programming in C - Project "printf" 

The printf command outputs the arguments you specifiy in formatted form. Printf supports all format specifications for strings as the printf() funciton in C.

The _printf function is created as a project for Holberton School. In this project the participant that were part of it :(Armela Gjoka and Eno Gupe)created with very careuly the repository and all the codes were included for function printf.

The standart function of printf that we use on the project are:

typedef, va_start, va_list, va_end, va_arg, struct etc.

FILE NAME / Description of the file

_printf.c:
The main _printf.c is used to handle the array containing all the format specifier used.

_putchar.c:
Function that print one character on the function.

_main.h:
is the Header of thr file that contains all the prototypes and also the structere that is used on the project.

main.c:
The file that test the program, to see if the costum _printf function works.

print_functions.c:
It is the file of the function which is used to print the variable format like: char, string, int, only using the putchar because all those variable format has only a character and thast's why we use only putchar. In case of the variable format float which is for a lot of numbers than should use printf function.

man_3_printf:
Is the manual which we created about the printf project. What we are gone use, the functions, the variables, the initializing process,the structure etc.

Variables format:
%c which is used for the characters

%s which is used for the string

%d which is used for integers

%% which is used for no argument

%r which is used to print the reverse of a string

%R which is used to print the string in Rot13

%b which is used to print the binary  form of integer

%o which is used to print the octal number

%x whic is used to print the lower case of hexidecimal number

%X which is used to print thE Upper case of hexidecimal number.


COMPILATION process:

$gcc -Wall -Werror -Wextra -pedantic *.c

The function _printf is used on the C programming and the prototypeis :
_printf(const char *format, ...)


An example of _printf:

int main()
{
  _printf("%s, %d, %c\n", School, Age, Year);
} 


Format it is refers to a string whin any specifier numbers followed with an symbol which is '%'.

All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4.

Authors of this project: 
Armela Gjoka- armigjoka
Eno Gupe- eno007.



