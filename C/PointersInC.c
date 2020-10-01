#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
    int x,y;
    int t = *a;
    x = *a + *b;
    y = *a - *b;
    if(y < 0) 
        y *= -1;
    *a = x;
    *b = y;    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
