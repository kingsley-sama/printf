#include <stdio.h>
#include "main.h"

int main(void)
{
	char *k, *g;
	k = "kingsley";
	g = "gift";
	printf("%d,\n",_printf("hello world this is %c is for: %s  and %c is for :%s. and we are 100%% cooking\n",'G', g, 'K', k));
	printf("%d,\n",printf("hello world this is %c is for: %s  and %c is for :%s. and we are 100%% cooking\n",'G', g, 'K', k));
	printf("%d,\n",printf("hello world this is %c is for: %s  and %c is for :%s. and we are 100%% cooking\n",'G', g, 'K', k));
	return (0);
}
