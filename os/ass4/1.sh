# echo "enter the numbers: "
# read -a  arr
# # read -p "enter the numbers: " arr

# i=0
# min=34538678767837884
# max=-3453386876786764

# for i in ${arr[*]}
# do 
#     if(($i<=$min))
#     then
#         min=${i}
#     fi
#     if(($max<$i))
#     then
#         max=${i}
#     fi
# done

# echo "min is ${min}"
# echo "max is ${max}"
# echo ${arr[*]}
# echo ${arr[1]}
# echo  ${arr[0]}
echo "Enter no. of integers: " 
read n
i=0
max=0
min=9999
echo "Enter the numbers: "
while [ $i -lt $n ]
do
read a
if [ $a -gt $max ]
then
max=$a
fi
if [ $a -lt $min ]
then
min=$a
fi
i=`expr $i + 1`
done
echo "Max = $max"
echo "Min = $min"
