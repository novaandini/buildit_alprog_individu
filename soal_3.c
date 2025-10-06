#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    char words[100][100];
    int count = 0;

    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    char *token = strtok(input, " ");
    while (token != NULL) {
        int isDuplicate = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], token) == 0) {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate) {
            strcpy(words[count], token);
            count++;
        }

        token = strtok(NULL, " ");
    }

    for (int i = 0; i < count; i++) {
        printf("%s", words[i]);
        if (i < count - 1) printf(" ");
    }

    printf("\n");
    return 0;
}
