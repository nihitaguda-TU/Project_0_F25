''' The
function rand_string() is a character function that returns a string
of random characters (a word). The length of the word is a
parameter in your program.
'''

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>


void rand_string (char *s, size_t size)
{
    for (size_t i = 0; i < size; i++){
        int rando = rand() % 26;
        s[i] = 'A' + rando;
    }
    s[size] = '\0';               
}

