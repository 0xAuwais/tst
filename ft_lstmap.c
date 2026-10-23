
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *)){
        
        if (lst == NULL || f == NULL || del == NULL){
            return NULL;
        }
        t_list *mdre =NULL;
        t_list *mdree;
        void *fofo;
        while(lst){
            fofo = f(lst->content);
            mdree = ft_lstnew(fofo);
            if (mdree == NULL){
                del(fofo);
                ft_lstclear(&mdre, del);
                return NULL;
            }
            ft_lstadd_back(&mdre, mdree);
            lst = lst->next;
        }
        return mdre;
}