#include "y.tab.h"
#include <stdio.h>

int main()
{
	yydebug = 1;
	int x = yyparse();

	if(x==1)
		printf("---------------Failure------------------\n");
	else
		printf("---------------Successful---------------\n");
	return 0;
}