#!/usr/bin/env sh

groups $FT_USER | tr ' ' ',' | tr -d '\n'
