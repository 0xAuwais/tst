
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    unsigned char frq[256];
    if (s1 == NULL || set ==NULL)
        return NULL;
    size_t f=0;
    size_t ff = ft_strlen(s1);
    char const *mdre = set;
    char const *md = s1;
    ft_bzero(frq, sizeof(frq));
    while(*mdre){
        frq[(unsigned char)*mdre] = 1;
        mdre++;
    }
    while(md[f] && frq[(unsigned char)md[f]]){
        f++;
    }
    while(ff > f && frq[(unsigned char)md[ff-1]]){
        ff--;
    }
    return ft_substr(s1, f, ff-f);
}