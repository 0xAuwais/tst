
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new){
    new = ft_lstnew(new->content);
    new->next=(*lst);
    *lst=new;
}