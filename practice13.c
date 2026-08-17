#include <stdio.h>

int main() {
        int i = 5;
          float f = 5.2;

                /*
                    mplicit Type Casting :
                        1. (i + 3)       => int + int       = 8 (int)
                        2. (2 + 5)       => int + int       = 7 (int)
                        3. 8 * 7         => int * int       = 56 (int)
                        4. f / 2         => float / int     = 5.2 / 2 = 2.6 (float) 
                        5. 25 / 2        => int / int       = 12 (int)
                        6. 56 - 2.6      => int - float     = 56.0 - 2.6 = 53.4 (float) 
                        7. 53.4 + 12     => float + int     = 53.4 + 12.0 = 65.4 (float) 
                        8. j = 65.4      => float to int    = 65 (int) 
                */

        int j = (i + 3) * (2 + 5) - f / 2 + 25 / 2;

    printf(" Result : %i", j);

    return 0;
}