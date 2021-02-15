echo "User Name: "
read name
if grep -q "$name" /etc/passwd;
then
    echo "user available"
else
    echo "user doesn't exist"
fi
