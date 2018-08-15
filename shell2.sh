echo "Name:\c"
read n
if [ -f $n ]
then
	echo "Found"
else
	echo "Not Found"
fi

