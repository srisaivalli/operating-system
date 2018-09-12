#!/bin/bash

#creating a read only variable called "greeting"
readonly greeting="Hello"

#creating an ordinary variable called "current_time"
current_time= date +%X

#SUBSTITUTE THE OUTPUT OF THE COMMAND "whomami"
echo "hi,i am $(whoami)."

#prompt the user to provide their name
read -e -p "who are you?" myName

#substituting the variables and printing them
echo "${greeting:-hi},$myName,Now the time is $current_time"
