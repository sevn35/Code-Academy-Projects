//This program emulates a magic 8 ball toy using random outputs

#include <iostream> //used for cout
#include <cstdlib> //used for rand()
#include <time.h> //used in srand()
#include <string> //used for string
using namespace std;

int main(){
  srand(time(0)); //seed rand()
  int chance = rand()%20; //random # between 0 and 19

  string magicBall[]={"It is certain.","It is decidedly so","Without a doubt.",
    "Yes - definitely.","You may rely on it.","As I see it, yes.","Most likely.","Outlook good."
    ,"Yes","Signs point to yes","Reply hazy, try again.","Ask again later.","Better not tell you now.",
    "Cannot predict now.","Concentrate and ask again.","Don't count on it.","My reply is no.",
    "My sources say no.","Outlook not so good.","Very doubtful"};

  cout << "Magic 8-BALL:"<<endl<<endl;
  cout << magicBall[chance];

  return 1;
}