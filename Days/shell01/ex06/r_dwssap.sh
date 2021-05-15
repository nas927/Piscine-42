cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | rev | sort -r | awk 'NR <= ENVIRON["FT_LINE2"] && NR >= ENVIRON["FT_LINE1"]' | sed 's/.*://' | tr '\n' ',' | sed 's/,$/./'
# sed -n 'n;p' = une ligne sur deux en partant de la deuxième sinon sed -n '1~2p'
# NR numéro de ligne (ne pas oublier d'esporter les variable FT_LINE1 et 2 avec export FT_LINE1 && export FT_LINE2)
# rev = inverser
# .* n'importe quels caratères

