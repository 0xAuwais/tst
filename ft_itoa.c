
#include "libft.h"

static size_t mdre(long n){
    size_t f;
    if (n<0)
        n*=-1;
    f = n;
    while(f){
        f/=10;
    }
    return f+1;
}

char *ft_itoa(int n){
    
} 