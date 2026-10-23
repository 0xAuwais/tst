
#include "libft.h"

unsigned int ft_lstsize(t_list *lst){
    size_t f = 0;
    while(lst != NULL){
        f++;
        lst = lst->next;
    }
    return f;
}