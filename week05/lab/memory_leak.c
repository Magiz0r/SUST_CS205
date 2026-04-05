#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int *pi = (int*) malloc(sizeof(int)); // allocate 4 byte / 16 bits memory
    *pi = 0x12345678;
    printf("address: %p\tdata: 0x%x\n", pi, *pi);
    return 0;
}