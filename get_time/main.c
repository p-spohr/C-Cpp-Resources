#include <stdio.h>
#include <time.h>

int main(int argc, char* argv[]) {
    time_t zero_time = 0;
    time_t current_time;

    time(&current_time);

    printf("%s\n", ctime(&zero_time));
    printf("%s\n", ctime(&current_time));

    printf("%lld seconds since epoch.\n", current_time);

    return 0;

}
