#include <iostream>
#include <string>
#include <vector>
#include <istream>
#include <iterator>
#include <fstream> 
using namespace std;

void basicColorsTester();
void validityHexChecker(string& inputHexCode, vector<char> hexCheck);


void basicColorsTester()
  {
  vector<int> colorValues;
    int colorNums;

    cout << "Enter The Five Numbers That Correspond To Your Colors in Your Palette" << endl;
    string basicColors[11] ={"red","orange","yellow","green","blue","purple","white","black","brown","gray","pink"};

    for (int i = 0; i < size(basicColors); ++i)
    {
        cout << (i + 1) << " --> " << basicColors[i] << endl;
    }

    for (int j = 0; j < 5; ++j)
    {
      cin >> colorNums;
      if(colorNums >= 1 && colorNums <= 11)
      {
      colorValues.push_back(colorNums - 1);
      }
      else 
      {
        cout << "Invalid input" << endl;
        --j;
      }
    }
    
    cout << "Your colors are: " << endl;
    for (int k = 0; k < colorValues.size(); ++k) {
        cout << (k + 1) << ". " << basicColors[colorValues[k]] << endl;
    }

    for (int h = 0; h < colorValues.size(); ++h) 
    {
        string currentColor = basicColors[colorValues[h]];
        
        if (currentColor == "red") 
        {
            cout << "Because your palette includes red, people with protanomaly or protanopia " << endl;
            cout << "either can't differentiate from or see red" << endl;
        }
        if (currentColor == "green")
        {
            cout << "Because your palette includes green, people with deuteranomly or deuternopia " << endl; 
            cout << "either can't differentiate from or see green" << endl;
        }
        if (currentColor == "blue")
        {
            cout << "Because your palette includes blue, people with tritanomaly or tritanopia " << endl; 
            cout << "either can't differentiate from or see blue" << endl;
        }
        if (currentColor == "yellow")
        {
            cout << "Because your palette includes yellow, people with tritanomaly or tritanopia " << endl; 
            cout << "have trouble differentiating yellow from red and purple" << endl;
        }
        if (currentColor == "orange")
        {
            cout << "Because your palette includes orange, people with tritanomaly or tritanopia " << endl; 
            cout << "have trouble differentiating orange from red and brown" << endl;
        }
        if (currentColor == "purple")
        {
            cout << "Because your palette includes purple, people with deuteranomly, deuternopia or tritanopia " << endl; 
            cout << "have trouble differentiating purple from red, blue, and purple" << endl;
        }
        if (currentColor == "gray")
        {
            cout << "Because your palette includes gray, people with deuternopia or tritanopia " << endl;
            cout << "have trouble differentiating gray from blue, purple, or yellow" << endl;
        }
        if (currentColor == "brown")
        {
            cout << "Because your palette includes brown, people with protanomaly or protanopia " << endl;
            cout << "have trouble differentiating brown from red" << endl;
        }
        if (currentColor == "pink")
        {
            cout << "Because your palette includes green, people with protanopia, deuteranopia, tritanopia " << endl; 
            cout << "either can't differentiate blue from purple, and can't see red or green" << endl;
        }
    }
  }

void validityHexChecker(string& inputHexCode, vector<char> hexCheck)
  {
    bool validHex = false;

    while (!validHex) 
    {
      cout << "Enter the Hex Code (Don't use #): " << endl;
      cin >> inputHexCode;

      if (inputHexCode.length() != 6) 
      {
        cout << "Invalid Hex Code: Must be exactly 6 characters." << endl;
      } 
      else 
      {
        validHex = true;

        for (int g = 0; g < inputHexCode.length(); ++g) 
        {
          bool charIsValid = false;

          for (int i = 0; i < hexCheck.size(); ++i) 
          {
            if (inputHexCode[g] == hexCheck[i]) 
            {
              charIsValid = true;
              break; 
            }
          }

          if (!charIsValid) 
          {
            validHex = false;
            cout << "Invalid Hex Code: '" << inputHexCode[g] << "' is not valid." << endl;
            break;
          }
        }
      }
    }
  };

struct RGB 
  {
    int r;
    int g;
    int b;
  };

int clampRGB(double val) 
  {
    int rounded = val + 0.5; 
    if (rounded < 0) return 0;
    if (rounded > 255) return 255;
    return rounded;
  }

int hexCharToInt(char c) 
  {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    return 0;
  }

RGB hexToRGB(string hex) 
  {
    RGB color;
    color.r = hexCharToInt(hex.at(0)) * 16 + hexCharToInt(hex.at(1));
    color.g = hexCharToInt(hex.at(2)) * 16 + hexCharToInt(hex.at(3));
    color.b = hexCharToInt(hex.at(4)) * 16 + hexCharToInt(hex.at(5));
    return color;
  }

string rgbToHex(RGB c) 
  {
    string hexChars = "0123456789ABCDEF";
    string result = "#";
    
    result += hexChars.at(c.r / 16);
    result += hexChars.at(c.r % 16);
    result += hexChars.at(c.g / 16);
    result += hexChars.at(c.g % 16);
    result += hexChars.at(c.b / 16);
    result += hexChars.at(c.b % 16);
    
    return result;
  }

RGB simulateColorBlindness(RGB c, string type) 
  {
    double r = c.r;
    double g = c.g;
    double b = c.b;
    double simR = r, simG = g, simB = b;

    if (type == "Protanopia") {
        simR = 0.567 * r + 0.433 * g;
        simG = 0.558 * r + 0.442 * g;
        simB = 0.242 * g + 0.758 * b;
    } 
    else if (type == "Deuteranopia") {
        simR = 0.625 * r + 0.375 * g;
        simG = 0.700 * r + 0.300 * g;
        simB = 0.300 * g + 0.700 * b;
    } 
    else if (type == "Tritanopia") {
        simR = 0.950 * r + 0.050 * g;
        simG = 0.433 * g + 0.567 * b;
        simB = 0.475 * g + 0.525 * b;
    }
    else if (type == "Achromatopsia") {
        double gray = 0.299 * r + 0.587 * g + 0.114 * b;
        simR = gray;
        simG = gray;
        simB = gray;
    }

    RGB result;
    result.r = clampRGB(simR);
    result.g = clampRGB(simG);
    result.b = clampRGB(simB);
    return result;
  }


int main()
{
  //bool
    bool check = true;
    bool entryTester = true;

    //char

    char useTester;

    //startup

    cout << "---Welcome to the Color Blindness Palette Tester---" << endl;
    cout << "Would Like To Use The Tester (y/n)?" << endl;
    cin >> useTester;

  while(check)
  {
    //Shuts the code down if the user inputs n or N
    if (useTester == 'n' || useTester == 'N')
    {
    cout << "Shutting down..." << endl;
    check = false;
    return 0;
    }

    while(entryTester)
    {
        //Makes sure this loop ends
        if (useTester == 'y' || useTester == 'Y')
        {
            entryTester = false;
        }
        //Makes sure the start up entry is valid
        else 
        {
        cout << "Invalid input" << endl;
        cout << "Please input a valid entry" << endl;
        cout << "Would Like To Start The Tester (y/n)?" << endl;
        cin >> useTester;
        }
    }

    cout << "Which Command Would You Like To Run?" << endl << "1. Basic Colors" << endl << "2. Hex Codes" << endl << "3. Shut Down" << endl;
    int selectTester;
    cin >> selectTester;
    while(selectTester != 1 && selectTester != 2 && selectTester != 3)
    {
      cout << "That Command Does Not Exist" << endl << "Please Input a Valid Command" << endl;
      cin >> selectTester;
    }

    //BASIC COLORS TESTER
    if (selectTester == 1)
    {
    basicColorsTester();
    cout << endl;
    }
    //HEX CODES TESTER
    if (selectTester == 2)
    {
    vector<char> hexCheck = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','A','B','C','D','E','F'};
    string inputHexCode;
    validityHexChecker(inputHexCode, hexCheck);

    RGB original = hexToRGB(inputHexCode);
    vector<string> conditions = {"Protanopia", "Deuteranopia", "Tritanopia", "Achromatopsia"};

    cout << endl << "Original Color: " << rgbToHex(original) << " (" << original.r << ", " << original.g << ", " << original.b << ")" << endl;
    cout << "--------------------------------------------------" << endl;

    for (int i = 0; i < conditions.size(); i++) 
      {
        string type = conditions[i];
        RGB sim = simulateColorBlindness(original, type);
        
        // Calculate difference in each channel
        int dr = original.r - sim.r;
        int dg = original.g - sim.g;
        int db = original.b - sim.b;
        
        // Squared distance avoids needing sqrt() from <cmath>
        int distSquared = (dr * dr) + (dg * dg) + (db * db);

        cout << type << "\t| Appears as: " << rgbToHex(sim) << "\t| ";

        if (distSquared <= 4000) {
            cout << "[SAFE - Minimal Color Shift]" << endl;
        } else if (distSquared <= 20000) {
            cout << "[MODERATE SHIFT]" << endl;
        } else {
            cout << "[CAUTION - Heavy Color Distortion]" << endl;
        }
      }

    char saveChoice;
    cout << endl << "Would You Like To Save These Results To An Output File? (y/n): ";
    cin >> saveChoice;

    if (saveChoice == 'y' || saveChoice == 'Y') 
    {
      ofstream outFile("ColorBlindnessReport.txt");
      
      if (outFile.is_open()) 
      {
        outFile << "Original Color: " << rgbToHex(original) << " (" << original.r << ", " << original.g << ", " << original.b << ")\n";
        outFile << "--------------------------------------------------" << endl;

        for (int i = 0; i < conditions.size(); i++) 
        {
          string type = conditions.at(i);
          RGB sim = simulateColorBlindness(original, type);
                
          int dr = original.r - sim.r;
          int dg = original.g - sim.g;
          int db = original.b - sim.b;
          int distSquared = (dr * dr) + (dg * dg) + (db * db);

          outFile << type << "\t| Appears as: " << rgbToHex(sim) << "\t| ";

          if (distSquared <= 4000) 
          {
            outFile << "[SAFE - Minimal Color Shift]" << endl;
          } else if (distSquared <= 20000) 
          {
            outFile << "[MODERATE SHIFT]" << endl;
          } else 
          {
            outFile << "[CAUTION - Heavy Color Distortion]" << endl;
          }
        }
        outFile.close();
        cout << "Success! Results Saved To 'ColorBlindnessResults.txt'" << endl;
      } 
      else 
      {
        cout << "Error: Could Not Create The Output File." << endl;
      }
    }
    }
    if (selectTester == 3)
    {
      cout << "Shutting Down..." << endl;
      return 0;
    }
  }
    return 0;
}
