#include <dl-vdso.h>

void *__kernel_vsyscall = 0;

void uk_init_vsyscall(void) __attribute__((constructor));

void uk_init_vsyscall(void) {
	__kernel_vsyscall = dl_vdso_vsym("__kernel_vsyscall");
}
