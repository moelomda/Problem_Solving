#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is odd
bool isOdd(int number) {
    return number % 2 != 0;
}

// Function to check if a binary string is a palindrome
bool isBinaryPalindrome(unsigned int n) {
    char binary[32];  // Assuming 32-bit integer
    int length = 0;

    // Convert the integer to binary representation
    while (n > 0) {
        binary[length] = (n & 1) + '0';
        n >>= 1;
        length++;
    }

    // Check if the binary string is a palindrome
    for (int i = 0; i < length / 2; i++) {
        if (binary[i] != binary[length - 1 - i]) {
            return false;
        }
    }

for (int i = 0; i <length  ; i++){
        printf("%s\n",& binary[i]);
    }
    return true;

}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);

    if (isOdd(N) && isBinaryPalindrome(N)) {
        printf("%d is a wonderful number.\n", N);
    } else {
        printf("%d is not a wonderful number.\n", N);
    }

    return 0;
}
