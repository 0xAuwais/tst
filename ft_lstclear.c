
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*)){
    if (lst == NULL)
        {return;}
    t_list *l = *lst;
    t_list *ll;
    while(l != NULL){
        ll = l->next;
        ft_lstdelone(l, del);
        l = ll;
    }
    *lst = NULL;
}