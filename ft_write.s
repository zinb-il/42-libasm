;ssize_t write(int fd, const void *buf, size_t count);

    global  ft_write
    extern __errno_location

ft_write:

        push    rbp
        mov     rbp, rsp

        mov     rax, 1
        syscall

        cmp     rax, 0
	    jl      .error

        pop     rbp
        ret

        .error:
            mov     r8, rax
            neg     r8
            call    __errno_location
            mov     [rax], r8
            mov     rax, -1
            pop     rbp
            ret