#include <stdlib.h>
#include "chunk.h"

struct _ChunkFile
{
	char *file_name;
	int baz;
};

ChunkFile * get_new(char *name) {
	struct _ChunkFile *ret = malloc(sizeof(struct _ChunkFile));
	ret->file_name = name;
	return (ChunkFile *) ret;
}

ChunkFile * get_from_file(char *file_name) {
	struct _ChunkFile *ret = malloc(sizeof(struct _ChunkFile));
	ret->file_name = "shitbird";
	return ret;
}

char * get_name(ChunkFile *chunk) {
	return chunk->file_name;
}

int add(int x, int y) { return x + y;}

int divi(int x, int y) { return x + y;}