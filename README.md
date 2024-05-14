
# ft_printf 
This project is a simplified implementation of the printf function in C, as part of the 42 Network curriculum. 
## Table of Contents
- [ft\_printf](#ft_printf)
- [Table of Contents](#table-of-contents)
- [Introduction](#introduction)
- [Usage](#usage)
- [Format Specifiers](#format-specifiers)
- [Building](#building)
- [Resources](#resources)
## Introduction 
The `ft_printf` function is designed to mimic the behavior of the standard `printf` function in C, allowing formatted output to be printed to the console or a file stream.
## Usage
To use this `ft_printf` function in your project, follow these steps: 
1. Clone the repository: `git clone https://github.com/rlabbiz/ft_printf.git`  
2. Include the `ft_printf.h` header file in your source code. 
3. Call the `ft_printf` function with the desired format string and arguments.
Example: 
```c 
#include "ft_printf.h" 
int main() { 
	ft_printf("Hello, %s!\n", "world"); 
	return 0; 
}
```
## Format Specifiers

The `ft_printf` function supports various format specifiers to format different types of data. Some common format specifiers include:

-   `%s`: String
-   `%d`, `%i`: Signed decimal integer
-   `%u`: Unsigned decimal integer
-   `%c`: Character
-   `%f`: Floating-point number

Refer to the `ft_printf` source code and documentation for a complete list of format specifiers and their usage.

## Building

To build the `ft_printf` library, use the provided Makefile. Run `make` in the root directory of the project to compile the library.

## Resources
- [https://www.geeksforgeeks.org/variadic-functions-in-c/](https://www.geeksforgeeks.org/variadic-functions-in-c/)
- [https://en.cppreference.com/w/c/variadic](https://en.cppreference.com/w/c/variadic)
- [https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
