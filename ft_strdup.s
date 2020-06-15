section .text						; code section
	global ft_strdup				; make label available to linker
	extern malloc
	extern ft_strlen
	extern ft_strcpy

ft_strdup:							; standard  gcc  entry point
	push	rdi
	call	ft_strlen
	inc		rax
	mov		rdi, rax
	call	malloc
	pop		rsi
	cmp		rax, 0
	je		end
	mov		rdi, rax
	call	ft_strcpy
end:
	ret