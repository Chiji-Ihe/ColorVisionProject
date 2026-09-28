#include <iostream>
using namespace std;

int RGB;
int color;

int main()
{
    cout << "Put in a color" << endl;
    cin >> color;
    
    switch(color)
    {
        case 1:
        cout << "Red" << endl;
        break;

        case 2:
        cout << "Blue" << endl;
        break;

        case 3:
        cout << "Green" << endl;
        break;

        default:
        cout << "Invalid Entry. Please choose again" << endl;
        cin >> color;
        break;
    }
    cout << "Insert an RGB Value" << endl;
    cin >> RGB;

    while(RGB >= 0 && RGB <= 255)
    {
        if(RGB >= 0 && RGB <= 63)
    {
        cout << color << " is darker tone side" << endl;
        cout << "Insert an RGB Value" << endl;
        cin >> RGB;

    }

    else if(RGB >= 64 && RGB <= 192)
    {
        cout << color << " is in the middle tone range" << endl;
        cout << "Insert an RGB Value" << endl;
        cin >> RGB;
    }
    else if(RGB >= 193 && RGB <= 255)
    {
        cout << color << " is in the light tone range" << endl;
        cout << "Insert an RGB Value" << endl;
        cin >> RGB;

        
    }
    else
    cout << "Invalid Entry" << endl; 
    cout << "Insert an RGB Value" << endl; 
    cin >> RGB;
    
    }
    
  return 0;
}
