#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int numA = 0x11223344; // for sequence, it is 0x 4th-3rd-2nd-1st
    if(argc == 2){
        if(argv[1][0]=='H'){
            int *pnumB = (int*)malloc(sizeof(int));
            if(pnumB!=NULL){
            /*complete code here*/
                unsigned char* ptrA = (unsigned char*) &numA;
                unsigned char* ptrB = (unsigned char*) pnumB;
                const char* endian = (*ptrA == 0x44) ? "LE" : "BE";

                printf("Data A_addr: %p, A_data: 0x%x, This is %s\n", (void*)&numA, numA, endian);

                ptrB[0] = ptrA[3]; 
                ptrB[1] = ptrA[2];
                ptrB[2] = ptrA[1];
                ptrB[3] = ptrA[0]; // so now b is 0x 1st-2nd-3th-4st, each value is from A

                printf("Data B_addr: %p, B_data: 0x%x\n", (void*)pnumB, *pnumB);
                free(pnumB);
            }
        } else if(argv[1][0]=='S'){
        /*complete code here*/
            int numB;
            unsigned char* ptrA = (unsigned char*) &numA;
            unsigned char* ptrB = (unsigned char*) &numB;
            const char* endian = (*ptrA == 0x44) ? "LE" : "BE";
            printf("Data A_addr: %p, A_data: 0x%x, This is %s\n", (void*)&numA, numA, endian);

            ptrB[0] = ptrA[3];
            ptrB[1] = ptrA[2];
            ptrB[2] = ptrA[1];
            ptrB[3] = ptrA[0];
            
            printf("Data B_addr: %p, B_data: 0x%x\n", (void*)&numB, numB);

        }
    }
    return 0;
}