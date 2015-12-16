#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>

typedef struct Name{
    char *name;
    int age;
} Name;

Name *createName(char*, int);

void setName(Name*, char*);

void setAge(Name*, int);

char* getName(Name*);

int getAge(Name*);

void printName(Name*);

void destroyName(Name*);
