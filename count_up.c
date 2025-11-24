#include <stdio.h>

void increase_count(int count) {
    for (int i=0; i < count; i++) {
        printf("%d\n", i);
    }
}

int main(int argc, char* argv[]) {
   
    increase_count(10);

    return 0;
}

