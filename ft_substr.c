
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
        if (start >= ft_strlen(s))
            len = 0;
        else if (len > ft_strlen(s) - start)
            len = ft_strlen(s) - start;
        char *f = malloc(len+1);
        char *ff = f;
        size_t fofo = len;
        if (f == NULL)
            return NULL;
        while(fofo && s[start])
        {
            *f = s[start];
            f++;
            start++;
            fofo--;
        }
        *f = '\0';
        return ff;
}