# Drum Kraken
A very W.I.P project that aims to create a good-enough taiko rhythm game that is as universal as possible. With currently available projects at the moment with similar goals almost entirely being forks of TJAPlayer3 (which is programmed in C# and designed around DirectX), anyone without Windows or a compatability layer for it is out of luck. What's more, forks that migrate towards OpenGL and can run on platforms like Linux (TJAPlayer3F being the most popular example) are as of this projects beginnings lacking basic gameplay features such as input! I would also like to one day have a build that can run on popular SBCs such as the Raspberry Pi 4B. 

## Project goals
T.B.A

## Building from source
For now, building Drum Kraken from source should be relatively straight-forward and easy. Start by cloning the repository and all submodules by using:
```bash
git clone --recursive https://github.com/Jaika1/drumkraken.git
```
Please check and ensure that the Raylib repository you just cloned alongside Drum Kraken is pointed at tag `4.5.0` by navigating to the root of the Raylib repository. This can be done after cloning by running the commands below as follows:
```bash
cd drumkraken/deps/raylib
git status
```
If the repo is configured to point to the correct release, you should see a result like this:
```
HEAD detached at 4.5.0
nothing to commit, working tree clean
```
If this is not the case, please checkout to the correct tag by running the command below:
```bash
git checkout 4.5.0
```
This should but the repo in a headless state, and running `git status` like before should suggest so.

From here, you should be ready to build! You could likely create a build directory and use `cmake ..` from the command line with minimal arguments, although I have yet to test such since I have been using my IDE of choice (Visual Studio Code with the "CMake Tools" extension) to do most of this configuration for me and it has been working no problem. I have also only tested builds on Windows so far, so do let me know of any issues that may arise when attempting to compile on other platforms.

## Dependencies
- [Raylib](https://www.raylib.com)
- [tjalib](https://github.com/Jaika1/tjalib)