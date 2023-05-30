# Monty ByteCode file interpreter
>Monty ByteCode contains Monty-specific opcodes. 
>This is an interpreter for the following special opcodes: >'push','pall','pint','pop','swap','swap','add','nop'

## Repo Contents: 
* bytecode folder ----- contains Monty ByteCode files
* monty.h ------------- contains all interpreter function prototypes.
* main.c -------------- enrollment in the program

## How to Compile
Usage: ./monty [filename]
```
$ git clone https://github.com/ericfranzee/monty
$ cd monty
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
$ ./monty bf/000.m
```

## Environment
* Language: C
* OS: Ubuntu 24.04 LTS
* Compiler: gcc 
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
---
## Authors
Ericfranzee (https://twitter.com/ericfranzee)