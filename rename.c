#include <stdio.h>

int main() {
    char oldName[100], newName[100];

    // Ask the user to input the current file name and the new file name
    printf("Enter the current file name: ");
    scanf("%s", oldName);

    printf("Enter the new file name: ");
    scanf("%s", newName);

    // Rename the file
    if (rename(oldName, newName) == 0) {
        printf("File renamed successfully.\n");
    } else {
        printf("Error renaming file. Please check if the file exists and the names are valid.\n");
    }

    return 0;
}

