﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4067405951;
struct Il2CppObject;
struct t1829318641;

#include "Il2CppObject.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t4067405951  : public Il2CppObject
{
public:
	t1829318641 * f2;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t4067405951, f2)); }
	inline t1829318641 * fg2() const { return f2; }
	inline t1829318641 ** fag2() { return &f2; }
	inline void fs2(t1829318641 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}
};

struct t4067405951_SFs
{
public:
	t4067405951 * f0;
	Il2CppObject * f1;

public:
	inline static int32_t fog0() { return static_cast<int32_t>(offsetof(t4067405951_SFs, f0)); }
	inline t4067405951 * fg0() const { return f0; }
	inline t4067405951 ** fag0() { return &f0; }
	inline void fs0(t4067405951 * value)
	{
		f0 = value;
		Il2CppCodeGenWriteBarrier(&f0, value);
	}

	inline static int32_t fog1() { return static_cast<int32_t>(offsetof(t4067405951_SFs, f1)); }
	inline Il2CppObject * fg1() const { return f1; }
	inline Il2CppObject ** fag1() { return &f1; }
	inline void fs1(Il2CppObject * value)
	{
		f1 = value;
		Il2CppCodeGenWriteBarrier(&f1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
