#include "login.h"

int turn = 0;
int count = 1 ,nu = 0,nu1 = 0;
int main()
{
	char ch;
	char **name = (char **)calloc(count,sizeof(char*));
	for(int i = nu ; i < count ; i++)
		*(name +i)  = (char *)calloc(10,sizeof(char));

	char **pass = (char **)calloc(count,sizeof(char*));
	for(int i = 0 ;  i < count ; i++)
		*(pass +i)  = (char *)calloc(10,sizeof(char));

	do
	{
		int opt,psd,user,ver,make;
		if(turn < 1)
		{
			printf("Please select a option \n\n");
			printf("1.SIGN UP\n2.LOGIN\n\n");
			scanf("%d",&opt);
			__fpurge(stdin);
		}
		if(turn > 0)
		{
			nu++;
			nu1++;
			++count;
			name = (char **)realloc(name , count *sizeof(char));
			for(int i = nu ; i<= turn ; i++)
				*(name +i) = (char *)realloc(*(name +i) ,10 *sizeof(char));
			pass = (char **)realloc(pass , count *sizeof(char));
			for(int i = nu1 ; i<= turn ; i++)
				*(pass +i) = (char *)realloc(*(pass +i) ,10 *sizeof(char));
			printf("Please select a option \n\n");
			printf("1.SIGN UP\n2.LOGIN\n\n");
			scanf("%d",&opt);
			__fpurge(stdin);
		}
		switch(opt)
		{
			case 1:
				make  = create(name , pass);

				if(make)
					printf("Your account was sucessfully created on %s at %s \n",__DATE__,__TIME__);
				else
					printf("Your account was not created please try again \n");
				break;

			case 2:
				ver = verify(name , pass);
				if(ver)
					printf("Your login was sucessful on %s at %s \n",__DATE__,__TIME__);
				else
					printf("Your login was unsucessful please try again \n");
				break;

			default :
				printf("Invalid option please try again \n");
		}
		if(ch == 'y' || ch == 'Y')
			++turn;
		printf("Do you want to connect a account ? Y / N\n");
		scanf("\n%c",&ch);
	}while(ch == 'y' || ch == 'Y');

	free(name);
	free(pass);
	name = NULL;
	pass = NULL;
}


