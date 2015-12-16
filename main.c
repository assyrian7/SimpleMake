#include "Name.h"

int main(int argc, char *argv[])
{
    for(int i = 0; i != argc; i++){
        printf("%s\n", argv[i]);
    }
    Name *me = createName("Paul", 18);
    printf("Me is at memory location %p\n", me);
    printName(me);
    destroyName(me);
    return 0;
}
