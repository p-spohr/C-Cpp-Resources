
#include "globals.h"

void increment(void) {
    counter++;
    printf("%s %s() Counter: %d\n", __FILE__, __FUNCTION__, counter);
}