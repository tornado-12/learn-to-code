#!/bin/bash
echo "Different style of using for loop"
echo -e "\nStyle #1"
words="This is the right place to learn and sahre your skills"
for word in $words
    do
        echo $word
    done
echo -e "\nStyle #2"
for word in Directly accessing value
    do
        echo $word
    done
echo -e "\nStyle #3"
for ((i = 1; i <= 10; i++))
    do
        echo $i | tr '\n' ' '
    done
echo -e "\n\nThank You"
