#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    // combination of fgets with sscanf is the preferred way of getting user input in a format    
    char line[256]; // read from stdin to line
    char f_name[50]; // first name
    char l_name[50]; // last name
    int age;

    printf("Enter your name and age: ");
    // file gets string (safe string input from stdin)
    if (fgets(line, sizeof(line), stdin)) {
        // string scan formatted (read from string buffer rather than stdin directly)
        // like a reversed printf where the data goes from string to being stored in a variable
        printf("scanf count: %d\n", sscanf(line, "%49s %49s %d", f_name, l_name, &age));
        if (sscanf(line, "%49s %49s %d", f_name, l_name, &age) == 3) {
            printf("Name: %s %s, Age: %d\n", f_name, l_name, age);
        } else {
            printf("Invalid input format.\n");
        }
    }

    return 0;

}
