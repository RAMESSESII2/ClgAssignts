echo "User Name: "
read name
# just checking through the passwd file if $user i.e., a pattern such exists or not
if grep -q "$name" /etc/passwd;
then
    echo "user available"
else
    echo "user doesn't exist"
fi
