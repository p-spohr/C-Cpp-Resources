#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
    
    time_t epoch_seconds;
    time_t temporary_seconds = 0;
    int random_number;
    int target_number = 5;

    // RAND_MAX defined in stdlib and determines the max value of rand()
    printf("%d\n", RAND_MAX); 
  
    // infinite for loop needs to get broken by return or break
    // changing for(;;) to while(1) would offer same results
    for(;;) {

        // seconds elapsed since 1970
        time(&epoch_seconds);

        // only generate a random number every second (difference between the current time and last check is greater than 1)
        if (difftime(epoch_seconds, temporary_seconds) > 1) {

            // store time check
            time(&temporary_seconds);
    
            // sets seed for rand()
            srand(epoch_seconds);
            // randome number between 0 and 10
            random_number = rand() % 10;
            
            printf("Random:%3d| Target:%3d\n", random_number, target_number);    
            
            // compare numbers and break if equal
            if (random_number == target_number) break;

        }
        
        
    }

    
    return 0;

}
