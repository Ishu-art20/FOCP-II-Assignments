// ======================================================
//              AI ROAST GENERATOR
// ======================================================
// A beginner-friendly C++ console project
// Features:
// 1. Takes user's name
// 2. Stores roast templates in a vector
// 3. Randomly selects a roast
// 4. Replaces {name} with actual name
// 5. Handles empty input safely
// ======================================================

#include<iostream>
#include<vector>
#include<string>
#include<cstdlib>   // For rand() and srand()
#include<ctime>     // For time()

using namespace std;

int main()
{
    // --------------------------------------------------
    // Seed the random number generator
    // time(0) changes every second
    // This ensures different random results every run
    // --------------------------------------------------
    srand(time(0));

    // --------------------------------------------------
    // Vector storing funny roast templates
    // {name} will later be replaced by actual name
    // --------------------------------------------------
    vector<string> roasts =
    {
        "{name}'s code runs so slowly that even dial-up internet feels fast.",
        "If laziness had a brand ambassador, it would be {name}.",
        "{name} doesn't debug code — they negotiate with bugs.",
        "{name}'s keyboard deserves an award for surviving all that typing.",
        "Even Google asks {name}: 'Are you sure about that search?'",
        "{name}'s WiFi disconnects just to avoid their downloads.",
        "When {name} writes code, the compiler needs emotional support.",
        "{name} studies so hard that the books fall asleep first.",
        "{name}'s calculator needs therapy after exam season.",
        "If overthinking was a sport, {name} would win gold."
    };

    // Variable to store user's name
    string name;

    // --------------------------------------------------
    // Taking input from user
    // getline() allows spaces in names
    // --------------------------------------------------
    cout << "===============================" << endl;
    cout << "      AI ROAST GENERATOR" << endl;
    cout << "===============================" << endl;

    cout << "\nEnter your name: ";
    getline(cin, name);

    // --------------------------------------------------
    // Handle empty input
    // --------------------------------------------------
    if(name.empty())
    {
        cout << "\nWarning: You did not enter any name!" << endl;
        return 0;
    }

    // --------------------------------------------------
    // Generate random index
    // rand() % size gives value between:
    // 0 and size-1
    // --------------------------------------------------
    int index = rand() % roasts.size();

    // Get random roast from vector
    string roast = roasts[index];

    // --------------------------------------------------
    // Find the position of "{name}"
    // and replace it with actual user name
    // --------------------------------------------------
    size_t pos = roast.find("{name}");

    if(pos != string::npos)
    {
        roast.replace(pos, 6, name);
    }

    // --------------------------------------------------
    // Display final roast
    // --------------------------------------------------
    cout << "\n--------------------------------" << endl;
    cout << "AI Roast Generator Says:" << endl;
    cout << roast << endl;
    cout << "--------------------------------" << endl;

    return 0;
}
