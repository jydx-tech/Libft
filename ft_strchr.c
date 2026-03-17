/*header*/

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if ( (char)c== '\0')
        return ((char *)&s[i]);
    return (NULL);
}
/*
int main(int argc, char **argv)
{
    char *res;

    if (argc == 3)
    {
        res = ft_strchr(argv[1], argv[2][0]);
        printf("string: %s\n", argv[1]);
        printf("to search: %c\n", argv[2][0]);
        res = ft_strchr(argv[1], argv[2][0]);
        printf("res: %s\n", res);
    }
    return (0);
}*/