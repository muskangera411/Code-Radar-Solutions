#include <stdio.h>

int is_palindrome(int num);

int main() {
    int a, count = 0;
    scanf("%d", &a);
    int arr[a];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);

        if (is_palindrome(arr[i])) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}

// Function to check if a number is a palindrome
int is_palindrome(int a) {
    int rnum = 0, rem, num = a;  // Store original number

    while (a > 0) {
        rem = a % 10;
        rnum = rnum * 10 + rem;
        a /= 10;
    }

    return (rnum == num);  // Returns 1 if palindrome, 0 otherwise
}
