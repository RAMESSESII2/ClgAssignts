read -p "Enter principle: " p
read -p "Enter rate: " r
read -p "Enter time: " t
interest=$(((p*r*t)/100))
echo "Simple interest : $interest"

