#include <stdio.h>
#include <stdlib.h>

#define LETSGO main
#define ADD +
#define SUB -
#define SQUARE(x) ((x) * (x))
#define LOG(msg) printf("File: %s\nLine: %d, Function: %s -> %s\n", __FILE__, __LINE__, __func__, msg)


int LETSGO(int argc, char* argv[]) {
    
    printf("%s\n", __func__);

    printf("%d\n", 1 ADD 5 SUB 10);

    printf("%d\n", SQUARE(100));

    LOG("This message has being logged!");

    return 0;

}
