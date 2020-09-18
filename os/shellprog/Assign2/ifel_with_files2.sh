if [ -e $1 ];    # -e exist   -r readable -w writeable  -x executable  -d directory
then 
    echo "File exists"
else
    touch $1
fi
 
if [ -r $1 ];
then
    echo "File is readable"
fi 
ls -l $1
