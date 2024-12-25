#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c, d;

    printf("\na: ");
    scanf("%d", &a);

    printf("\nb: ");
    scanf("%d", &b);
    
    printf("\nc: ");
    scanf("%d", &c);
   
    d = pow(b, 2) -4*a*c;

    int x1 = (-b + sqrt(d)) / 2*a;
    
    int x2 = (-b - sqrt(d)) / 2*a;

    printf("delta equal: %d\n", d);
    printf("first x is: %d\n", x1);
    printf("second x is: %d\n", x2);

    return 0;
}
