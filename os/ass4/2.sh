read -p "enter a no.: " a

t=a
sum=0
while(($t>0))
do
    sum=$(($sum + (${t}%10)**3))
    t=$((${t}/10))
done
if((${sum}==${a}))
then
    echo "it is an armstrong no."
fi
echo ${sum}
