/*
 *  n-tuple.c - the next n-tuple algorithm
 *  Copyright (C) 2010 Martin Broadhurst 
 *  www.martinbroadhurst.com
 */


#include "n-tuple.h"

unsigned int MBnext_n_tuple(unsigned int *ar, size_t len, const size_t *sizes)
{
	unsigned int changed = 0;
	unsigned int finished = 0;
	size_t i;

	for (i = len - 1; !changed && !finished; i--) {
		if (ar[i] < sizes[i] - 1) {
			/* Increment */
			ar[i]++;
			changed = 1;
		}
		else {
			/* Roll over */
			ar[i] = 0;
		}
		finished = i == 0;
	}

	return changed;
}	


