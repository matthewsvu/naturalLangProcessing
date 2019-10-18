#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
    double num= 0, maxNum = 0, average, total= 0, minNum= 100;
    int count = 0;
    
    string input, type, exception;
    
    cout << "Enter a line of input\n";
    getline(cin, input);
    while(true)
    {
        istringstream sinput(input);
        while(sinput >> input)
        {

            if(isdigit(input[0]))
            {
                num = stod(input);
                cout << num << " ";
                total += num;
                maxNum = max(num, maxNum);
                minNum = min(num, minNum);
                average = total;
                count++;
            }
            else if(input.find("bye") == true || input.find("sleep.") == true )
            {
                cout << endl;
                cout << "OK bye!";
                break;
            }
            else if(input == "total")
            {
                type = input;
            }
            else if(input == "max")
            {
                type = input;
            }
            else if(input == "min")
            {
                type = input;
            }
            else if(input == "average")
            {
                type = input;
            }
            else
            {
                exception = exception + input + " ";
            }
        }
        if(input == "bye" || input == "sleep.")
        {
            cout << endl;
            cout << "OK bye!";
            break;
        }
        else if(type == "total")
        {
            cout << type << " " << total << endl;
        }
        else if(type == "max")
        {
            cout << type << " " << maxNum << endl;
        }
        else if(type == "min")
        {
            cout << type << " " << minNum << endl;
        }
        else if(type == "average")
        {
            cout << type << " " << average / count << endl;
        }
        else
        {
            cout << exception << " - I am not yet that smart to answer this one!" << endl;
        }
        average = 0;
        total = 0;
        maxNum = 0;
        minNum = 100;
        type = "";
        count = 0;
        exception = "";
        
        cout << "Enter a line of input\n";
        getline(cin, input);
    }
}
