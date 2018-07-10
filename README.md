# SDLDEMO
Simple SDL demo scene using rectangles.

If having trouble integrating the SDL library into visual studio the best link to check out is below : http://lazyfoo.net/tutorials/SDL/01_hello_SDL/windows/msvsnet2010u/index.php

the other way is to put these statements in your cpp file before #include

#include "SDL2-2.0.7\include\SDL.h"

#pragma comment(lib,"SDL2-2.0.7\lib\x86\SDL2.lib") #pragma comment(lib,"SDL2-2.0.7\lib\x86\SDL2main.lib")

#pragma comment(linker,"/subsystem:console")

Now for any of these to work you should have SDL folder in your project folder and the sdl.dll into your main folder where you cpp is at.

You can change the color values to make it differect color rects.
