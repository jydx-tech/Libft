/*Header*/

#include <libft.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
/*
#include <stdio.h>

int main(void)
{
    char test[25] = "Coucou les genoux";

    printf("Longueur super array : %d\n", ft_strlen(test));
    return (0);
}*/