// logname -- print user's login name

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    char *p;
    p = getlogin();
    puts(p);
    free(p);
    return EXIT_SUCCESS;
}
