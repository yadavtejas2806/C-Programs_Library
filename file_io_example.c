#include <stdio.h>

int main() {
    FILE *fptr;
    char data[100];

    // Write to file
    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    fprintf(fptr, "This is an example of file I/O in C.\n");
    fclose(fptr);

    // Read from file
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    printf("Reading from file:\n");
    while (fgets(data, sizeof(data), fptr)) {
        printf("%s", data);
    }
    fclose(fptr);

    return 0;
}
