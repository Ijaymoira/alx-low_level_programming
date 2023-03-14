malloc and freeing space
#include <stdlib.h>

int *p; p = (int *)malloc(sizeof(int)); int *ptr = (innt *)malloc(n * sizeof(int));

to free use the free function and pass the variable as argument. malloc doesn't know anything or data type it is just allocating memory, then we type cast the datatype. the address of the first byte would be stored in the pointer and we would have access to the other bytes. to create an array and allocate memory for. store ; use malloc(sizeof(char)*length + 1) +1 for the last terminator character.
