#include "globals.h"

int counter = 0;

int main(int argc, char* argv[]) {
    increment();
    increment();
    decrement();
    reset();
    decrement();
    decrement();
    reset();
    return 0;
}