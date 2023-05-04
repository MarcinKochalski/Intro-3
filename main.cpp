#include <iostream>
using namespace std;
struct arrayWithCounter
{
double numbers[5];
double size;    
};
struct statResults
{
double avg;
double min;
double max;    
};

double avg(int sum, struct arrayWithCounter array1)
{
    int avgg=0;
    avgg=sum / array1.size;
    return avgg;
}
int max(struct arrayWithCounter array1)
{
    int maxx=array1.numbers[0];
    for (int i = 0; i < array1.size; i++)
    {
        if (maxx < array1.numbers[i])
            maxx = array1.numbers[i];
    }
    return maxx;
}

int min (struct arrayWithCounter array1)
        {
    int minn=array1.numbers[0];
    for (int i = 0; i < array1.size; i++)
    {
        if (minn > array1.numbers[i])
            minn = array1.numbers[i];
    }
    return minn;
}

int main()
{
    int sum;
    struct arrayWithCounter array1;
        array1.numbers[0]=1;
        array1.numbers[1]=2;
        array1.numbers[2]=3;
        array1.numbers[3]=4;
        array1.numbers[4]=5;
        array1.size = (sizeof(array1.numbers)/sizeof(*array1.numbers));

    for (int i=0; i<array1.size; i++)
    {
        cout << array1.numbers[i] << " ";
    }
    cout <<endl;
    cout << "Size is " << array1.size;
    for (int i=0; i<array1.size; i++)
        sum+=array1.numbers[i];
    cout <<endl;
    cout <<endl;
    cout << sum << " is sum" <<endl;


    struct statResults results1;
        results1.avg=avg(sum, array1);
        results1.min=min(array1);
        results1.max=max(array1);
    cout << results1.avg << " is avg";
    cout << endl;
    cout << results1.max << " is max";
    cout << endl;
    cout << results1.min << " is min";
    cout << endl;
    return 0;
}
