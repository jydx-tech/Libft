/*HEADER*/

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>

/*chars*/
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

/*strings*/
int ft_strlen(char *str);

/* memory */
void    ft_bzero(void *s, size_t n);
void    *ft_memset (void *s, int c, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);

#endif