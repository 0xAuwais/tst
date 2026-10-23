
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
        char *ff = malloc(ft_strlen(s) +1);
        if (ff == NULL){
            return NULL;
        }
        size_t  n= ft_strlen(s); 
        size_t i = 0;
        while (n--){
            ff[i] = f(i, s[i]);
            i++;
        }
        ff[i] = '\0';
        return ff;
}