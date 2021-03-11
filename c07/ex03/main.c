#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

// int main(int argc, char **argv)
int main()
{
	char* good[]= {"goo", "lee", "aw", "asfasa", "33"};
	printf("%s", ft_strjoin(5, good, "!?"));
}