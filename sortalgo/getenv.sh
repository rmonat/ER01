#! /usr/bin/env bash

HOST=$(hostname)

cat /proc/cpuinfo | grep "model name" | head -n 1 >> conf_$HOST.txt
uname -a >> conf_$HOST.txt
g++ --version | head -n 1 >> conf_$HOST.txt
env python3 --version >> conf_$HOST.txt
ocamlbuild -version >> conf_$HOST.txt
gdc --version | head -n 1 >> conf_$HOST.txt
