#calculator
echo "Enter 1st no:"
read a
echo "Enter 2nd no:"
read b
add=`expr $a + $b`
echo "Sum : $add"
sub=`expr $a - $b`
echo "Sub : $sub"
mul=`expr $a \* $b`
echo "Mul : $mul"
div=`expr $a / $b`
echo "Div : $div"
