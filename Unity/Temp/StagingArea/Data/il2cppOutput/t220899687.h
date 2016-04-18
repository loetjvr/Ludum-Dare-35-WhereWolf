#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

struct t4012695102;
struct t3499186956;
struct t4211174972;
struct t2868702720;

#include "t3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

struct  t220899687  : public t3012272455
{
public:
	int32_t f2;
	int32_t f3;
	t4012695102 * f4;
	t3499186956* f5;
	t4211174972* f6;
	t2868702720* f7;
	int32_t f8;

public:
	inline static int32_t fog2() { return static_cast<int32_t>(offsetof(t220899687, f2)); }
	inline int32_t fg2() const { return f2; }
	inline int32_t* fag2() { return &f2; }
	inline void fs2(int32_t value)
	{
		f2 = value;
	}

	inline static int32_t fog3() { return static_cast<int32_t>(offsetof(t220899687, f3)); }
	inline int32_t fg3() const { return f3; }
	inline int32_t* fag3() { return &f3; }
	inline void fs3(int32_t value)
	{
		f3 = value;
	}

	inline static int32_t fog4() { return static_cast<int32_t>(offsetof(t220899687, f4)); }
	inline t4012695102 * fg4() const { return f4; }
	inline t4012695102 ** fag4() { return &f4; }
	inline void fs4(t4012695102 * value)
	{
		f4 = value;
		Il2CppCodeGenWriteBarrier(&f4, value);
	}

	inline static int32_t fog5() { return static_cast<int32_t>(offsetof(t220899687, f5)); }
	inline t3499186956* fg5() const { return f5; }
	inline t3499186956** fag5() { return &f5; }
	inline void fs5(t3499186956* value)
	{
		f5 = value;
		Il2CppCodeGenWriteBarrier(&f5, value);
	}

	inline static int32_t fog6() { return static_cast<int32_t>(offsetof(t220899687, f6)); }
	inline t4211174972* fg6() const { return f6; }
	inline t4211174972** fag6() { return &f6; }
	inline void fs6(t4211174972* value)
	{
		f6 = value;
		Il2CppCodeGenWriteBarrier(&f6, value);
	}

	inline static int32_t fog7() { return static_cast<int32_t>(offsetof(t220899687, f7)); }
	inline t2868702720* fg7() const { return f7; }
	inline t2868702720** fag7() { return &f7; }
	inline void fs7(t2868702720* value)
	{
		f7 = value;
		Il2CppCodeGenWriteBarrier(&f7, value);
	}

	inline static int32_t fog8() { return static_cast<int32_t>(offsetof(t220899687, f8)); }
	inline int32_t fg8() const { return f8; }
	inline int32_t* fag8() { return &f8; }
	inline void fs8(int32_t value)
	{
		f8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
