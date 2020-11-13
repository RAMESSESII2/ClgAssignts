read -p "enter a string: " s
l=${#s}
i=0
# rev= rev
# echo welcome | rev
for ((i=0; i<$l; i++))
do
    if [ `expr $l % 2` != 0 ] && [ $i == $(($l/2)) ];
    then
        continue
    fi
    if [ "${s:$i:1}" != "${s:(($l-$i-1)):1}" ];
    then
        echo "Not a p"
    exit 
    fi
done

echo "It is a palindrome"
# echo $rev
