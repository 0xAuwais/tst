
#include "libft.h"

unsigned int ft_lstsize(t_list *lst){
    unsigned int f = 0;
    while(lst != NULL){
        f++;
        lst = lst->next;
    }
    return f;
}