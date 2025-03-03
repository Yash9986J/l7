#include <stdio.h>
#include <sys/stat.h>

int main() {
    char filename[100];

    // Ask the user for the file name
    printf("Enter the file name to make it read-only: ");
    scanf("%s", filename);

    // Use chmod() to change the file's permissions to read-only (0444)
    if (chmod(filename, S_IRUSR | S_IRGRP | S_IROTH) == 0) {
        printf("The file '%s' is now read-only.\n", filename);
    } else {
        perror("Error making the file read-only");
    }

    return 0;
}

