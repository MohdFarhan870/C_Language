
#include <stdio.h>
int main() {
    int n, d, gcd, r, t;
    printf("Enter numerator: ");
    scanf("%d", &n);
    printf("Enter denominator: ");
    scanf("%d", &d);
    if (d == 0) {
        printf("Error: Division by zero.\n");
        return 1;
    }
    t = (n > d) ? n : d;
    while (1) {
        r = (n % d);
        if (r == 0) {
            gcd = d;
            break;
        }
        n = d;
        d = r;
    }
    n /= gcd;
    d /= gcd;
    if (d == 1){
        printf("%d\n", n);}
    else
       { printf("%d/%d\n", n, d);}
    return 0;
}