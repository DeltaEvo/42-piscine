#!/usr/bin/env sh
# FT_NBR1='\"\"!\"\"!\"\"!\"\"!\"\"!\"\"'
# FT_NBR2="dcrcmcmooododmrrrmorcmcrmomo"

BASE_MRDOC='mrdoc'
BASE_CHELOU=$( printf "%q" "'\\\"?!" )
BASE_GTAIO="gtaio luSnemf"

echo "obase=13; ibase=5;" $( echo "$FT_NBR1 + $FT_NBR2" | tr "$BASE_CHELOU $BASE_MRDOC" "01234 01234" )  | bc | tr "0123456789ABC" "$BASE_GTAIO"

