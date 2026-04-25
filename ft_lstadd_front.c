/*header*/

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;
    new -> next = *lst;
    *lst = new;
}


int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        t_list *list = NULL;
        int i = 1;
        while (i < argc)
        {
            t_list *node = ft_lstnew(argv[i]);
            if(!node)
                return (1);
            ft_lstadd_front(&list, node);
            i++;
        }
        while (list)
        {
            printf("%s", (char *)list -> content);
            list = list -> next;
            free (list);
        }
    }
    return (0);
}