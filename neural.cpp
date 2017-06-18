//
// Created by brian-kamau on 6/18/17.
//
#include <iostream>
#include <vector>
using namespace std;
typedef vector<Neuron> Layer;
class Neuron;
class Net{
public:
    Net(vector <unsigned> &topology);
    void feedForward(const vector<double> &inputval);
    void backProp(const vector<double> &targetval);
    void getResults( vector<double> &resultval) const;


private:
    vector<Layer> m_layers;



};
Net::Net(vector<unsigned> &topology) {
    unsigned  numLayers =topology.size();
    for(unsigned layerNum = 0;layerNum<numLayers;layerNum++){

        m_layers.push_back(Layer());

    }



}
using namespace std;

int main(){
    cout<<"Welcome to Neural Networks"<<endl;

    vector<double> inputvals;
    vector<double> targetvals;
    vector <double> resultvals;
    vector <unsigned> topology;
    Net myNet(topology);

    myNet.feedForward(inputvals);
    myNet.backProp(targetvals);
    myNet.getResults(resultvals);
}


