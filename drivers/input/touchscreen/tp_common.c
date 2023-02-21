#include <linux/kernel.h>
#include "tp_common.h"

bool tp_inited = false;

bool tp_is_inited(void)
{
	return tp_inited;
}

void tp_set_inited(bool inited)
{
	tp_inited = true;
}
