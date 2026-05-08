// ======================================================
//        STUDENT EXCUSE GENERATOR (FUNNY VERSION)
// ======================================================
// Beginner-Friendly C++ Console Program
//
// Features:
// 1. Takes student name as input
// 2. Stores funny excuses in a vector
// 3. Randomly selects one excuse
// 4. Replaces {name} with actual name
// 5. Uses srand(time(0)) and rand()
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
    // Seed random number generator
    // This helps generate different excuses each run
    // --------------------------------------------------
    srand(time(0));

    // --------------------------------------------------
    // Vector storing funny and realistic excuses
    // --------------------------------------------------
    vector<string> excuses =
    {
        "{name}'s Wi-Fi stopped working exactly at submission time.",
        
        "{name}'s laptop battery died with 1% homework left.",
        
        "{name} finished the assignment, but the file disappeared mysteriously.",
        
        "{name}'s keyboard stopped typing the important keys only.",
        
        "{name} was about to upload the assignment when the power went out.",
        
        "{name}'s laptop restarted itself during the final save.",
        
        "{name}'s internet became slower than a turtle during submission.",
        
        "{name} accidentally submitted the wrong file and noticed too late.",
        
        "{name}'s USB drive decided to retire before the assignment could be printed.",
        
        "{name}'s touchpad stopped working during the final upload.",
        
        "{name} clicked 'Save' but the laptop had other plans.",
        
        "{name}'s assignment was complete, but the PDF refused to open.",
        
        "{name}'s browser crashed exactly when the upload reached 99%.",
        
        "{name}'s charger stopped working during the assignment marathon.",
        
        "{name}'s computer froze after writing the best answer of the semester."
    };

    // Variable to store student name
    string name;

    // --------------------------------------------------
    // Taking input from user
    // --------------------------------------------------
    cout << "====================================" << endl;
    cout << "     STUDENT EXCUSE GENERATOR" << endl;
    cout << "====================================" << endl;

    cout << "\nEnter student name: ";
    getline(cin, name);

    // --------------------------------------------------
    // Handle empty input
    // --------------------------------------------------
    if(name.empty())
    {
        cout << "\nWarning: Please enter a valid name!" << endl;
        return 0;
    }

    // --------------------------------------------------
    // Generate random index
    // --------------------------------------------------
    int index = rand() % excuses.size();

    // Get random excuse
    string excuse = excuses[index];

    // --------------------------------------------------
    // Replace {name} with actual student name
    // --------------------------------------------------
    size_t pos = excuse.find("{name}");

    if(pos != string::npos)
    {
        excuse.replace(pos, 6, name);
    }

    // --------------------------------------------------
    // Display final excuse
    // --------------------------------------------------
    cout << "\n------------------------------------" << endl;
    cout << "Generated Excuse:" << endl;
    cout << excuse << endl;
    cout << "------------------------------------" << endl;

    return 0;
}
