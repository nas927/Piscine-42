echo $FT_NBR1 + $FT_NBR2 | sed "s/'/0/g" | sed "s/\\\\/1/g" | sed 's/"/2/g' | sed "s/?/3/g" | sed "s/!/4/g" | tr "mrdoc" "01234" | xargs echo "ibase=5;obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"

# On convertie '\"?! en nombre de base 5 ' = 0, \ = 1 ....
# on convertie mrdoc en base 5 
# xargs permet de concatener une commande sur la même ligne exemple echo nassim | echo ali ou# tput = ali nassim
# echo "ibase=5;obase=23;" Ne pas oublier les ; ibase i comme input dit de quel base on part # o comme output dit la base à convertir
# enfin on transforme chaque caractère en base 23 ainsi 0 = g, 1 = t, 2 = a... 
