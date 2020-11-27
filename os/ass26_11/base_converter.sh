read -p "specify the base of the input no.: " base
read -p "Number : " num
read -p "Output base : " obase

# echo $(('ibase=${base}; obase=${obase}; $num' | bc))
# echo `bc <<! ibase=$base; obase=$obase; $num`
# d=`echo "ibase=$base; obase=$obase; $num" | bc`
echo "obase=$obase;$(echo "ibase=$base;$num"|bc)"|bc
