#include <stdio.h>
#include <limits.h>  // For INT_MAX

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];

    // Read array input
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int minDiff = INT_MAX;
    int num1, num2;

    // Compare every pair
    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            int diff = abs(arr[i] - arr[j]); // Calculate absolute difference

            if (diff < minDiff) { // Update min difference
                minDiff = diff;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    printf( num1, num2, minDiff);
    return 0;
}
