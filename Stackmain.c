#include "stack.h"
#include <stdio.h>

int main() {
    stack s;
    initialize(&s);

    push(10, &s);
    push(20, &s);
    push(30, &s);

    while (!empty(&s)) {
        int val = pop(&s);
        printf("Popped: %d\n", val);
    }

    return 0;
}