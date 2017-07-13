#!/usr/bin/env sh

ldapsearch -xLLL "sn=*bon*" dn | sed '/^$/d' | wc -l | sed "s/ //g"
