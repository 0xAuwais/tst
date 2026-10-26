
#include "libft.h"

static size_t mdre(char const *s, char c){
    size_t n = 0;
    size_t i = 0;
    char const *f = s;
    while(f[i])
        {
            if (f[i] == c){
            i++;
        }else break;
        }
        
    while(s[i]){
        if (s[i]!= c && (s[i+1] == c || s[i+1] == '\0'))
        {
            n++;
        }
        i++;
    }
    return n;
}

static int mdree(char **f,char const *s, char c){
    size_t i = 0;
    char const *meow;
    size_t ii = 0;
    while(s[i])
    {
        if (s[i] == c)
            i++;
        else {
            meow = ft_strchr(s + i, c);
        if (meow == NULL)
            {
                meow = s + ft_strlen(s);
            }
            f[ii] = ft_substr(s, i, meow-&s[i]);
            if (f[ii] == NULL)
            {
                return 0;
            }
            ii++;
            i = meow -s;
        }
    }
    return (1);
} 

static void idk(char **f){
        size_t i = 0;
        while(f[i]){
            free(f[i]);
            i++;
        }
        free(f);
} 
char **ft_split(char const *s, char c){
    if (s == NULL)
        return NULL;
    char **f;
    f = ft_calloc( mdre(s, c)+1, sizeof(char *));
    if (f == NULL)
        return NULL;
    if (!mdree(f, s, c))
        {
            idk(f);
            return NULL;
        }
        return f;
}