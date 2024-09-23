
#include <stdio.h>

// Function to find the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int numerator, denominator;
    
    // Input the numerator and denominator
    printf("Enter the numerator: ");
    scanf("%d", &numerator);
    
    printf("Enter the denominator: ");
    scanf("%d", &denominator);
    
    // If the denominator is 0, the fraction is undefined
    if (denominator == 0) {
        printf("Denominator cannot be zero.\n");
        return 1;
    }
    
    // Get the GCD of the numerator and denominator
    int divisor = gcd(numerator, denominator);
    
    // Simplify the fraction by dividing both by the GCD
    int simpleNumerator = numerator / divisor;
    int simpleDenominator = denominator / divisor;
    
    // Print the result
    printf("%d/%d = %d/%d\n", numerator, denominator, simpleNumerator, simpleDenominator);
    
    return 0;
}


