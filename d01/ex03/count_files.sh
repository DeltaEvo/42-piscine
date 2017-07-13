#!/usr/bin/env sh

find . -type f -o -type d | wc -l | sed "s/ //g"
