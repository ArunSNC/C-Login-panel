#ifndef LOGIN_H
#define LOGIN_H

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int user_name(int , char **);
int passwd(int ,char **);
int verify(char **, char **);
int create(char **,char **);

#endif
