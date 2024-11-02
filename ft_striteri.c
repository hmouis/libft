#include "libft.h"

void ff(unsigned int i, char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}

void  ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int  i;

    i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        write(1,&s[i],1);
        i++;
    }
}

#include <stdio.h>

int main()
{
    char s[] = "1he1Heh hdahd";
    void (*f)(unsigned int, char*);
    f = ff;
    
    ft_striteri(s,f);
    return (0);




}
