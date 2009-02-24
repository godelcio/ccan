#include <stdio.h>
#include <string.h>
#include "config.h"

/**
 * endian - endian conversion macros for simple types
 *
 * Portable protocols (such as on-disk formats, or network protocols)
 * are often defined to be a particular endian: little-endian (least
 * significant bytes first) or big-endian (most significant bytes
 * first).
 *
 * Similarly, some CPUs lay out values in memory in little-endian
 * order (most commonly, Intel's 8086 and derivatives), or big-endian
 * order (almost everyone else).
 *
 * This module provides conversion routines, inspired by the linux kernel.
 *
 * Example:
 *	#include <stdio.h>
 *	#include <err.h>
 *	#include <ccan/endian/endian.h>
 *
 *	// 
 *	int main(int argc, char *argv[])
 *	{
 *		uint32_t value;
 *
 *		if (argc != 2)
 *			errx(1, "Usage: %s <value>", argv[0]);
 *
 *		printf("native:        %08x\n", value);
 *		printf("little-endian: %08x\n", cpu_to_le32(value));
 *		printf("big-endian:    %08x\n", cpu_to_be32(value));
 *		printf("byte-reversed: %08x\n", swab_u32(value));
 *		exit(0);
 *	}
 *
 * Licence: LGPL (2 or any later version)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
		return 1;

	if (strcmp(argv[1], "depends") == 0)
		/* Nothing */
		return 0;

	return 1;
}
