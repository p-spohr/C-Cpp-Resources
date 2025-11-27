#ifndef GLOBALS_H
#define GLOBALS_H
// #pragma once (is the modern way to protect and requires no #ifdef #endif, however not guaranteed by C standard)

#include <stdio.h> // functions depend on this library so should be included here

// declaration (no memory allocated, but made available across files)
extern int counter;

void increment(void); // increase counter (function prototype)
void decrement(void); // decrease counter
void reset(void); // reset counter to 0

#endif