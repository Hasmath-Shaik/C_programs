#include <stdio.h>

int main() {
    FILE *source, *target;
    char c;

    source = fopen("output.txt", "r");
    if (source == NULL) {
        printf("Source file not found!\n");
        return 1;
    }

    target = fopen("copy.txt", "w");
    if (target == NULL) {
        printf("Unable to create target file!\n");
        fclose(source);
        return 1;
    }

    while ((c = fgetc(source)) != EOF) {
        fputc(c, target);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(target);

    return 0;
}
