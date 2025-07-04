#include <stdio.h>

int main() {
    FILE *fptr;
    char c;

    fptr = fopen("output.txt", "r"); // Open file in read mode
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File contents:\n");
    while ((c = fgetc(fptr)) != EOF) {
        putchar(c);
    }

    fclose(fptr);

    return 0;
}
