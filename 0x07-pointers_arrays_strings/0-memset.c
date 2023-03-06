#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: area to be filled
 * @b: constant byte to fill
 * @n: number of byte to fill
 */
char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;
    while (n > 0) {
        *ptr = b;
        ptr++;
        n--;
    }
    return s;
}
