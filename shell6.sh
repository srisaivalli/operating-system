echo "Enter no:\c"
read n
if [ $n -gt 200 ] || [ $n -lt 100 ]
then
	echo "Done"
else
	echo "Retry"
fi
