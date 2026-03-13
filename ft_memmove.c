/*header*/

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n);

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *res;
    unsigned char *source;

    if (!dest && !src)
        return (NULL);
    res = (unsigned char *)dest;
    source = (unsigned char *)src;
    if (res > source)
    {
        while (n > 0)
        {
            n--;
            res[n] = source[n];
        }
    }
    else
        ft_memcpy(res, source, n);
    return (res);
}
/*
int main()
 {
    char dest[20] = "Hello 42 ca va ?";
    char src[20] = "bonjour 42 ****";

    printf("before : %s\n", dest);
    ft_memmove(dest, src, 8);
    printf("After : %s\n", dest);
    return 0;
}*/