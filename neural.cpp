//
// Created by brian-kamau on 6/18/17.
//
#include <iostream>
#include <vector>

using namespace std;
class Neuron{



};
typedef vector<Neuron> Layer;

class Net{
public:
    Net(vector <unsigned> &topology);
    void feedForward(const vector<double> &inputval){

    };
    void backProp(const vector<double> &targetval){

    };
    void getResults( vector<double> &resultval) const{

    };


private:
    vector<Layer> m_layers;



};
Net::Net(vector<unsigned> &topology) {
    unsigned  numLayers =topology.size();
    for(unsigned layerNum = 0;layerNum<numLayers;layerNum++){

        m_layers.push_back(Layer());

        for(unsigned neuroNum =0;neuroNum<=topology[layerNum];neuroNum++){
            m_layers.back().push_back(Neuron());
            cout<<"Made a Neuron"<<endl;
        }

    }



}

using namespace std;

int main(){
    cout<<"Welcome to Neural Networks"<<endl;

    vector<double> inputvals;
    vector<double> targetvals;
    vector <double> resultvals;
    vector <unsigned> topology;
    topology.push_back(1);
    topology.push_back(2);
    topology.push_back(3);
    Net myNet(topology);

    myNet.feedForward(inputvals);
    myNet.backProp(targetvals);
    myNet.getResults(resultvals);
}


