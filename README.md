# Ticket Viewer

Welcome to ticket viewer! 

This viewer is a convenient CLI tool to view your tickets on Zendesk. Please follow the installation information below. (the step 3 and 4 are for windows, the step 5 is for linux)

1. Download the executable file of ticket viewer and compressing folder of the whole project.
2. Unzip the project folder.
3. Put executable files of 'jq' and 'curl'( in 'command tools' folder) into a folder, wirte down the path of that folder
4. Right click 'computer' icon on the desktop -> select properties -> advanced system settings -> environment variables->system variables -> path ->edit->add the path of executable files' folder in the end. (remember to add semicolon).
5. In linux, open a command prompt and enter'sudo apt-get install jq' to install jq, while enter 'sudo apt-get install php5-curl' to install curl.
6. Run the executable file of ticket viewer.


Ticket viewer features:

1. View brief information of all tickets (ID, lastopentime, subject, last update user).
2. View the detail of a ticket by specific ID.

Have a good day!

