# Schedule check
_This project help arrange your schedule and make it easy to see your schedule using a web server.
(When your Raspberry pi is turned on)_
__________
**********

## Project use
- If you forget your schedule often
- When you want to arrange and see the timetable at a glance
* This can be connected with a web server so you can easily access it.
__________

## How to start
# **First**
, you have to make your own index.html and date.txt files.
_If you have enough memory on your raspberry pi SDcard, you can modify "project1.c" file.
All of the 'fopen' mode in the file is "r" (only for readable), so if you want, 
you can change "r" to "w" or "a" for date.txt files._
# **Second**
, if you added date.txt files, you need to add taht files' name on the index.html file. 
_If you can, make if work automatically. Then follow the command line below in your raspberry pi server._  
     `$ sudo make`  
     `$ ./project1`  
# **Third**
, if you choose the number 1 or 2 and wirte the date,  
_example: _
           Date: 200607
# **Fourth**,
1. Input named file will be out.
2. **Not_yet.txt** file will be opend to say sorry for not being ready.
Aimed version will create or append the schedule and save the file.
__________
**********
----------
## If you want to add more skill about html,
please refer to [HTML Standard](https://html.spec.whatwg.org)
