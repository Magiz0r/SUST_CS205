#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int abc;
    int* p1 = &abc;
    *p1 = 0x12345678;
    printf("address: %p\ndata: 0x%x\n", p1, *p1);
    return 0;
}