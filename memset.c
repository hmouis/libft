

#include <string.h>
#include <stdio.h>

int main()
{
	int i[4];
	memset(&i,-300 , 6);
	
	printf("%d\n", i[1] );
}
