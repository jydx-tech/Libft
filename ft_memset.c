/*header*/

#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *res;

    i = 0;
    res = (unsigned char *)s;
    while(i < n)
    {
        res[i] = c;
        i++;
    }
    return (res);
}
/*
#include <stdio.h>

int main()
 {
    char str[20] = "Hello 42 ca va ?";

    printf("before : %s\n", str);
    ft_memset(str, '*', 5);
    printf("After : %s\n", str);
    return 0;
}*/