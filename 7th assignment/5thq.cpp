#include <iostream>

using namespace std;



class ZooAnimal  

{

    private:

        char *name;

        int cageNumber;

        int weightDate;

        int weight;



    public:

        void Destroy(); 

        void Create(char *n, int cN, int wDt, int W);

        char* reptName();

        int daysSinceLastWeighed(int today);

};



//QUESTION 5 - PART 2



void ZooAnimal::Create(char *n, int cN, int wDt, int W) {

    name = n;

    cageNumber = cN;

    weightDate = wDt;

    weight = W;

}



void ZooAnimal::Destroy() {

    delete [] name;

}



char* ZooAnimal::reptName() {

    return name;

}



int ZooAnimal::daysSinceLastWeighed(int today) {

    int startday, thisday;

    thisday = today/100*30 + today - today/100*100;

    startday = weightDate/100*30 + weightDate - weightDate/100*100;

    if (thisday < startday) {

        thisday += 360;

        return (thisday-startday);

    }



    if (today < weightDate) {

        today += 360;

        return (today-weightDate);

    }

}

int main()

{

    ZooAnimal bozo;

    bozo.Create("Bozo", 408, 1027, 400);

    cout << "This animal's name is " << bozo.reptName() << endl;

    return 0;

}
