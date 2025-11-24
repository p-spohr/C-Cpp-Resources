#include <stdio.h>

void decrease_count(int count) {
    for (int i=count; i > 0; i--) {
        printf("%d\n", i);
    }
}

int main(int argc, char* argv[]) {
   
    decrease_count(10);

    return 0;
}

