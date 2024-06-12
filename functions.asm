global F1
global _F3

section .text
F1:
    finit
    push 2
    fild dword[esp]
    add esp, 4
    fld qword[esp+4]
    fld1

    xor eax, eax
    ret


_F3:
    push ebp
    mov ebp, esp
    finit

    fld qword[ebp + 12]
    fld1
    fsubp ST(0), ST(1)

    push 3
    fld qword[esp + 8]
    fdivp ST(1), ST(0)

    fstp
    leave
    ret

F3G:
    push ebp
    mov ebp, esp
    movzx eax, byte[esp + 16]
    cmp eax, 2
    je .ddg

    finit
    fld1
    fld qword[three_minus]

    fdivp

    leave
    ret


section .data
    x float