#!/bin/bash
echo "Do you know how to contribute to open source projects?"
read -p "Yes/No: " response
case $response in
    Yes|yes|YES)
        echo "Thats great, you can also contribute to this repo"
        ;;
    No|no|NO)
        echo "You can follow this https://github.com/firstcontributions/first-contributions"
        echo "Then come back here and start contributing"
        ;;
esac
echo -e "\n\nThank You"
