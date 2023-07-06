#include<iostream>
using namespace std;

 // create a class for the mushrooms called Mushrom

class Mushroom
{
private:
	bool hasGills;
	bool growInForest;
	bool hasRing;
	bool hasConvexCap;
public:
	Mushroom(bool g, bool f, bool r, bool c) {
    	hasGills = g;
    	growInForest = f;
    	hasRing = r;
    	hasConvexCap = c;
	}
 
	bool getHasGills() {
    	return hasGills;
	}
	
	bool getGrowInForest() {
    	return growInForest;
	}
 
	bool getHasRing() {
    	return hasRing;
	}
	
	bool getHasConvexCap() {
    	return hasConvexCap;
	}
};

//create the function findOut that checks if the user input against the properties of the predefined mushrooms
 
bool findOut(Mushroom m, bool arr[]) {
	if(
        (m.getHasGills() == arr[0]) &&
   	 (m.getGrowInForest() == arr[1]) &&
        (m.getHasRing() == arr[2]) &&
        (m.getHasConvexCap() == arr[3])
	) {
    	return true;
	}else {
    	return false;
	}
}

//Enter the main() function
 
int main() {

//Predefine some mushrooms of type Mushroom (instances of Mushroom class)

	Mushroom agaric(true, false, true, true);
	Mushroom amanite(true, true, true, true);
	Mushroom cepe(false, true, false, false);
	Mushroom coprin(true, false, true, false);
	Mushroom girolle(true, true, false, false);
	Mushroom pied(true, true, false , true);
	
	char qt[4];    //Declare the array variable to hold the character responses
	bool qts[4];   //Declare the array variable to hold the boolean values
	char start;    //Declare the variable to receive input to start the game

//Program preamble

  cout<<"Think of a Mushroom, and I will guess it by asking you a few questions!"<<endl;
  cout<<"Have you thought about the Mushroom? (Click any key to continue or q to Exit the game)"<<endl<<endl;
	cin>>start;

//define condition terminate program

	if(start == 'q') {
    cout<<"Quitting the game..."<<endl;
	return 0;
	}

//Ask for user input

  cout<<"Does the mushroom have Gills? (Please enter y or n and then press the Enter key.): ";
	cin>>qt[0];
  cout<<"Does the mushroom grow in the forest? (Please enter y or n and then press the Enter key.): ";
	cin>>qt[1];
  cout<<"Does the mushroom have a ring? (Please enter y or n and then press the Enter key.): ";
	cin>>qt[2];
  cout<<"Does the mushroom have a convex cup? (Please enter y or n and then press the Enter key.): ";
	cin>>qt[3];
 
	cout<<endl; //Reserve some space 

//convert character input (y/n) to boolean values
 
	for(int i = 0; i < 4; i++) {
    	if(qt[i] == 'y'){
        	qts[i] = true;
    	}else if(qt[i] == 'n') {
        	qts[i] = false;       	
    	}else {
            cout<<"You entered invalid input. Please Enter y or n.";
        	return 0;
    	}
	}

//compare user input with various mushrooms

	if(findOut(agaric, qts) == 1) {
        cout<<"I guess the mushroom is 'Agaric Jaunissant'."<<endl;
	} else if(findOut(amanite, qts) == 1) {
        cout<<"I guess the mushroom is 'Amanite tue-mouche'."<<endl;
	} else if(findOut(cepe, qts) == 1) {
        cout<<"I guess the mushroom is 'Cepe de bordeau'."<<endl;
	}else if(findOut(coprin, qts) == 1) {
        cout<<"I guess the mushroom is 'Coprin chevelu'."<<endl;
	}else if(findOut(girolle, qts) == 1) {
        cout<<"I guess the mushroom is 'Girolle'."<<endl;
	}else if(findOut(pied, qts) == 1) {
        cout<<"I guess the mushroom is 'Pied bleu'."<<endl;
	}else {
    cout<<"I don't think I know that kind of mushroom"<<endl;
	}
 
	return 0;
}

