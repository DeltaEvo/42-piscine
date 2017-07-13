#/usr/bin/env sh

cat /etc/passwd | grep -vE "^#" | awk "NR%2==0" | grep -oE "^[^:]*" | sed '/^$/d' | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | tr '\n' ',' | sed "s/,/, /g" | sed "s/, $/./" | tr -d '\n'
