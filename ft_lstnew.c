
#include "libft.h"

t_list *ft_lstnew(void *content){
    t_list *f = malloc(sizeof(t_list));
    if (f == NULL)
        return NULL;
    f->content=content;
    f->next=NULL;
    return f;
}