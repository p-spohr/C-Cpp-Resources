#include <stdio.h>

int main() {
    int age = 30;
    char name[10] = "Patrick";
    char greeting [100] = "Hello world";
    char message[100];

    snprintf(message, sizeof(name) + sizeof(greeting), "%s is %d years old and says %s!", name, age, greeting);
    
    printf(message);
    return 0;
}