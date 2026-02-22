#include <iostream>
#include <string>

using namespace std;

int main()
{
    double totalRatings = 0;
    int numberOfRatings = 0;
    string feedbackSummary = "";
    char moreFeedback;

    do
    {
        double rating;
        string comment;
        string empty;

        cout << "Enter your rating (1-5): ";
        cin >> rating;

        while (rating < 1 || rating > 5)
        {
            cout << "Invalid. Enter 1 to 5: ";
            cin >> rating;
        }
        getline(cin, empty);  
        
        cout << "Enter feedback : ";
        getline(cin, comment);

        totalRatings += rating;
        numberOfRatings++;

        feedbackSummary += to_string(numberOfRatings) + ". Rating: " + to_string((rating)) + " | Comment: " + comment + "\n";

        cout << "More feedback? (y/n): ";
        cin >> moreFeedback;

        while (moreFeedback != 'y' && moreFeedback != 'Y' &&
               moreFeedback != 'n' && moreFeedback != 'N')
        {
            cout << "Invalid. Enter y or n: ";
            cin >> moreFeedback;
        }

    } 
    while (moreFeedback == 'y' || moreFeedback == 'Y');

    if (numberOfRatings > 0)
    {
        double averageRating = totalRatings / numberOfRatings;
        cout << "\n Summary\n";
        cout << feedbackSummary;
        cout << "Total: " << numberOfRatings << " ratings\n";
        cout << "Average: " << averageRating << "\n";
    }

    return 0;
}