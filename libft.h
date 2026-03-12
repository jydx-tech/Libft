/*HEADER*/

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>

/*str manip*/
int ft_strlen(char *str);

/* memory */
void    ft_bzero(void *s, size_t n);
void *ft_memset (void *s, int c, size_t n);

# endif