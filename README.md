# libft
Goal of this project is to reimplement set of functions from the libc and some additional functions.
This project is part of my studies at 42 Prague.

## Compilation

To compile the library, run:

```sh
make
```

To clean object files:

```sh
make clean
```

To remove compiled files and the library:

```sh
make fclean
```

To recompile everything:

```sh
make re
```

## Usage
1. Clone the repository:
```sh
git clone git@github.com:ylam21/libft.git libft
```
2. Include header folder in your source file:
```c
 #include "libft.h"
```
3. Link the compiled library:
```sh
gcc -I<path_to_libft> your_program.c -L<path_to_libft> -lft -o a.out
```
## Functions checklist
### Libc functions:
- [X] isalpha
- [X] isdigit
- [X] isalnum
- [X] isascii
- [X] isprint
- [X] strlen
- [X] memset
- [X] bzero
- [X] memcpy
- [X] memmove
- [X] strlcpy
- [X] strlcat
- [X] toupper
- [X] tolower
- [x] strchr
- [x] strrchr
- [x] strncmp
- [x] memchr
- [x] memcmp
- [x] strnstr
- [x] atoi
- [x] calloc
- [x] strdup
### Additional functions:
- [x] ft_substr
- [x] ft_strjoin
- [x] ft_strtrim
- [x] ft_split
- [x] ft_itoa
- [x] ft_strmapi
- [x] ft_striteri
- [x] ft_putchar_fd
- [x] ft_putstr_fd
- [x] ft_putendl_fd
- [x] ft_putnbr_fd
### Bonus part:
- [ ] ft_lstnew
- [ ] ft_lstadd_front
- [ ] ft_lstsize
- [ ] ft_lstlast
- [ ] ft_lstadd_back
- [ ] ft_lstdelone
- [ ] ft_lstclear
- [ ] ft_lstiter
- [ ] ft_lstmap
