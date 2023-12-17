#include <stdio.h>

void areaofcircle(float r);
void areaofrectangle(int l, int w);
void areaofsquare(int s);

int main() {
    float r;
    int l, w, s, menu;
    
    printf("1. Area of Circle\n2. Area of Square\n3. Area of Rectangle\nWhat do you want to calculate: ");
    scanf("%d", &menu);

    switch (menu) {
        case 1:
            printf("Write radius of circle: ");
            scanf("%f", &r);
            areaofcircle(r);
            break;
        case 2:
            printf("Write side of square: ");
            scanf("%d", &s);
            areaofsquare(s);
            break;
        case 3:
            printf("Write length of rectangle: ");
            scanf("%d", &l);
            printf("Write width of rectangle: ");
            scanf("%d", &w);
            areaofrectangle(l, w);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

void areaofcircle(float r) {
    printf("Area of Circle is: %f\n", 3.14 * r * r);
}

void areaofrectangle(int l, int w) {
    printf("Area of Rectangle is: %d\n", l * w);
}

void areaofsquare(int s) {
    printf("Area of Square is: %d\n", s * s);
}
