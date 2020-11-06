
read -p "Enter a no." n

i=1
fac=1
while(($i<=$n))
do 
    fac=$(($fac*i))
    i=$((${i}+1))
done

echo ${fac}
