#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char randchar() {
    int rand_num = rand() % 25;
    // Convert the random number to a character and return it
    char random_char = 'A' + rand_num;
    return random_char;
}
