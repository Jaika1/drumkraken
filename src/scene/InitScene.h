#pragma once
#include "../common/Scene.h"

class InitScene : public Scene {
    public:
        void Update();
        void Draw();
        void PostDraw();
    private:
        const float fadeRate = 2.0f; // Time in seconds between each fade (in or out, NOT and!)
        bool _loadingComplete = false;
        float _screenFadeAmount = 0.0f;
};