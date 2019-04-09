ifconfig | grep ether | sed "s/ether//g" | cut -c3- | sed "s/ //g"
