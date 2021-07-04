# ft_printf 

## Table of contents

1. [About](#about)
2. [Description](#description)
3. [libft](#libft)

## About

ft_printf is a one of the first projects a student will encounter while studying at 42. The goal of the project is to write a function which mimics printf from stdio and to discover varadic arguementg.

| Prototype | Description | Used functions |
| :---      | :--         | :---           |
| ```int ft_printf(char *format, ...)```| prinft mimic | malloc, free, write, va_start, va_arg, va_end |

**How to use:**

Clone the repository:
```bash
git clone https://github.com/ayeCaptainJack/ft_printf.git
```
go to the repository and run make
```bash
make
```
copy libftprintf.a and printf.h into your directory and include printf.h in your files
```c
#include "libft.h"
```
compile your files with libftprintf.a
```bash
gcc yourfile_01.c yourfile_02.c libftprintf.a
```
use clean to delete all object files, fclean to remove all object files and libftprintf.a and re to recompile the library 
```bash
make clean / make clean / make re 
```

## Description 

ft_printf is a mimic of printf. It doesnt handle all of the conversion and flags but a few of them. If the function is called with input that would give a warning or error when compiling on the real printf behaviour is undefined. There´s also no buffer management, which means if an error occurs while printing the function will print until that point and returns -1. 

**Conversions:**

1. i & d - prints an integer
2. u - prints an unsigned integer
3. c - prints a char
4. p - prints the value of a pointer as a hexadecimal number
5. s - prints a string
6. x & X printd an unsigned integer as a hexadecimal number (x for lowercase, X for uppercase)
7. n - saves number of printed characters until here in a pointer

**Flags:**
1. "-" - prints the spaces added by the width-flag after the conversion instead of before
2. 0 - prints zeros infront of the conversion. 0 and "-" together end in undefined behaviour 
3. width - determines the minimum printed characters. If the length of the conversion is smaller than width it will print width - length spaces infront or behind (depending on "-" flag)
4. .precision - different behavior on different conversions. For strings its the minimum printed characters of the string. For Integer its the number of digits to be printed. For better documentation look into the manual of printf. 
5. \* - means that the precision or width will be represneted by an integer passed as an arguement. If the width is negative the "-"flag will be true, the 0-flag will be false and the width will be -1 * width. A negative precision is the same as no precision.

## libft

libft remains unused in this project although it is allowed to use. There's no good reason for that and this won't be the case for future projects. 
ft_printf was added to libft but functions from libft were deleted in the files of ft_printf. 
