ifconfig -a | awk '{if ($1 =="ether") {print $2} }'
