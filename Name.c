#include "Name.h"

Name *createName(char *name, int age){
    Name *n1 = malloc(sizeof(Name));
    assert(n1 != NULL);
    n1->name = strdup(name);
    n1->age = age;
    return n1;
}

void setName(Name *n1, char *name){
    n1->name = name;
}

void setAge(Name *n1, int age){
    n1->age = age;
}

char* getName(Name *n1){
    return n1->name;
}

int getAge(Name *n1){
    return n1->age;
}

void printName(Name *n1){
    printf("My name is %s and my age is %d\n", getName(n1), getAge(n1));
}

void destroyName(Name *n1){
    assert(n1 != NULL);
    free(n1->name);
    free(n1);
}
