﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t220899687;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t1581963763  : public t3012272455
{
public:
	t220899687 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t1581963763, f2)); }
	inline t220899687 * fg2() const { return f2; }
	inline t220899687 ** fag2() { return &f2; }
	inline void fs2(t220899687 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
