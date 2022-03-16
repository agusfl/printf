# Printf project for Holberton

This is a simple implementation of our mini version of the **printf** function that is included in the stdio.h library. 

# Synopsis

This repository holds all the necessary code for our custom `_printf` function. With our version of printf you can: print any character, string, integer, or decimal number, reverse your strings, transform any number to binary and octal bases, and encrypt your string with rot13 encryption.
Our version currently handles the following conversion specifiers: `c`, `s`, `i`, `d`, `b`, `o, `x`, `X` and does not yet support field width, precision, flag characters, or length modifiers. 
We add the following specifiers that are not supported by the original printf function: `r` reverse conversion and the `R` rot13 conversion.

## Environment 
* Language: C
* Operating System: Ubuntu 20.04 LTS
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
* Compiler: gcc 
 > **Note:** The code will be compiled using the options: -Wall -Werror -Wextra -pedantic -std=gnu89

## Description of each file:

| Files          |Desription
|:----------------|:-------------------------------:|
|main.h|Hold prototypes of functions, libraries headers and struct used.                   
|_putchar.c |Use of write function
|_printf.c |Print output according to a format                       
|print_char.c  |Prints a char
|print_string.c |Prints a string
|print_number.c |Prints an integer and decimal number
|print_binary.c |Prints an integer in its binary form
|print_octa.c |Prints an integer in its octal form
|print_rev.c | Prints a string in reverse
|print_rot13.c | Prints a string with rot13 encryption
|print_hexa_low.c | Prints an integer in  its hexadecimal form with letters in lowercase
|print_hexa_UPPERCASE.c | Prints an integer in its hexadecimal form with letters in uppercase

## Flowchart

<img src ="https://user-images.githubusercontent.com/64185026/158457454-974577bb-df00-405d-ad34-bc2331b35881.png">

## Authors

* [Agustin Flom](https://github.com/agusfl)
* [Mauricio Percovich](https://github.com/MauriPercovich)
