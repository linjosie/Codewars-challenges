#include <math.h>
class Movie{
public:
    static int movie(int card, int ticket, double perc);
};

int Movie::movie(int card, int ticket, double perc) {
  int n = 0;
  double sum = 0;
  while(true){
	  n++;
	  sum = sum+pow(perc,n);
	  //cout<<n<<endl;
	  //cout<<sum<<endl;
	  //cout <<endl;
    if(ceil(card+ticket*sum) < ticket*n) return n;
  }

}

///other solution


