#include <stdio.h>
#include <windows.h> // For setting colors

void setColor(int textColor, int bgColor) {
    // Sets color attributes: text color + background color
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgColor << 4) | textColor);
}

int main() {
    int i, j;
    char crushName[] = "Your Crush's Name";

    // Set background to blue and text to white
    setColor(15, 1);  // 15 = white text, 1 = blue background

    // Heart pattern using '*'
    for (i = 0; i <= 6; i++) {
        for (j = 0; j <= 7; j++) {
            if ((i == 0 && (j == 1 || j == 2 || j == 5 || j == 6)) ||
                (i == 1 && (j == 0 || j == 3 || j == 4 || j == 7)) ||
                (i == 2 && (j == 0 || j == 7)) ||
                (i == 3 && (j == 1 || j == 6)) ||
                (i == 4 && (j == 2 || j == 5)) ||
                (i == 5 && (j == 3 || j == 4))) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }

    // Reset the color
    setColor(15, 0);  // 15 = white text, 0 = black background

    // Personalized message
    printf("\nDear %s,\n", crushName);
    printf("You light up my world like no other!\n");
    printf("Hope this little program brings a smile to your face! :)\n");

    return 0;
}