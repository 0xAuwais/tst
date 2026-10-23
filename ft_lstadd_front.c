
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new){
    if(new ==NULL)
        return;
    new = ft_lstnew(new->content);
    new->next=(*lst);
    *lst=new;
}