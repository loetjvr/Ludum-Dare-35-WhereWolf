﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct Il2CppObject;
struct t3875263730;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2102571196  : public Il2CppObject
{
public:

public:
};

struct t2102571196_SFs
{
public:
	Il2CppObject * f0;
	t3875263730 * f1;
	t3875263730 * f2;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t2102571196_SFs, f0)); }
	inline Il2CppObject * fg0() const { return f0; }
	inline Il2CppObject ** fag0() { return &f0; }
	inline void fs0(Il2CppObject * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t2102571196_SFs, f1)); }
	inline t3875263730 * fg1() const { return f1; }
	inline t3875263730 ** fag1() { return &f1; }
	inline void fs1(t3875263730 * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}

	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2102571196_SFs, f2)); }
	inline t3875263730 * fg2() const { return f2; }
	inline t3875263730 ** fag2() { return &f2; }
	inline void fs2(t3875263730 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
