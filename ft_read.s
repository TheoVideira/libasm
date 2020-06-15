section .text
	global ft_read
	extern __errno_location

ft_read:
	mov		rax, 0
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