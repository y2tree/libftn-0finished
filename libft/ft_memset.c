#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	for (size_t i = 0; i < n; i++)
		ptr[i] = (unsigned char)c;
	return (s);
}

int	main(void)
{
	char str[20] = "Hello World!";

	printf("Avant : %s\n", str);

	ft_memset(str, 'X', 5);

	printf("Apres : %s\n", str);

	char *result = ft_memset(str + 6, 'Y', 5);
	printf("Final : %s\n", str);

	return (0);
}