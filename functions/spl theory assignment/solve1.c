#include <stdio.h>
#include <math.h>
void areaCircle();
void areaRectangle();
void volumeSphere();
void volumeCylinder();
void volumeCone();

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Area of Circle\n");
        printf("2. Area of Rectangle\n");
        printf("3. Volume of Sphere\n");
        printf("4. Volume of Cylinder\n");
        printf("5. Volume of Cone\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                areaCircle();
                break;
            case 2:
                areaRectangle();
                break;
            case 3:
                volumeSphere();
                break;
            case 4:
                volumeCylinder();
                break;
            case 5:
                volumeCone();
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

void areaCircle() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = M_PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);
}

void areaRectangle() {
    float length, width, area;
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    area = length * width; 
    printf("Area of the rectangle: %.2f\n", area);
}

void volumeSphere() {
    float radius, volume;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    volume = (4.0/3.0) * M_PI * pow(radius, 3);
    printf("Volume of the sphere: %.2f\n", volume);
}

void volumeCylinder() {
    float radius, height, volume;
    printf("Enter the radius and height of the cylinder: ");
    scanf("%f %f", &radius, &height);
    volume = M_PI * radius * radius * height;
    printf("Volume of the cylinder: %.2f\n", volume);
}

void volumeCone() {
    float radius, height, volume;
    printf("Enter the radius and height of the cone: ");
    scanf("%f %f", &radius, &height);
    volume = (1.0/3.0) * M_PI * radius * radius * height;
    printf("Volume of the cone: %.2f\n", volume);
}