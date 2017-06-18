//
// Created by brian-kamau on 6/18/17.
//
#include <iostream>
#include <vector>
using namespace std;

class Net{
public:
    Net(topology);
    void feedForward(const vector<double> &inputval);
    void backProp(const vector<double> &targetval);
    void getResults( vector<double> &resultval) const;


private:



};
int main(){
    cout<<"Welcome to Neural Networks"<<endl;

    vector<double> inputvals;
    vector<double> targetvals;
    vector <double> resultvals;

    Net myNet(topology);

    myNet.feedForward(inputvals);
    myNet.backProp(targetvals);
    myNet.getResults(resultvals);
}


