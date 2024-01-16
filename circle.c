#include <stdio.h>
#include <math.h>

void drawCircle(int radius) {
    for (int i = -radius; i <= radius; i++) {
        for (int j = -radius; j <= radius; j++) {
            if (sqrt(i*i + j*j) <= radius + 0.5) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int radius;

    // Get the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    // Draw the circle
    drawCircle(radius);

    return 0;
}
