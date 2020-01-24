/* SEARCHING A Password IN 2-D ARRAY */

#include "login.h"

extern int count,nu1;

int passwd(int p,char **pass)
{
	if( p == 1)
	{
		printf("Enter the password : \n");
		for(int i = nu1 ; i < count ; i++)
		{
			scanf("%[^\n]s",*(pass +i));
		__fpurge(stdin);
		}
		return true;
	}
	else
	{
		char *find = NULL;
		char *psd = (char *)calloc(10,sizeof(char));

		printf("Enter the password : \n");
		scanf("%[^\n]s",psd);
		__fpurge(stdin);
		int k;
		for(k = 0 ; k < count ; k++)
		{
			find  = strstr(*(pass + k) , psd);
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

