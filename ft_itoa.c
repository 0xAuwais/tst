
#include "libft.h"

static size_t mdre(long n){
    size_t f;
    size_t ff = 0;
    if (n<0)
        n*=-1;
    if (n==0)ff++;
    f = n;
    while(f){
        f/=10;
        ff++;
    }
    return ff;
}

char *ft_itoa(int n){
    size_t temp = mdre(n)+1;
    size_t f = mdre(n)+1;
    long nn = n;
    if (nn<0)
    {
        f++;
        nn *= -1;
    }
    char *ff = malloc(f);
    if (ff ==NULL)
        return NULL;
    size_t fofo = f;
    ff[fofo-1]='\0';
    size_t i = fofo-1;
    while(i--){
        ff[i] = nn%10 + '0';
        nn/=10;
    }
    if (f >temp)
        ff[0]='-';
    return ff;
} 