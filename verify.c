#include "login.h"

int verify(char **name , char **pass)
{
	int r  = user_name(0,name);
	int s = passwd(0, pass);
	if( r && s)
	{
		if( r == s)
			return true;
	}
	else
		return false;
}
