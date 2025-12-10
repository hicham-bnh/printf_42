_This project was created as part of the 42 curriculum by mobenhab_

# 📌 Description

**ft_printf** is a custom implementation of the standard C function `printf`, developed as part of the School 42 curriculum.

The goal is to recreate the behavior of `printf` while supporting a limited set of format specifiers, using variadic arguments and custom output functions.

Example:

ft_printf("Hello %s, number = %d\n", "world", 42);

## ⚙️ Supported Conversions
Specifier	Description
%c	Print a character
%s	Print a string
%p	Print a pointer in hexadecimal
%d	Print a signed integer
%i	Print a signed integer
%u	Print an unsigned integer
%x	Print a hexadecimal (lowercase)
%X	Print a hexadecimal (uppercase)
%%	Print a percent sign

## 🔧 Compilation
Run:

bash
Copier le code
make
This will generate the libftprintf.a library.

Cleaning:

bash
Copier le code
make clean
make fclean
make re
## ▶️ Usage
Example of using ft_printf in your program:

c
Copier le code
#include "ft_printf.h"

int main(void)
{
    ft_printf("Value: %d\n", 42);
    return 0;
}
Compile with:

bash
Copier le code
cc main.c libftprintf.a
✔️ Testing the Output
Compare your ft_printf to the real printf:

bash
Copier le code
./a.out > mine.txt
printf "Value: %d\n" 42 > real.txt
diff mine.txt real.txt
No output from diff means both match.
Performance Testing

Count the number of printed characters:

int len = ft_printf("Hello %s\n", "world");
ft_printf("Printed length = %d\n", len);

## 📚 Resources

va_list, va_start, va_arg, va_end

ASCII / Hexadecimal conversions

Standard printf behavior

## 👤 Author
- [@mobenhab](https://www.github.com/hicham-bnh)