#include <iostream>
using namespace std;
int main(int argumentcount,char **arguments)
{   if (argumentcount>5)
    	{  //std::cout <<"stdout \n";
    		for (int i=1;i<=4;i++)
    	 	{cout << arguments[i] <<"\n"; 
            }
            //std::cout <<"stderr \n";
            for (int i=5;i<argumentcount;i++)
       	    cerr << arguments[i] <<"\n";
       	}
    else
    	{  // std::cout <<"stdout \n";
    		for (int i=1;i<5;i++)
           
           cout << arguments[i] <<"\n";
           
         }
	return 0;
}