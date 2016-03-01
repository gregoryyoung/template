#ifndef CHUNK_H
#define CHUNK_H

typedef struct _ChunkFile ChunkFile;

ChunkFile* get_new();
char* get_name();
int add(int x, int y);
int divi(int x, int y);
#endif