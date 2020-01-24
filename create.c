#include "login.h"

extern int turn;

int create(char **name , char **pass)
{
	if(user_name(1,name) && passwd(1,pass))
	{
		return true;
	}
	else
		return false;

}
