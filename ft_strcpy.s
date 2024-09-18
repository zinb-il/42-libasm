;char *  ft_strcpy(char *dest, const char *src);

    global ft_strcpy

    section .text
ft_strcpy:
            mov rcx, 0
            cmp rsi, 0
            je end
            cmp rdi, 0
            je end
            loop:
                cmp byte [rsi + rcx], 0
                je end
                mov al, byte [rsi + rcx]
                mov byte [rdi + rcx], al
                inc rcx
                jmp loop
            end:
                mov byte [rdi + rcx], 0
                mov rax, rdi
                ret