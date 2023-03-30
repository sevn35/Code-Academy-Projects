//This program is sorts a user into a harry potter house
#include <iostream>
#include <string>
using namespace std;

int main(){
  int gryf =0; 
  int raven =1;
  int huff =0;
  int slyt =0;
  int awn;
  string question[]={ //array of all questions asked
    "When I die i want the world to remember me as?",
    "The Greatest Power is?",
    "Whats your favorite color?",
    "Whats your favorite animal?"
  };
  string choices[]={ //array of choices must be equal to questions
    " 1) The good\n 2) The Great\n 3) The Wise\n 4) The Bold",
    " 1) Freindship\n 2) Knowledge\n 3) Loyalty\n 4) Power",
    " 1) Gold\n 2) Blue\n 3) Black\n 4) Green",
    " 1) Lion\n 2) Raven\n 3) Badger\n 4) Snake"
  };

  for(int i=0;i<(sizeof(question)/sizeof(question[0]));i++){
    //(sizeof(question)/sizeof(question[0]) is the size of array
    cout << question[i] <<endl<< choices[i] <<endl;
    cin >> awn;
    
    if(awn==1) //gives points to houses based on choice
        gryf++;
    else if(awn==2)
        raven++;
    else if(awn==2)
        huff++;
    else
        slyt++;
  }

  if((gryf>raven)&&(gryf>huff)&&(gryf>slyt))
      cout << "Gryffindor!!";
  else if((raven>gryf)&&(raven>huff)&&(raven>slyt))
      cout << "Ravenclaw!!";
  else if((huff>raven)&&(huff>gryf)&&(huff>slyt))
      cout << "Hufflepuff!!";
  else if((slyt>raven)&&(slyt>huff)&&(slyt>gryf))
      cout << "Slytherin!!";
  else //points are equal
      cout << "You may belong to multiple houses";
  
  return 1;
}