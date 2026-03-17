/*header*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *src1;
    unsigned char *src2;
    size_t  i;

    i = 0;
    src1 = (unsigned char *)s1;
    src2 = (unsigned char *)s2;
    while (i < n)
    {
            if (src1[i] != src2[i])
            return (src1[i] - src2[i]);
        i++;
    }
    return (0);
}
/*
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        printf("first argv: %s\n", argv[1]);
        printf("second argv: %s\n", argv[2]);
        printf("memcmp = %d\n", ft_memcmp(argv[1], argv[2], atoi(argv[3])));
    }
    return (0);
}*/