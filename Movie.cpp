
#include<string>
using namespace std;

class Movie{
    private:
        string title;
        string language;
        int duration;
    public:
        Movie(){}
        Movie(string title, string language,int duration){
            this->title=title;
            this->language=language;
            this->duration=duration;
        }
        string getTitle(){}
        string getLanguage(){}
        int getDuration(){}
};