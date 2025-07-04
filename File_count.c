#include <stdio.h>

int main() {
    FILE *fptr;
    char c;
    int characters = 0, words = 0, lines = 0;

    fptr = fopen("output.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while ((c = fgetc(fptr)) != EOF) {
        characters++;

        if (c == ' ' || c == '\t' || c == '\n')
            words++;

        if (c == '\n')
            lines++;
    }

    fclose(fptr);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words + 1);
    printf("Lines: %d\n", lines + 1);

    return 0;
}
