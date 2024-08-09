// dirname -- strip suffix from file name
// https://pubs.opengroup.org/onlinepubs/9699919799/

#include <stdio.h>
#include <stdlib.h>

int
get_last_slash_index (char *name)
{
    int out = -1;
    for (int i = 0; name[i]; i++)
    {
        if (name[i] == '/')
        {
            out = i;
        }
    }
    return out;
}

int
main (int argc, char **argv)
{
    int len;
    char *out;
    char dot = '.';
    char slash = '/';
    for (int i = 1; i < argc; i++)
    {
        out = argv[i];
        len = get_last_slash_index (out);
        
        if (len == -1)
        {
            out = &dot;
            len = 1;
        }
        else if (len == 0)
        {
            out = &slash;
            len = 1;
        }
        
        fwrite (out, 1, len, stdout);
        putchar ('\n');
    }
    return EXIT_SUCCESS;
}
