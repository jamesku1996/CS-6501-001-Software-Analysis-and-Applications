
/*
 * First KLEE tutorial: testing a small function
 */

#include "klee/klee.h"
#include <stdlib.h>

int get_sign(int x) {

    if (x < 0)
        return -1;
    else if (x > 0)
        return 1;
    abort();
    return 0;
}

int main() {
    int a;
    klee_make_symbolic(&a, sizeof(a), "a");
    return get_sign(a);
}
