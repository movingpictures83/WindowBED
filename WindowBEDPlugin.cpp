#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include "WindowBEDPlugin.h"

void WindowBEDPlugin::input(std::string file) {
 inputfile = file;
readParameterFile(file);
}

void WindowBEDPlugin::run() {}

void WindowBEDPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "windowBed -a";
myCommand += " ";
addRequiredParameterNoFlag("A");
addRequiredParameter("-b", "B");
myCommand += " >& "+outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<WindowBEDPlugin> WindowBEDPluginProxy = PluginProxy<WindowBEDPlugin>("WindowBED", PluginManager::getInstance());
