#pragma once

class Scene;

class Game {
    public:
        void Run();
        void ChangeScene(Scene* scene);
    private:
        Scene* _scene = nullptr;
        Scene* _sceneToChange = nullptr;

        void Update();
        void Draw();
        void PostDraw();
        void LoadScene(Scene* scene);
        void UnloadScene();
};

extern Game* game;