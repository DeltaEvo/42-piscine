#!/usr/bin/env sh

find . -name "*.sh" | grep -Eo "[^\/]*\.sh$" | rev | cut -c 4- | rev
