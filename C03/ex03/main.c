#include <unistd.h>
#include <stdio.h>

char    *ft_strncat(char *str, char *src, unsigned int nb);

int    main()
{
    char src[] = "Network41kasaq";
    char dest[] = "4212 ";
    printf("%s", ft_strncat(dest, src, 5));
}
