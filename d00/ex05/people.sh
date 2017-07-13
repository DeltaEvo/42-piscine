#!/usr/bin/env sh

ldapsearch -xLLL "uid=z*" cn | grep "cn" | cut -c 5- | sort -r
