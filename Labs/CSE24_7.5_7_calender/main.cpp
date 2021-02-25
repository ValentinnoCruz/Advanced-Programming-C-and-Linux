/* 
 * File:   main.cpp
 * Author: Valentinno Cruz
 * * CSE 24 - 7.5 Part 7
 * Created on February 16, 2021, 4:22 PM
 */


#include<iostream>



using namespace std;


// get start of the month
int dayNumb(int day, 
            int mnth, 
            int yr)
{
   static int t[] = { 0, 3, 2, 5, 0, 3, 
                      5, 1, 4, 6, 2, 4 };
              yr -= mnth < 3;
   return ( yr + yr/4 - yr/100 + yr/400 + t[mnth-1] + day) % 7;
}

// get name of the month
string getMnth(int mnthNum)
{
   string allMnths[] = {"\t\t JANUARY ", "\t\t FEBRUARY ", "\t\t MARCH ", 
                        "\t\t APRIL ", "\t\t MAY ","\t\t JUNE ", "\t\t JULY ",
                        "\t\t AUGUST "," \t\t SEPTEMBER ", "\t\t OCTOBER ", 
                        "\t\t NOVEMBER ","\t\t DECEMBER "};
   return (allMnths[mnthNum]);
}
// Get total days within a given month, including leap year
int numDays (int mnth, int yr)// function to get number of dayTot in month
{
   switch(mnth)
   {
      case 0 :
      case 2 :
      case 4 :
      case 6 :
      case 7 :
      case 9 :
      case 11: return(31);
               break;
      case 1 :
          // leap year verify
         if ((yr % 4 == 0 && yr %100 != 0) || yr % 400 == 0 ) 
            return (29);
         else
            return (28);
            break;
      case 3 :
      case 5 :
      case 8 :
      case 10 : return(30);
                break;
   }
   return 0;
}

    // call for calendar
    void showCal(int mnth, int yr){       
        int dayTot;
        int current = dayNumb (1, mnth, yr);
            dayTot = numDays (mnth-1, yr);
            cout<<endl<<getMnth(mnth-1)<<yr<<endl;
            cout<<"Sun\tMon\tTue\tWed\tThu\tFri\tSat\n";
            cout<<"___________________________________________________"<<endl;
        
        int i;
            for (i = 0; i < current; i++)
                cout << "\t";
            for (int j = 1; j <= dayTot; j++){
                 cout << j <<"\t";
            if (++i > 6){
                i = 0;
                cout<<endl;
            }
        }
        if (i)
         cout << endl;
         current = i;

        return;
}
int main()
{
        int mnth, 
            yr;
        // user input month and year
        cin >> mnth >> yr; 
        
        // show output
        showCal(mnth, yr);
        return (0);
}