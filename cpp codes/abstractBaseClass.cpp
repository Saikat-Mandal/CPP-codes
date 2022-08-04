#include <iostream>
#include <cstring>
using namespace std;


// abstract base class is a class which contains at least one pure virtual funciton
class saikat
{
protected:
    string title;
    float rating;

public:
    saikat(string s, float r) : rating(r)
    {
        title = s;
    }

    virtual void display() = 0 ;// do nothing function -> pure virtual function
    //it needs to be overridden in the derived classes else it will throw an error
    // you cannot make objects of this class

 
};

class saikatVideo : public saikat
{
    float videoLength;

public:
    saikatVideo(string s, float r, float vl) : saikat(s, r)
    {
        videoLength = vl;
    }

    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class saikatText : public saikat
{
    int word;

public:
    saikatText(string s, float r, int w) : saikat(s, r)
    {
        word = w;
    }

    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << word << " word" << endl;
    }
};

int main()
{

    string title;

    float rating, videolength;
    int words;

    // code for harry video length

    title = "graphicDesign";
    videolength = 4.56;
    rating = 4.89;
    words = 69;

    saikatVideo Djvideo(title, rating, videolength);

    // Djvideo.display();

    // code for harry text

    saikatText Djtext(title, rating, words);

    // Djtext.display();

    saikat *ptr[2];

    ptr[0] = &Djvideo;
    cout << endl;
    ptr[1] = &Djtext;

    ptr[0]->display();
    ptr[1]->display();

    /*
    Rules for virtual functions
    They cannot be static
    They are accessed by object pointers
    Virtual functions can be a friend of another class
    A virtual function in the base class might not be used.
    If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
    */
    return 0;
}