echo "Name:\c"
read n
if [ -d $n ]
then
	echo "Found"
else
	echo "Not Found"
fi
