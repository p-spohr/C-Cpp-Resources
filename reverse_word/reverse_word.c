#include <stdio.h>

int main(int argc, char* argv[]) {
   
    const char name[] = "savannah";

    printf("%d\n", sizeof(name));
    
    char rev_word[10];
    
    for (int i=sizeof(name)-2; i >= 0; --i) {
        printf("%d: %c\n", i, name[i]);
        int j = -1 * i + (sizeof(name)-2);
        rev_word[j] = name[i];
    }

    printf("%s\n", rev_word);

    return 0;
}

