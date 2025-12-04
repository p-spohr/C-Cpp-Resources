
#include "globals.h"

void reset(void) {
    counter = 0;
    printf("%s %s() Counter: %d\n", __FILE__, __FUNCTION__, counter);
}