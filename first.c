/* Filename: test.c
 * Description: sample source for sdcc
 * Author: Lesca FANG
 * Date: Mar 7, 2011
 */

// sdcc -mmcs51 first.c

#include <8052.h>
typedef  unsigned int  size_t ;

#define LED P0_0

void  delay(size_t  t) {
    while (t--);
}

int main() {

    while (1) {
        LED = 0;
        delay(10000);
        LED = 1;
        delay(10000);

    }
}
