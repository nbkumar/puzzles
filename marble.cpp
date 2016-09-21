        #include <cstdio>
        #include <iostream>
        #include <string>
        #include <sstream>
        #include <vector>
        using namespace std;
        
        int main(int argc, char** argv)
        {
        	int tc, T; int num; int marbles[32000];
            int pocketIncrementer;
         	int numberofMarbles;int sumofMarbles=0;int equilizedNum; 
        	cin >> T;  
        	for(tc = 0; tc < T; tc++) {
                cin >> num;
                for (pocketIncrementer=0;pocketIncrementer < num; pocketIncrementer ++) {
                  cin >> marbles[pocketIncrementer];
                  sumofMarbles += marbles[pocketIncrementer];
            }
         
               equilizedNum=sumofMarbles/num; numberofMarbles=0;
              for (pocketIncrementer=0;pocketIncrementer < num; pocketIncrementer ++) {
                   if(marbles[pocketIncrementer] != equilizedNum && marbles[pocketIncrementer] < equilizedNum  ) {
                   numberofMarbles += (equilizedNum - marbles[pocketIncrementer]) ;    
                    }
                }    
                if (numberofMarbles > 0 ) {
               cout << numberofMarbles <<endl; 
                } else { 
                    numberofMarbles = -1;
                    cout << numberofMarbles << endl ;}
                sumofMarbles =0;  numberofMarbles=0;   	
        	}
                  
        	return 0;//Your program should return 0 on normal termination.
        }
