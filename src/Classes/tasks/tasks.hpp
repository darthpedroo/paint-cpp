#pragma once
#include "glad.h"
#include <GLFW/glfw3.h>
#include "Classes/tool/tool.hpp"
//#include "../screen/screen.hpp"

class Screen;

/**
* @brief Translates all GLFW events into screen-readable events for processing in the pixel buffer
*/

class Tasks { 
    public:

        Tasks();
        Tasks(Screen* screen);
        ~Tasks();

        void connectEvents();
        void start();

        //Event** getTranslatedEvents();
        Screen* active_screen;
        Tool* active_tool;
    
    private:
        static void cursor_position_callback(GLFWwindow* window, double xpos, double ypos);
};