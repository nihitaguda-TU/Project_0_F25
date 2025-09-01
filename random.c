
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

