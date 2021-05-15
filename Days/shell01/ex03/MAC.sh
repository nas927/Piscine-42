ip link | awk '/link/' | sed 's/link\/[a-z]*[0-9]*\.*[0-9]*//'
#Awk permet de prendre la ligne 
