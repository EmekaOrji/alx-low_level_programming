#include <stdio.h>

void print_diagonal(int n);
int main() {
    print_diagonal(20);
    
    return 0;
}
void print_diagonal(int n) {
    int i;
    int s;
    
    if(n > 0)
        for(i = 0; i < n; i++) {
            for(s = 0; s < i; s++) {
                putchar(' ');
            }
            putchar('\\');
            putchar('\n');
        }
    else
        putchar('\n');
}
