#!/usr/bin/env sh

ifconfig -a ether | grep -Eo "ether.*" | tr -d ' ' | cut -c 6-
