﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "t3012272455.h"
#include "t1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t68818778  : public t3012272455
{
public:
	float f2;
	t1588175760  f3;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t68818778, f2)); }
	inline float fg2() const { return f2; }
	inline float* fag2() { return &f2; }
	inline void fs2(float value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t68818778, f3)); }
	inline t1588175760  fg3() const { return f3; }
	inline t1588175760 * fag3() { return &f3; }
	inline void fs3(t1588175760  value)
	{
		f3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
