
read -p "Fib series upto : " n

f=4
s=6
i=2
echo ${f}
echo ${s}
while(($i<$n))
do 
    fib=$(($f+$s))
    echo "${fib}"
    f=$s
    s=$fib
    i=$(($i+1))
done

