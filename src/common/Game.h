#pragma once

class Scene;

class Game {
    public:
        void Run();
    private:
        Scene* scene;
        void Update();
        void Draw();
};