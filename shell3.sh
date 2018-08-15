echo "Enter a=\c"
read a
echo "Enter b=\c"
read b
if [ $a -gt $b ]
then
	echo "a is Greater : $a"
elif [ $b -gt $a ]
then
	echo "b is Greater : $b"
else
	echo "Equal"
fi


