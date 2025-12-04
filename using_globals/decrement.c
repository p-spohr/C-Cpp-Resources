
#include "globals.h"

void decrement(void) {
    counter--;
    printf("%s %s() Counter: %d\n", __FILE__, __FUNCTION__, counter);
}