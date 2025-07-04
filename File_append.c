#include <stdio.h>

int main() {
    FILE *fptr;
    char text[100];

    fptr = fopen("output.txt", "a"); // Open file in append mode
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append to the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fptr, "%s", text);

    fclose(fptr);
    printf("Data appended successfully.\n");

    return 0;
}
