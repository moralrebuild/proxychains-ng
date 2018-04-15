#include "version.h"
static const char version[] = VERSION;
const char *pseudo_get_version(void) {
	return version;
}

