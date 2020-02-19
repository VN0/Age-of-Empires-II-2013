#pragma once

#include <Windows.h>
#include <cstdint>
#include <iostream>

namespace RegisterHook
{
	struct x86_registers
	{
		int32_t eax;
		int32_t ecx;
		int32_t edx;
		int32_t ebx;
		int32_t ebp;
		int32_t esi;
		int32_t edi;

		/*	__m128 xmm0;
			__m128 xmm1;
			__m128 xmm2;
			__m128 xmm3;
			__m128 xmm4;
			__m128 xmm5;
			__m128 xmm6;
			__m128 xmm7;*/
	};

	void printRegisters(x86_registers* value)
	{
		printf("eax = %x\nebp = %x\nebx = %x\necx = %x\nedi = %x\nedx = %x\nesi = %x\n", value->eax, value->ebp, value->ebx, value->ecx, value->edi, value->edx, value->esi);
	}

#define REGISTER_HOOK(hkRegisterFunc, jmpBack) \
__declspec(naked) void hkRegisterFunc ## Trampoline()\
{\
	__asm\
	{\
		__asm	push edi\
		__asm	push esi\
		__asm	push ebp\
		__asm	push ebx\
		__asm	push edx\
		__asm	push ecx\
		__asm	push eax\
		__asm	mov ecx, esp\
		__asm	call hkRegisterFunc \
		__asm	pop eax\
		__asm	pop ecx\
		__asm	pop edx\
		__asm	pop ebx\
		__asm	pop ebp\
		__asm	pop esi\
		__asm	pop edi\
		__asm	jmp jmpBack \
	}\
}

}