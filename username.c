/* SEARCHING A username IN 1-D ARRAY */

#include "login.h"

extern int count ,nu;

int user_name(int p,char **name)
{

	if(p == 1)
	{
		printf("Enter the name : \n");
		for(int i = nu ; i < count ; i++)
		{
			scanf("%[^\n]s",*(name +i));
			__fpurge(stdin);
		}
		return true;
	}

	else
	{

		char *find;
		char *search  = (char *)calloc(10,sizeof(char));

		printf("Enter a name  : \n");
		scanf("%[^\n]s",search);
		__fpurge(stdin);
		int k ;
		for(int k = 0 ; k < count ; k++)
		{

			find  = strstr(*(name + k) , search);
		}
		if(find)
		{
			return k;
		}
		else
		{
			return false;
		}
	}
}

