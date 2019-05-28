/*we need a module to define our code representation. I’ve been using “chunk” to refer to blobs of bytecode, so let’s make that the official name for that module*/


This explains the use of typedef enum a bit:

https://stackoverflow.com/questions/34323130/the-importance-of-c-enumeration-typedef-enum/34323250

*/


#ifndef clox_chunk_h
#define clox_chunk_h



#include "common.h"


typedef enum{
    OP_RETURN,
} OpCode;


typedef struct{
    uint8_t* code;
} Chunk;



#endif
