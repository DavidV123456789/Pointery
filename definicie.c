#include "pointer.h"


void vymenHodnotou (int prva, int druha)
{
	int temp = prva;
	prva = druha;
	druha = temp;
	}

void vymenOdkazom(int *prva, int *druha)
{
	int temp = *prva;
	*prva = *druha;
	*druha = temp;
	}
