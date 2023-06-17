#include <iostream>
#include <string>
using namespace std;

struct Data {
    string name;
    int region;
    int vote;
};
struct Agregate{
	string name;
	int totalVote;
};


int main() {
    const int SIZE = 40;
    Data dataArray[SIZE] = {
        {"Greg Goldy", 2, 34},
        {"Mickey Miller", 1, 56},
        {"Lisa Fisher", 2, 56},
        {"Peter Lamba", 1, 78},
        {"Danny Dillion", 4, 29},
        {"Sheila Bower", 4, 78},
        {"Mickey Miller", 2, 63},
        {"Lisa Fisher", 1, 23},
        {"Peter Lamba", 2, 56},
        {"Danny Dillion", 1, 25},
        {"Sheila Bower", 2, 70},
        {"Peter Lamba", 4, 23},
        {"Danny Dillion", 4, 12},
        {"Greg Goldy", 3, 134},
        {"Sheila Bower", 4, 100},
        {"Mickey Miller", 3, 67},
        {"Lisa Fisher", 2, 67},
        {"Danny Dillion", 3, 67},
        {"Sheila Bower", 1, 23},
        {"Mickey Miller", 1, 56},
        {"Lisa Fisher", 2, 35},
        {"Sheila Bower", 3, 78},
        {"Peter Lamba", 1, 27},
        {"Danny Dillion", 2, 34},
        {"Greg Goldy", 1, 75},
        {"Peter Lamba", 4, 23},
        {"Sheila Bower", 3, 55},
        {"Mickey Miller", 4, 67},
        {"Peter Lamba", 1, 23},
        {"Danny Dillion", 3, 89},
        {"Mickey Miller", 3, 89},
        {"Peter Lamba", 1, 67},
        {"Danny Dillion", 2, 37},
        {"Sheila Bower", 4, 89},
        {"Mickey Miller", 2, 78},
        {"Lisa Fisher", 1, 87},
        {"Peter Lamba", 1, 90},
        {"Danny Dillion", 4, 56}
    };
	
	const int sz = 6;
	Agregate aggr[sz] = {
		{"Greg Goldy",0},
		{"Mickey Miller",0},
		{"Lisa Fisher",0},
		{"Peter Lamba",0},
		{"Danny Dillion",0},
		{"Sheila Bower",0},
	};
	
    // Print the data in the dataArray
    for (int i = 0; i < SIZE; i++) {
        cout << dataArray[i].name << " " << dataArray[i].region << " " << dataArray[i].vote << endl;
    	if (dataArray[i].name == "Greg Goldy"){
    		aggr[0].totalVote += dataArray[i].vote;
		}
		else if (dataArray[i].name == "Mickey Miller"){
    		aggr[1].totalVote += dataArray[i].vote;
		}
		else if (dataArray[i].name == "Lisa Fisher"){
    		aggr[2].totalVote += dataArray[i].vote;
		}
		else if (dataArray[i].name == "Peter Lamba"){
    		aggr[3].totalVote += dataArray[i].vote;
		}
		else if (dataArray[i].name == "Danny Dillion"){
    		aggr[4].totalVote += dataArray[i].vote;
		}
		else if (dataArray[i].name == "Sheila Bower"){
    		aggr[5].totalVote += dataArray[i].vote;
		}
	
	}
	cout<<aggr[1].totalVote<<endl;
    return 0;
}
