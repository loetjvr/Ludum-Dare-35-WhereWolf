﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t3713122646;
struct t1576095669;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t412689956  : public Il2CppObject
{
public:

public:
};

struct t412689956_SFs
{
public:
	t3713122646 * f0;
	t1576095669 * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t412689956_SFs, f0)); }
	inline t3713122646 * fg0() const { return f0; }
	inline t3713122646 ** fag0() { return &f0; }
	inline void fs0(t3713122646 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t412689956_SFs, f1)); }
	inline t1576095669 * fg1() const { return f1; }
	inline t1576095669 ** fag1() { return &f1; }
	inline void fs1(t1576095669 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
