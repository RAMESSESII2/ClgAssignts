read -p "a= " a
read -p "b= " b
c=`echo $a+$b|bc`
echo $c
#d=`echo -e scale=2 '\n' $a/$b|bc`
d=`echo "scale=2; $a/$b"|bc`
echo $d
