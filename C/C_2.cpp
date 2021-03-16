#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

const int LETTER_HEIGHT = 6;
const int LETTER_WIDTH = 6;

string* banner(char& letter)
{
    letter = toupper(letter);
    string* drawLetter = new string [LETTER_HEIGHT];
    switch(letter)
    {
    case 'A':
        drawLetter[0] = "  #   ";
        drawLetter[1] = " # #  ";
        drawLetter[2] = "#   # ";
        drawLetter[3] = "##### ";
        drawLetter[4] = "#   # ";
        drawLetter[5] = "#   # ";
        break;
    case 'B':
        drawLetter[0] = "####  ";
        drawLetter[1] = "#   # ";
        drawLetter[2] = "####  ";
        drawLetter[3] = "#   # ";
        drawLetter[4] = "#   # ";
        drawLetter[5] = "####  ";
        break;
    case 'C':
        drawLetter[0] = " #### ";
        drawLetter[1] = "#     ";
        drawLetter[2] = "#     ";
        drawLetter[3] = "#     ";
        drawLetter[4] = "#     ";
        drawLetter[5] = " #### ";
        break;
    case 'D':
        drawLetter[0] = "####  ";
        drawLetter[1] = "#   # ";
        drawLetter[2] = "#   # ";
        drawLetter[3] = "#   # ";
        drawLetter[4] = "#   # ";
        drawLetter[5] = "####  ";
        break;
    case 'E':
        drawLetter[0] = "##### ";
        drawLetter[1] = "#     ";
        drawLetter[2] = "###   ";
        drawLetter[3] = "#     ";
        drawLetter[4] = "#     ";
        drawLetter[5] = "##### ";
        break;
    case 'F':
        drawLetter[0] = "##### ";
        drawLetter[1] = "#     ";
        drawLetter[2] = "###   ";
        drawLetter[3] = "#     ";
        drawLetter[4] = "#     ";
        drawLetter[5] = "#     ";
        break;
    case 'G':
        drawLetter[0] = " #### ";
        drawLetter[1] = "#     ";
        drawLetter[2] = "#     ";
        drawLetter[3] = "#  ###";
        drawLetter[4] = "#   # ";
        drawLetter[5] = " #### ";
        break;
    case 'H':
        drawLetter[0] = "#   # ";
        drawLetter[1] = "#   # ";
        drawLetter[2] = "##### ";
        drawLetter[3] = "#   # ";
        drawLetter[4] = "#   # ";
        drawLetter[5] = "#   # ";
        break;
    case 'I':
        drawLetter[0] = "##### ";
        drawLetter[1] = "  #   ";
        drawLetter[2] = "  #   ";
        drawLetter[3] = "  #   ";
        drawLetter[4] = "  #   ";
        drawLetter[5] = "##### ";
        break;
    case 'J':
        drawLetter[0] = "##### ";
        drawLetter[1] = "  #   ";
        drawLetter[2] = "  #   ";
        drawLetter[3] = "  #   ";
        drawLetter[4] = "  #   ";
        drawLetter[5] = "###   ";
        break;
    case 'K':
        drawLetter[0] = "#   # ";
        drawLetter[1] = "#  #  ";
        drawLetter[2] = "###   ";
        drawLetter[3] = "#  #  ";
        drawLetter[4] = "#   # ";
        drawLetter[5] = "#   # ";
        break;
    case 'L':
        drawLetter[0] = "#     ";
        drawLetter[1] = "#     ";
        drawLetter[2] = "#     ";
        drawLetter[3] = "#     ";
        drawLetter[4] = "#     ";
        drawLetter[5] = "##### ";
        break;
    case 'M':
        drawLetter[0] = "#   # ";
        drawLetter[1] = "## ## ";
        drawLetter[2] = "# # # ";
        drawLetter[3] = "#   # ";
        drawLetter[4] = "#   # ";
        drawLetter[5] = "#   # ";
        break;
    case 'N':
        drawLetter[0] = "#   # ";
        drawLetter[1] = "##  # ";
        drawLetter[2] = "# # # ";
        drawLetter[3] = "# # # ";
        drawLetter[4] = "#  ## ";
        drawLetter[5] = "#   # ";
        break;
    case 'O':
        drawLetter[0] = " ###  ";
        drawLetter[1] = "#   # ";
        drawLetter[2] = "#   # ";
        drawLetter[3] = "#   # ";
        drawLetter[4] = "#   # ";
        drawLetter[5] = " ###  ";
        break;
    case 'P':
        drawLetter[0] = "####  ";
        drawLetter[1] = "#   # ";
        drawLetter[2] = "####  ";
        drawLetter[3] = "#     ";
        drawLetter[4] = "#     ";
        drawLetter[5] = "#     ";
        break;
    case 'Q':
        drawLetter[0] = " ###  ";
        drawLetter[1] = "#   # ";
        drawLetter[2] = "#   # ";
        drawLetter[3] = "#   # ";
        drawLetter[4] = "#  ## ";
        drawLetter[5] = " ### #";
        break;
    case 'R':
        drawLetter[0] = "####  ";
        drawLetter[1] = "#   # ";
        drawLetter[2] = "####  ";
        drawLetter[3] = "#   # ";
        drawLetter[4] = "#   # ";
        drawLetter[5] = "#   # ";
        break;
    case 'S':
        drawLetter[0] = " #### ";
        drawLetter[1] = "#     ";
        drawLetter[2] = "####  ";
        drawLetter[3] = "    # ";
        drawLetter[4] = "    # ";
        drawLetter[5] = "####  ";
        break;
    case 'T':
        drawLetter[0] = "##### ";
        drawLetter[1] = "  #   ";
        drawLetter[2] = "  #   ";
        drawLetter[3] = "  #   ";
        drawLetter[4] = "  #   ";
        drawLetter[5] = "  #   ";
        break;
    case 'U':
        drawLetter[0] = "#   # ";
        drawLetter[1] = "#   # ";
        drawLetter[2] = "#   # ";
        drawLetter[3] = "#   # ";
        drawLetter[4] = "#   # ";
        drawLetter[5] = " ###  ";
        break;
    case 'V':
        drawLetter[0] = "#   # ";
        drawLetter[1] = "#   # ";
        drawLetter[2] = "#   # ";
        drawLetter[3] = "#   # ";
        drawLetter[4] = " # # ";
        drawLetter[5] = "  #   ";
        break;
    case 'W':
        drawLetter[0] = "#   # ";
        drawLetter[1] = "#   # ";
        drawLetter[2] = "#   # ";
        drawLetter[3] = "# # # ";
        drawLetter[4] = "# # # ";
        drawLetter[5] = " # #  ";
        break;
    case 'X':
        drawLetter[0] = "#   # ";
        drawLetter[1] = " # #  ";
        drawLetter[2] = "  #   ";
        drawLetter[3] = " # #  ";
        drawLetter[4] = "#   # ";
        drawLetter[5] = "#   # ";
        break;
    case 'Y':
        drawLetter[0] = "#   # ";
        drawLetter[1] = " # #  ";
        drawLetter[2] = "  #   ";
        drawLetter[3] = "  #   ";
        drawLetter[4] = "  #   ";
        drawLetter[5] = "  #   ";
        break;
    case 'Z':
        drawLetter[0] = "##### ";
        drawLetter[1] = "   #  ";
        drawLetter[2] = "  #   ";
        drawLetter[3] = " #    ";
        drawLetter[4] = "#     ";
        drawLetter[5] = "##### ";
        break;
    default:
        break;
    }
    return drawLetter;
}
void draw(string word, int width, int height, int x, int y)
{
    for(int i=0; i<y; i++)
    {
        for(int j=0; j<width; j++)
        {
            cout << '=';
        }
        cout << endl;
    }
    for(int i=y; i<y+LETTER_HEIGHT; i++)
    {
        for(int j=0; j<x; j++)
        {
            cout << '=';
        }

        for(int k=0; k<word.size();k++)
        {
            string* letter = banner(word[k]);
            cout <<  *(letter+i-y);
        }

        for(int j=x+LETTER_WIDTH*word.size(); j< width; j++)
        {
            cout << '=';
        }
        cout << endl;
    }
    for(int i=y+LETTER_HEIGHT; i<height; i++)
    {
        for(int j=0; j< width; j++)
        {
            cout << '=';
        }
        cout << endl;
    }
    return;
}
int main()
{
    string word;
    cout << "Word: ";
    cin >> word;
    int width, height;
    cout << "Width + Height(>=" << word.size()*LETTER_HEIGHT << "): " ;
    cin >> width >> height;
    int x, y;
    cout << "Toa do x + y: ";
    cin >> x >> y;
    draw(word,width,height,x,y);
    return 0;

}
