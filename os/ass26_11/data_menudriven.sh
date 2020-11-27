read -p "Enter File name: " f
read -p "Operation Case(1-5): " a

if [ $a -eq 2 ]
then
    read -p "Enter roll no." r
fi
if [ $a -eq 3 ]
then
    read -p "Enter roll no. to be deleted" r
fi
if [ $a -eq 5 ]
then
    read -p "Enter roll no. to be updated" r
fi
case $a in
    # displaying whole content
    1) sort -no a.txt a.txt;
        cat $f;; 

    # display info specific to a rollno.
    2) grep -w "$r" $f;;

    # delete an entry
    3) d=$(grep -nrw $r $f | cut -d : -f 1);
        sed -i "${d}d" $f;
        echo "Deleted entry for ${r}";;

    # add a new entry
    4)read -p "Enter a new roll, name, city:" r;
        echo $r >> $f;;

    # update an entry
    5)read -p "Enter a new name, city:" n;
        d=$(grep -nrw $r $f | cut -d : -f 1);
        sed -i "${d}d" $f;
        echo "$r  $n" >> $f;
        echo "Entry Updated";;

    *) echo 'Invalid Option.';; # *- default case
esac 
