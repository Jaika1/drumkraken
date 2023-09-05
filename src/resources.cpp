#include "resources.h"
#include <raylib.h>
#include <string>

using namespace std;

Font* generalFont = new Font;

void LoadResources(const char* packName) {
    string resourceDir = (string)"../res/skins/" + (string)packName + "/";
    *generalFont = LoadFontEx((resourceDir + "general.ttf").c_str(), 64, 0, 250);
}