#include <stdio.h>
#include <string.h> // Required for strcpy()

int main() {
    int n, max = 0, count = 0;
    scanf("%d", &n);
    if (n < 1) {
        return 0;
    } else {
        int arr[n];
        float percentage, total = 0, max_total = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] > max) {
                max = arr[i];
            }
            total += arr[i];
        }
        printf("Max : %d\n", max);

        for (int i = 0; i < n; i++) {
            if (max == arr[i]) {
                count++;
            }
        }
        printf("Count : %d\n", count);

        printf("days : ");
        for (int i = 0; i < n; i++){
            if(max == arr[i]) {
                printf("%d ", i+1);
            }
        }

        max_total = count * max;
        percentage = max_total / total * 100;
        printf("\nPercentage : %.3f%%", percentage);
    }
    
    return 0;
}