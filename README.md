# printf

## About

This project is about recreating the C library function printf.
The function printf sends formatted output to stdout (standard output stream)
by formatting the argument(s) passed in and converting the arguments(s) into a
character string. This version will be used as _printf.

## Our Files

File		| Description
---------------	| ------------
holberton.h  	| header file with different prototypes
_printf.c    	| prints the specified format __c__
print_numbers.c | printts an integer __i__,__d__
man_3_printf    | The manpage
function.c      | It prints out the characters
_putchar.c      | It writes the character to stdout
_print_X.c	| prints a number in hexadecimal with uppercase __X__
_print_binary.c	| converts decimal to base 2
_print_o.c	| converts a decimal to  base 8 __o__
_print_u.c	| converts decimal to unsigned int __u__
_print_x.c	| prints a number in hexadecimal __x__

### Conversion specifiers

All our conversion specifiers in the files

Specifier | Returns
--------- | --------
c	  | returns character
s 	  | returns a string
i and d	  | converts int to signed decimal
o     	  | converts a decimal to base 8
u	  | converts decimal to unsigned int
x	  | converts unsigned int into unsigned hexadecimal
%	  | write '%'

### How to use the code

Git clone

$ git clone https://github.com/merryta/printf.git

### Author

JOHN KATUA - [Github](https://github.com/johnkatua)

MERON MAMO - [Github](https://github.com/merryta)
