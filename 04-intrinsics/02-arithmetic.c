#include <stdio.h>
#include "hexagon_protos.h"

int main()
{
    unsigned int val1 = 0x11111111, val2 = 0x22222222, add;

    // Add two words using Q6 intrinsics
    add = Q6_R_add_RR(val1, val2);
    printf("Val1 = %x\n", val1);
    printf("Val2 = %x\n", val2);
    printf("Add  = %x\n", add);

    printf("\n");
    val1 = 0x7fffffff;
    val2 = 0x7fffffff;
    // Add two words using Q6 intrinsics
    add = Q6_R_add_RR(val1, val2);
    printf("Val1 = %x\n", val1);
    printf("Val2 = %x\n", val2);
    printf("Add  = %x\n", add);

    printf("\n");
    printf("Adding using saturation\n");
    val1 = 0x7fffffff;
    val2 = 0x7fffffff;
    // Add two words using Q6 intrinsics
    add = Q6_R_add_RR_sat(val1, val2);
    printf("Val1 = %x\n", val1);
    printf("Val2 = %x\n", val2);
    printf("Add  = %x\n", add);

    return 0;
}
