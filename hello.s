;First Assembly program

    global  hello
    
    section .text
hello:  
        ;Pour afficher un message
        mov rax, 1
        mov rdi, 1
        mov rsi, msg1
        mov rdx, len    
        syscall

        ;Pour demander au utilisateur de saisir une valeur
        mov rax, 0
        mov rdi, 0
        mov rsi, num
        mov rdx, 5
        syscall

        ;Afficher ce que l'utilisateur a saisir
        mov rax, 1
        mov rdi, 1
        mov rsi, num
        mov rdx, 5
        syscall

        ret
    section .data
        msg1 db "ppp", 10
        len  db 4
    section .bss
        num resb 5
        