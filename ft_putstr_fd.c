
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if (s ==NULL)
    {
        return;
    }
    char *f = s;
    while(*f){
        write(fd, f, 1);
        f++;
    }
}