read -p "Enter choice " c
case $c in 
    1)
        #echo "$(who | wc -l)";;
        echo $(ps -eaho user | sort -u | wc -l);;

    2)
        read -p "Enter file name: " f
        read -p "Enter no. of lines: " l
        echo "$(head -n $l $f)";;
    3)
        read -p "Enter file name: " f
        echo "$(stat $f | grep "Access:")" 
        touch -c -a $f
        echo " new access time $(stat $f | grep "Access:")" ;;
    *)
        echo "Invalid option";; 
esac
