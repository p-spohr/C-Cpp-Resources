#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    
    char *message = "%s is %i years old.";
    char *name = "Sandy";
    int age = 35;

    printf(message, name, age);

    return 0;

}
