section .text
	global ft_write
	extern __errno_location

ft_write:
	mov		rax, 1
	syscall
	cmp		rax, 0
	jl		syscall_err
	ret

syscall_err:
	mov		r10, rax
	call	__errno_location
	neg		r10
	mov		[rax], r10
	mov		rax, -1
	ret