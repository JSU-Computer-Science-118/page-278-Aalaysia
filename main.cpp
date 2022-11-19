// Aalaysia Kelley J00958443
// program pg.278

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
const string SENTINEL = "-1";
int  main()
{
    string name;
    int numofVolunteers;
    int numofBoxesSold;
    int totalNumofBoxesSold;
    double costofOneBox;

    cout << fixed << showpoint <<setprecision(2);
    cout << " " << endl;
         

    totalNumofBoxesSold = 0;  
    numofVolunteers = 0;
     cin >> name;                                        
while (name != SENTINEL)                            
 {                                                   
      cin >> numofBoxesSold;                          
      totalNumofBoxesSold = totalNumofBoxesSold                   
                            + numofBoxesSold;         
 numofVolunteers++;                              
 cin >> name;                                    
 }                                                   

 cout << " ";
 cin >> costofOneBox;
 cout << endl;
 cout << endl;                                       
 cout << "Total number of boxes sold: "         
        << totalNumofBoxesSold << endl;                


cout << "Total money made: " 
     << "$ "
     << totalNumofBoxesSold * costofOneBox << endl; 

if (numofVolunteers != 0)                           
    cout << " Average number of boxes sold: "                          
            << totalNumofBoxesSold / numofVolunteers             
            << endl;                                   
else
      cout << "No input." << endl;           
return 0;    

}
