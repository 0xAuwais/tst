
#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *)){
        t_list *ff = lst;
        if (ff == NULL || f == NULL){
            return;
        }
        while(ff){
            f(ff->content);
            ff = ff->next;
        }
}