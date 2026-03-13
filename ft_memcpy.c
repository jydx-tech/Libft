/*header*/

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    unsigned char *res;
    unsigned char *source;

    if (!dest && !src)
        return (NULL);
    i = 0;
    res = (unsigned char *)dest;
    source = (unsigned char *)src;
    while (i < n)
    {
        res[i] = source[i];
        i++;
    }
    return (res);
}
/*
int main()
 {
    char dest[20] = "Hello 42 ca va ?";
    char src[20] = "bonjour 42 ****";

    printf("before : %s\n", dest);
    ft_memcpy(dest, src, 8);
    printf("After : %s\n", dest);
    return 0;
}*/