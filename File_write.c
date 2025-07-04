#include <stdio.h>

int main() {
    FILE *fptr;
    char text[100];

    fptr = fopen("output.txt", "w"); // Open file in write mode
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write into the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fptr, "%s", text);

    fclose(fptr);
    printf("Data written successfully.\n");

    return 0;
}
