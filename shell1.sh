#calculator
echo "Enter a:"
echo "Enter b:"
read a
read b	
add=$(expr "$a" + "$b")
sub=$(expr "$a" - "$b")
mul=$(expr "$a" \* "$b")
div=$(expr "$a" / "$b")
echo "ADD = $add"
echo "SUB = $sub"
echo "MUL = $mul"
echo "DIV = $div"
