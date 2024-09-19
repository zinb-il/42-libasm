;char *  ft_strdup(const char *s)


    global  ft_strdup
    extern  __errno_location
    extern  malloc
    extern  ft_strlen
    extern  ft_strcpy

    section .text
ft_strdup:
        push    rbp
        mov     rbp, rsp

        test    rdi, rdi
        jz      .error_null
        
        push    rdi
        call    ft_strlen

        inc     rax
        mov     rdi, rax
        call    malloc
        test    rax, rax
        jz      .error_malloc

        pop     rsi
        mov     rdi, rax
        sub     rsp, 8
        call    ft_strcpy
        add     rsp, 8


        pop     rbp
        ret
        .error_null:
            call    __errno_location
            mov     dword [rax], 22
            jmp     .end
        .error_malloc:
            call    __errno_location
            mov     dword [rax], 12
            jmp     .end
        .end:
            xor     rax, rax
            pop     rbp
            ret