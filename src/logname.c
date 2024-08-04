#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    char *p;
    p = getlogin();
    puts(p);
    return EXIT_SUCCESS;
}
