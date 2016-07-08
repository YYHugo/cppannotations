#include <stdio.h>

void show(int val) {
    printf("Integer: %d\n", val);
}

void show(double val) {
    printf("Double: %lf\n", val);
}

void show(char const *val) {
    printf("String: %s\n", val);
}

int main(int argc, char * argv[]) {
    // Calls the show(int val)
    show(12);
    // Calls show(double val)
    show(3.1415);
    // Calls show(char)
    show("Hello World!\n");
}
