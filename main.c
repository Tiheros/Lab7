#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    printf("Введіть координати та радіуси кіл (x1, y1, r1, x2, y2, r2): ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        printf("Кількість точок перетину: 0\n");
    } else if (distance == 0 && r1 == r2) {
        printf("Кількість точок перетину: -1\n");
    } else if (distance == r1 + r2 || distance == fabs(r1 - р2)) {
        printf("Кількість точок перетину: 1\n");
    } else {
        printf("Кількість точок перетину: 2\n");
    }
    
    return 0;
}
