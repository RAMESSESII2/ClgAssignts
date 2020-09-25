#word="% % some random is it actually working$ word with 12 // whitespaces and 4 special symbols"
read -p "Enter some string " word
wd="$(echo -n "$word" | wc -w )"
c="$(echo -n "$word" | wc -c )"
w="$(echo "$word" |tr -cd ' \t' | wc -c)"
alphanum="$(echo -n "$word" |tr -cd '[:alnum:]' | wc -c)"
sp=$(($c-$w-$alphanum))
echo "No. of words = $wd"
echo "No. of characters = $c"
echo "No. of white spaces = $w"
echo $alphanum
echo "No. of special symbols = $sp"
