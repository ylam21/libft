# libft
Goal of this project is to reimplement set of functions from the libc.
This project is part of my studies at 42Prague.
## Compilation and usage:
1. Clone the repository:
```sh
git clone git@github.com:ylam21/libft.git libft
```
2. Redirect to the repository:
```sh
cd libft
```
 3. Compile with:
 ```sh
make all
```
4. Include header folder in your source file:
```c
 #include "libft.h"
```
 5. Link the compiled library:
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
- [ ] strchr
- [ ] strrchr
- [ ] strncmp
- [ ] memchr
- [ ] memcmp
- [ ] strnstr
- [ ] atoi
- [ ] calloc
- [ ] strdup
### Additional functions:
- [ ] ft_substr
- [ ] ft_strjoin
- [ ] ft_strtrim
- [ ] ft_split
- [ ] ft_itoa
- [ ] ft_strmapi
- [ ] ft_striteri
- [ ] ft_putchar_fd
- [ ] ft_putstr_fd
- [ ] ft_putendl_fd
- [ ] ft_putnbr_fd
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
