#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int length;

    printf("Enter a string (e.g., your name): ");
    scanf("%99s", name);

    printf("You entered: %s\n", name);

    length = strlen(name);

    // Display the string length
    printf("Length of the string: %d\n", length);

    return 0;
}
