#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int d1 = 0x12345678;
    int* p1 = &d1;
    printf("address: %p\ndata: 0x%x\n", p1, *p1);
    return 0;
}