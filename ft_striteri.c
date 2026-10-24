
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*)){
    size_t ff = 0;
    if (s == NULL || f == NULL)
        {
            return;
        }
    while(*s){
        f(ff, s);
        s++;
        ff++;
    }
}