echo "Enter no. of integers: " 
read n
echo "Enter the numbers: "
read -a  arr

i=0
while(($i<3))
do
    echo "${arr[$((${n}-${i}-1))]}, ${arr[$((${n}-${i}-2))]}, ${arr[$((${n}-${i}-3))]}"
    echo "${arr[$((${n}-${i}-1))]}, ${arr[$((${n}-${i}-3))]}, ${arr[$((${n}-${i}-2))]}"
    i=$((${i}+1))
done
