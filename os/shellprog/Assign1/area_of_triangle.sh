echo "Enter the lengths of three sides" 
read a
read b
read c
d=`echo "scale=2; ($a+$b+$c)/2"|bc`
echo $d
e=`echo "scale=2; sqrt($d*($d-$a)*($d-$b)*($d-$c))"|bc`
echo $e

