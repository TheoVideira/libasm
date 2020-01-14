section .text						; code section
	global _ft_strdup				; make label available to linker
	extern _malloc
	extern _ft_strlen
	extern _ft_strcpy

_ft_strdup:							; standard  gcc  entry point
	push	rdi
	call	_ft_strlen
	inc		rax
	mov		rdi, rax
	call	_malloc
	pop		rsi
	cmp		rax, 0
	je		end
	mov		rdi, rax
	call	_ft_strcpy
end:
	ret