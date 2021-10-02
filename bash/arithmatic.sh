#!/bin/bash
echo "Lets see some arithmathic operation"
read -p "enter first  number:" x
read -p "enter second  number:" y
add=$((x+y))
echo "Addition is $add"
sub=$((x-y))
echo "Subtraction is $sub"
mult=$((x*y))
echo "Multiplication is $mult"
div=$((x/y))
echo "Division is $div"
post=$((x++))
echo "Post increment in x is $post"
pre=$((++x))
echo "Preincrement in x is $pre"