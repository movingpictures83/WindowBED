#ifndef WINDOWBEDPLUGIN_H
#define WINDOWBEDPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class WindowBEDPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "WindowBED";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
