﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t1439411180;

#include "t1439411180.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t3928584086  : public t1439411180
{
public:
	t1439411180 * f3;

public:
	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t3928584086, f3)); }
	inline t1439411180 * fg3() const { return f3; }
	inline t1439411180 ** fag3() { return &f3; }
	inline void fs3(t1439411180 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
