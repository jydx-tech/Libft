/*header*/

#include "libft.h"

static int len_nb(int n)
{
    int len;

    len = 0;
    if (n <= 0)
    {
        n = -n;
        len++;
    }
    while (n > 0)
    {
        len++;
        n = n /10;
    }
    return (len);    
}

char *ft_itoa(int n)
{
    char *res;
    int len;

    len = len_nb(n);
    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return (NULL);
    if (n < 0)
    {
        res[0] = '-';
        n = -n;
    }
    if (n == 0)
        res[0] = '0';
    res[len] = '\0';
    while (n > 0)
    {
        res[len - 1] = (n % 10) + '0';
        len--;
        n = n / 10;
    }
    return (res);
}

int main(int argc, char **argv)
{
    char *test;

    if (argc == 2)
    {
        test = ft_itoa(ft_atoi(argv[1]));
        printf("resultat: %s\n", test);
        free (test);
    }
    return (0);
}