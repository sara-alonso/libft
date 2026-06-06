*This project has been created as part of the 42 curriculum by salonso-.*

# libft

## Description

This project implements a custom C library named `libft`. The main goal is to recreate essential standard C functions from scratch, along with basic linked-list helpers, so that future projects can rely on a small, reusable utility library.

The library includes:
- character classification and conversion helpers (`ft_isalpha`, `ft_toupper`, etc.);
- string and memory manipulation functions (`ft_strlen`, `ft_memcpy`, `ft_strjoin`, `ft_split`, etc.);
- dynamic allocation and conversion utilities (`ft_calloc`, `ft_itoa`, `ft_atoi`);
- file descriptor output helpers (`ft_putstr_fd`, `ft_putnbr_fd`, etc.);
- linked-list utilities (`ft_lstnew`, `ft_lstadd_back`, `ft_lstclear`, `ft_lstmap`).

This repository is intended as a foundational piece for later C projects, especially when a minimal custom library is preferred over repeated manual implementations.

## Instructions

### Build the library

From the repository root, run:

```sh
make all
```

This generates the static library file `libft.a`.

### Clean generated files

```sh
make clean
make fclean
make re
```

### Use the library in another C program

Include the header:

```c
#include "libft.h"
```

Compile your program with the library, for example:

```sh
gcc main.c -L. -lft -o main
```

## Resources

Classic references and useful material related to this project:
- The C Standard Library documentation and manual pages (`man`, `https://man7.org/linux/man-pages/man3/`);
- The 42 `libft` subject and its official guidelines;
- The C Programming Language by Kernighan and Ritchie;
- Tutorials and notes about memory management, string handling, and linked lists in C.
- Youtube video: `https://www.youtube.com/watch?v=BD0giwqBbm0`

### Use of AI

AI assistance was used in this project to:
- Draft and improve the project documentation (*README.md*).
- Review the C implementation structure and the Makefile logic;
- Help verify the build flow and fix minor implementation issues.
- Creation of acurate tests

It was used mainly for explanation, code review, and documentation support, not as a replacement for the core algorithmic work required by the assignment.
