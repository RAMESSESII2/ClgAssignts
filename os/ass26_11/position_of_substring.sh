read -p "enter a string: " s
read -p "substring: " c
l=${#s}

j=0
for ((i=0; i<$l; i++))
do
    if [ "${s:$i:1}" == "${c:$j:1}" ];
    then
        j=$(($j+1))
        echo "$(($i+1)) "
    else
        continue
    fi
done
