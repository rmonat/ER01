#! /bin/bash
d=10
for seed in {1..5}; do
    for n in {1..8}; do
	m=$[$d**$n];
	echo $seed $m;
	./generate32 $seed $m > generated/$m-$seed.in;
    done
done
