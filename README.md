*This project has been created as part of the 42 curriculum by ecakiray.*

# libft

## Description
Libft is a foundational C library developed as part of the 42 School curriculum. The goal of this project is to recreate a set of standard C library functions, along with additional utility functions, to deepen understanding of low-level programming, memory management, and data structures.

This library serves as a reusable toolkit for future C projects. It includes reimplementations of commonly used functions from the standard C library, as well as additional functions for string manipulation, memory handling, and linked list operations.

## Instructions

### Compilation
To compile the library, run:

```bash
make
```

This will generate the static library file:

```text
libft.a
```

### Cleaning
To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To recompile everything:

```bash
make re
```

### Usage
Include the header file in your C project:

```c
#include "libft.h"
```

Then compile your project with the library:

```bash
gcc your_file.c -L. -lft
```

## Library Details

### Libc Functions
Reimplementations of standard C library functions such as:
#### For chars:
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
#### For strings:
- `ft_strlen`
- `ft_strcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_toupper`
- `ft_tolower`
#### For memory:
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_calloc`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_strdup`
#### For numbers:
- `ft_atoi`

These functions mimic the behavior of their standard counterparts.

### Additional Functions
Custom utility functions including:
- `ft_substr`
- `ft_strjoin`
- `ft_split`
- `ft_itoa`
- `ft_strtrim`
- `ft_strmapi`
- `ft_striteri`
- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

These provide extended functionality for string and memory operations.

### Linked List Functions
Implementation of a singly linked list structure and related operations:
- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Resources

### Documentation & References
- man pages

### AI Usage
AI tools such as cs50.ai were used in this project for:
- Clarifying function behavior and edge cases
- Debugging segmentation faults and memory leaks
- Improving code readability and documentation

### Testing
The project was tested using:
- libft-unit-test by alelievr: https://github.com/alelievr/libft-unit-test

It forms the basis for many future projects within the 42 curriculum.
