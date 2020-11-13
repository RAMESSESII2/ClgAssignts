echo "enter the no.s: " 
read -a arr 
l=${#arr[@]}
for((i=1;i<$l;i++))
do
    j=$(($i-1))
    t=${arr[$i]}
    while((j>=0 && arr[$j]<t))
    do
        arr[$j+1]=${arr[$j]}
        j=$(($j-1))
    done
    arr[$j+1]=$t
done

for((i=0;i<$l;i++))
do
    echo ${arr[$i]}
done
