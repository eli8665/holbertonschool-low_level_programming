#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 "$1" -o "${1%.c}"
