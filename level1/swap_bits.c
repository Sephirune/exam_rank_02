#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4)); // se desplazan los bits más altos a la derecha y los más pequeños a la izquierda. Con | se combinan los resultados
}

/* ejemplo: 00110100
>> 00000011
<< 01000000
al combinarlos: 01000011 */