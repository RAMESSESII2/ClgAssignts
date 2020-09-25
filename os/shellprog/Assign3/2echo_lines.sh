read f
read s
read e
#echo "$(tail -n +$s $f | head -$e)"
echo "$(tail -n +$s $f | head -$(($e-$s+1)))"
