#!/bin/bash
gcc -Wall -Werror -wextra -pedantic -c *.c
ar -rc liball.a *.o
