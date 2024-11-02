#include <unistd.h>
#include <stddef.h>

void ft_putstr_fd(char *s, int fd)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}

int main()
{
    char *s = "helllo caaa";
    ft_putstr_fd(s,1);
}
