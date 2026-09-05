#include<string>
#include<vector>
#include "Screen.cpp"
using namespace std;

class Cinema{
    private:
        string name;
        vector<Screen>screens;
    public:
        Cinema(string name){
            this->name=name;
        }
        void addScreen(Screen screen){}
        void showScreen(){}
};