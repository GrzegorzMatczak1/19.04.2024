#include <iostream>

using namespace std;

class Earth
{
public:
    //static int population;
    static Earth* instance;
    static Earth* getEarth() {
        /*if(population < 2) {
            return new Earth();
        }
        return nullptr;*/

        if(instance == nullptr)
        {
            instance = new Earth();
        }
        return instance;
    }


    //Earth();
    /*Earth()
    {
        population++;
    }*/

    ~Earth()
    {
        //population--;
        instance = nullptr;
    }
private:
    //Earth();
    Earth()
    {
        //population++;
    }

};

/*Earth::Earth()
{
    population++;
}*/

//int Earth::population = 0;
Earth* Earth::instance = nullptr;

int main()
{
    //Earth earth1;
    //Earth earth2;
    //cout << earth1.population << endl;

    Earth* earth1 = Earth::getEarth();
    delete earth1;
    earth1 = nullptr;
    Earth* earth2 = Earth::getEarth();
    Earth* earth3 = Earth::getEarth();

    //cout << Earth::population << endl;

    cout << earth1 << endl;
    cout << earth2 << endl;
    cout << earth3 << endl;

    return 0;
}
