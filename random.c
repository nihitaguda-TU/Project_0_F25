''' The
function rand_string() is a character function that returns a string
of random characters (a word). The length of the word is a
parameter in your program.
'''

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_string (char *s, size_t size)
{
    char *c = malloc(size +1)
    rand_num = srand(time(NULL));

    for (int i = 0, i < size, i++){
        int rando = rand() % 26 + 1;
        c[i] = 'A' + (n - 1);
    }
    return c
}

