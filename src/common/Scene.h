#pragma once

class Scene {
    public: 
        virtual void Update();
        virtual void Draw();
        virtual void PostDraw();
};