#include <stdio.h>
#include <stdlib.h>
#include "add.h"

int main(int argc, char* argv[]) {

    printf("ARGC: %d\n", argc);
    printf("ARGV SIZE: %d\n", (int) sizeof(*argv));
    printf("EXECUTABLE: %s\n", argv[0]);
    printf("CURRENT FILE: %s\n", __FILE__);

    if (argc != 3) {
        printf("Please input two integers separated by a space.");
        return -1;
    }

    int x = 0;
    
    x = my_add_int(atoi(argv[1]), atoi(argv[2]));
    printf("%d\n", x);
    
    return 0;
}