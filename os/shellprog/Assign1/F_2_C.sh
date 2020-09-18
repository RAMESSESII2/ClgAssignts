read -p "Temperature in C=" c
#F = (°C × 9/5) + 32
d=`echo "scale=2; $c*(9/5)+32"|bc`
echo $d
