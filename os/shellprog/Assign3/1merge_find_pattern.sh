read -p "Case: " a
read -p "First File " f
if [ $a -eq 1 ]
then
    read -p "Second file " b
    read -p "If you wanna merge give a name to the file" c
fi
case $a in
    1) cat $f $b>> $c
        rm $f $b
        cat $c;; #;;- break
    2) grep "text" $f ;;
    *) echo 'Invalid Option.' ;; # *- default case
esac 
