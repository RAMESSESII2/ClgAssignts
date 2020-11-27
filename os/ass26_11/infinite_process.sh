read -p "enter somethig to start an infinite process" r
echo $r
n=2
while (( $n > 0 ))
do
    n=$((n-2))
    n=$((n+2))
done 

# command to kill the infinite process: kill {pid of sh} 
