read -p "enter a string: " s
read -p "char: " c
l=${#s}
count=0
# rev= rev
# echo welcome | rev
for ((i=0; i<$l; i++))
do
    if [ "${s:$i:1}" == "$c" ];
    then
        count=$(($count+1))
    else
        continue
    fi
done
echo $count
# echo $rev
