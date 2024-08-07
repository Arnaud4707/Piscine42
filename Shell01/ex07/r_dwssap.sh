#!/bin/bash

cat /etc/passwd | awk 'NR%2==0' | cut -d ':' -f1 | sort -cat /etc/passwd | awk 'NR%2==0' | cut -d ':' -f1 | sort -nr | awk "NR>=$FT_LINE1&&NR<=$FT_LINE2" | tr "\n" "," | sed 's/.$/./' | sed 's/,/, /g' | tr -d '\n'
