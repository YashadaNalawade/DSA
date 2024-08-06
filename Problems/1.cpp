#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

vector<string> organizeItinerary(vector<string>& cities, vector<int>& days) {
    unordered_map<string, int> itinerary;

    // Iterate through the cities and days, and sum up the days for each city
    for (size_t i = 0; i < cities.size(); ++i) {
        itinerary[cities[i]] += days[i];
    }

    // Prepare the result vector with the formatted strings
    vector<string> result;
    for (const auto& entry : itinerary) {
        result.push_back(entry.first + ": " + to_string(entry.second));
    }

    return result;
}

int main() {
    vector<string> cities = {"Paris", "Rome", "Paris", "Berlin", "Rome"};
    vector<int> days = {3, 4, 2, 5, 1};

    vector<string> result = organizeItinerary(cities, days);

    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}
