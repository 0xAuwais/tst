
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2){
    char *f = malloc(ft_strlen(s1)+ft_strlen(s2) +1 );
    if (f == NULL)
        return NULL;
    ft_strlcpy(f, s1, ft_strlen(s1) +1 );
    ft_strlcat(f, s2, ft_strlen(s1)+ft_strlen(s2) + 1);
    return f;
}