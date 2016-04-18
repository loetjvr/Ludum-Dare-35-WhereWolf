#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t2393081601;
struct t220899687;
struct t2223784725;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t2606798  : public t3012272455
{
public:
	t2393081601 * f2;
	t220899687 * f3;
	t2223784725 * f4;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t2606798, f2)); }
	inline t2393081601 * fg2() const { return f2; }
	inline t2393081601 ** fag2() { return &f2; }
	inline void fs2(t2393081601 * value)
	{
		f2 = value;
		Il2CppCodeGenWriteBarrier(&f2, value);
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t2606798, f3)); }
	inline t220899687 * fg3() const { return f3; }
	inline t220899687 ** fag3() { return &f3; }
	inline void fs3(t220899687 * value)
	{
		f3 = value;
		Il2CppCodeGenWriteBarrier(&f3, value);
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t2606798, f4)); }
	inline t2223784725 * fg4() const { return f4; }
	inline t2223784725 ** fag4() { return &f4; }
	inline void fs4(t2223784725 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
