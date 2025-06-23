<div align="center">

  # 42 Libft Project

  <p align="center"><a href="https://github.com/aabdulmecitz/42-Libft" target="_blank"><img align="center" alt="libft" src="https://github.com/mcombeau/mcombeau/blob/main/42_badges/libftm.png?raw=true"> </a></p>

  [![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
  [![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)

   <a img src="https://img.shields.io/badge/score-125%20%2F%20100-success?style=for-the-badge"/></a>
   <a img src="https://img.shields.io/badge/circle-2-magenta?style=for-the-badge"/></a>
   <a img src="https://img.shields.io/badge/42-Evaluation-red?style=for-the-badge"/></a>

  <p align="center"><a href="https://https://42istanbul.com.tr/" target="_blank"><img src="https://img.shields.io/static/v1?label=&message=Istanbul&color=000&style=for-the-badge&logo=42""></a></p>

  <p align="center">125/100 :white_check_mark:</p>
</div>

## 📋 Table of Contents

- [About the Project](#about-the-project)
- [Functions](#functions)
- [Installation and Usage](#installation-and-usage)
- [Bonus Part](#bonus-part)
- [Tests](#tests)

## About the Project

Libft is the first project at 42 School, aiming to create a library with essential C functions. This library will be used and extended in future projects. The project involves rewriting several standard C library functions and creating additional utility functions.

## Functions

### Part 1 - Libc Functions

This section includes reimplementations of some basic functions from the standard C library:

| Function | Description |
|-----------|----------|
| ft_isalpha | Checks if a character is alphabetic |
| ft_isdigit | Checks if a character is a digit |
| ft_isalnum | Checks if a character is alphanumeric |
| ft_isascii | Checks if a character is in the ASCII table |
| ft_isprint | Checks if a character is printable |
| ft_strlen | Calculates the length of a string |
| ft_memset | Fills a memory area with a specific value |
| ft_bzero | Sets a memory area to zero |
| ft_memcpy | Copies data from one memory area to another |
| ft_memmove | Copies data between memory areas, even if they overlap |
| ft_strlcpy | Securely copies from one string to another with a specified length |
| ft_strlcat | Securely appends one string to the end of another |
| ft_toupper | Converts lowercase letter to uppercase |
| ft_tolower | Converts uppercase letter to lowercase |
| ft_strchr | Searches for a character in a string, starting from the beginning |
| ft_strrchr | Searches for a character in a string, starting from the end |
| ft_strncmp | Compares two strings up to a specified number of characters |
| ft_memchr | Searches for a byte in a memory block |
| ft_memcmp | Compares two memory blocks |
| ft_strnstr | Searches for a substring within a string |
| ft_atoi | Converts a numerical string to an integer |
| ft_calloc | Allocates memory with a specified size and fills it with zeros |
| ft_strdup | Creates a dynamically allocated copy of a string |

### Part 2 - Additional Functions

This section includes functions that are not in the standard library but are useful:

| Function | Description |
|-----------|----------|
| ft_substr | Extracts a substring from a string |
| ft_strjoin | Creates a new string by joining two strings |
| ft_strtrim | Removes specified characters from the beginning and end of a string |
| ft_split | Splits a string based on a specified delimiter character |
| ft_itoa | Converts an integer to a string |
| ft_strmapi | Applies a function to each character in a string |
| ft_striteri | Applies a function to each character in a string (with pointer) |
| ft_putchar_fd | Writes a character to a specified file descriptor |
| ft_putstr_fd | Writes a string to a specified file descriptor |
| ft_putendl_fd | Writes a string to a specified file descriptor and adds a newline |
| ft_putnbr_fd | Writes a number to a specified file descriptor |

## Installation and Usage

1. Clone the repository:
   ```bash
   git clone <repo-url> libft
   cd libft
   ```

2. Compile the library:
   ```bash
   make
   ```

3. To compile with bonus functions:
   ```bash
   make bonus
   ```

4. To clean the library:
   ```bash
   make clean    # Removes only .o files
   make fclean   # Removes both .o files and the library
   make re       # Cleans and recompiles
   ```

5. To use in your own program:
   ```c
   #include "libft.h"
   
   int main(void)
   {
       // You can use Libft functions
       ft_putstr_fd("Hello 42!", 1);
       return (0);
   }
   ```

6. To compile your program:
   ```bash
   gcc -o program program.c libft.a
   ```

## Bonus Part

Additional functions for working with linked lists:

| Function | Description |
|-----------|----------|
| ft_lstnew | Creates a new list node |
| ft_lstadd_front | Adds a new node to the beginning of the list |
| ft_lstsize | Counts the number of nodes in a list |
| ft_lstlast | Returns the last node of the list |
| ft_lstadd_back | Adds a new node to the end of the list |
| ft_lstdelone | Deletes a node's content |
| ft_lstclear | Deletes a list and all its nodes |
| ft_lstiter | Applies a function to each node in the list |
| ft_lstmap | Applies a function to each node and creates a new list |

## Notes

- Only allowed functions are used in the project.
- All functions are written according to 42 Norm rules.
- This library forms the foundation for future 42 projects.

---

<p align="center">
  <img src="https://img.shields.io/badge/42-Istanbul-000000?style=for-the-badge" />
</p>

