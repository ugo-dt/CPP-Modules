#!/bin/bash

test_convert() {
	echo "./convert" "$*"
	./convert $@
	printf "Press any key to continue... "
	printf "\n"
	read -n1
}

test_convert a

test_convert 1

test_convert 1.34f

test_convert 4.2

test_convert .256f

test_convert -.256f

test_convert 18.f

test_convert .

test_convert f

test_convert -

test_convert 0.

test_convert nan

test_convert nanf

test_convert +inf

test_convert -inff

test_convert inf

test_convert 642

test_convert 42

echo "bigger than FLOAT_MAX but smaller than DOUBLE_MAX"
test_convert 5000000000000000000000000000000000000000.0

echo "bigger than DOUBLE_MAX"
test_convert 500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000500000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000.0

test_convert x 0.3542 64 62.0f

test_convert hello_world

test_convert dnziuaunigurnuifeznfeziufneizuferiouhgzoreuighureghiureozhguihgreizgohrzuighrugihzerghuriehguhgerfdghreoiuzg

test_convert 18f

test_convert .f

test_convert -.f

test_convert 4.24.2

test_convert 0.256f12

test_convert
