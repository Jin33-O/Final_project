#Schedule check
_This project help arrange your schdule and make it easy to see your schedule using a web server (when your Raspberry pi is turned on)._
__________
**********
----------
##Project use
- If you forget your schedule often.
- When you want to arrange and see the timetable at a glance, you need this.
* This is connected with a web server so you can easily access it.

__________
**********
----------
##How to start
#**First**, you have to make your own index.html and date.txt files.
_If you have enough memory on your raspberry pi SDcard, you can modify "project1.c" file. All of the 'fopen' mode in the file is "r"(only for readable), so if you want, you can change "r" to "w" or "a" for date.txt files._
#**Second**, if you added date.files, you need to add that file name on the index.html file.
_If you can, make it work automatically. Then follow the command line below in your raspberry pi server._
     $ sudo gcc -o project project1.c
     $ ./project
#**Third**, if choose the number 1 or 2 and write the date.
_example: _Date: 200607
#**Fourth**, 
1 Input named file will be out.
2 **Not yet** create or append the schedule and save the file. 
__________
**********
----------
##If you need more help
please refer to [HTML Standard](https://html.spec.whatwg.org)

