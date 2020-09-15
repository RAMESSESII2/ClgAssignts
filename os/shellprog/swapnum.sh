read a
read b
#1st way
#a=$((a+b))
#b=$((a-b))
#a=$((a-b))
#d=$((a*b))

#2nd way
#a=`expr $a + $b` 
#b=`expr $a - $b` 
#a=`expr $a - $b` 

a=$((a^b))
b=$((a^b))
a=$((a^b))
echo "Swapped a and b are $a and $b respectively."
#echo $d
