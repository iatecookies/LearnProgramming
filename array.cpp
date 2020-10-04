#include <iostream>
#include <string>

using namespace std;

// Arrays, Arrays as parameters and multidimensional arrays
// size inside array int guesses[size];  int size = sizeof(guesses)/sizeof(int);

//constants
const int CAPACITY = 5;
const int ROWS = 4;
const int COLS = 3;


//functions declarations

/*----------------Multi dimensional array --------------*/
void fillScores(int[][COLS]);
// fullScores
// @param int[][] - scores of all tests from students

void printScores(int[][COLS]);
// printScores
// @param int[][] - scores of all tests from students


/* ----------------Array as parameters----------------------
void fillArray(int[], int&);
// fillArray
// @param int[] - scores of students
// @param int& - number of students


void printArray(const int[], int);
// printArray
// @param int[] - scores of students
// @param int - number of students
*/


int main () {
    
    
    /* --------------------simple method-------------------------
    string colors[] = {"green", "red", "purple", "blue"};

    colors << "colors: " << colors[0];
    */
    
    
    /* -------------------more complicated method-------------------
    
    string colors[CAPACITY];
    int i = 0;
    int numOfElements = 0;
    string input;
    
    cout << " Please type the color you want " << endl;
    cin >> input;
    
    while (input != "-1" && i < CAPACITY){
        colors[i] = input;
        i++;
        numOfElements++;
        cin >> input;
    }
    
    for (int j = 0; j < numOfElements; j++){
        cout << "colors " << colors[j] << endl;
    }
    
    */
    
    
    /*  ----------------array as parameters-------------------
    int scores[CAPACITY];
    int numOfElements = 0;
    
    
    //dont need to put brackets just like call by reference you dont need to put &
    fillArray(scores, numOfElements);
    printArray(scores, numOfElements);
    */
    
    
    
    /*----------------Multi dimensional array --------------*/
    
    
    /*
    int score[ROWS][COLS] = {
        {80,90,80},
        {73,12,13},
        {31, 1,12},
        {12,123,12}
        
    };
    
    cout << score[0][2] << endl;
    */
    int scores[ROWS][COLS];
    fillScores(scores);
    printScores(scores);
    
    
    return 0;
}

//function definitions


/*----------------Multi dimensional array --------------*/
//kan ook ROWS maar hoeft niet
void fillScores(int newScores[][COLS]){

    int score;
    for (int i = 0; i < ROWS; i++){
        cout << "Enter scores for test #" << (i+1) << ": ";
        for (int j = 0; j < COLS; j++){
            cin >> score;
            newScores[i][j] = score;
            
            
        }
        cout << endl;
    }
}

void printScores(int printScore[][COLS]){
    
    
    for(int i =0 ; i< COLS ;i++){
        cout << endl << "Student " <<(i+1) << "Score: ";
        for (int j=0; j<ROWS; j++){
            cout << printScore[j][i] <<" ";
        }
        
 
    }

}




/* --------------------Array as parameters --------------------
//array are always passed by reference!
void fillArray(int newScores[], int& numOfElements){
    int i = 0;
    int score;
    cout << "Type in scores of students (-1 to stop): ";
    
    cin >> score;
    
    while (score != -1 && i < CAPACITY){
        newScores[i] = score;
        numOfElements++;
        i++;
        cin >> score;
    }
}   
// const als je array niet wilt veranderen
void printArray (const int newScore[], int numOfElements){  
    cout << "Score " ;
    for (int i = 0; i < numOfElements; i++){
    
        cout << newScore[i] << " ";
    }
}
*/
