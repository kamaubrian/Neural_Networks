//
// Created by brian-kamau on 6/18/17.
//
#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>


typedef vector<Neuron> Layer;

using namespace std;
struct Connection{
    double weight;
    double deltaweight;


};
class Neuron{
public:
    Neuron(unsigned numoutput, unsigned my_index);
    void feedForward(Layer &previousval);
    void setOutputVal(double val){ m_outputVal=val;}
    double getOutputVal(void)const{ return m_outputVal;}
    void calculateOutput(double targetVal);
    void calculateHidden(const Layer &layer);
    void updateInputWeights(Layer &prevLayer);
private:
    static double transferFunction(double x);
    static double transferFunctionDerivative(double x);
    double sunDow(const Layer &nextLayer)const;
    static double randomWeight(void){ return rand()/double (RAND_MAX);}
    double m_outputVal;
    vector<Connection> m_outputweights;
    unsigned _index;
    double m_gradient,delta;



};
Neuron::Neuron(unsigned numoutput,unsigned my_index) {
    for(unsigned c=0;c<numoutput;c++){
        m_outputweights.push_back(Connection());
        m_outputweights.back().weight=randomWeight();

    }
    _index=my_index;

}
void Neuron::feedForward(Layer &previousval) {
    double sum=0.0;

    for(unsigned n=0;n<previousval.size();n++){
        sum+=previousval[n].getOutputVal()*previousval[n].m_outputweights[_index].weight;
    }
    m_outputVal= Neuron::transferFunction(sum);
}
double Neuron::transferFunction(double x) {
    return tanh(x);
}
double Neuron::transferFunctionDerivative(double x) {

    1-x*x;
}
void Neuron::calculateOutput(double targetVal) {

    double delta = targetVal-m_outputVal;
    m_gradient = delta*Neuron::transferFunctionDerivative(m_outputVal);
}
void Neuron::calculateHidden(const Layer &layer) {

    double dow = sunDow(layer);
    m_gradient = delta*Neuron::transferFunctionDerivative(m_outputVal);
}
double Neuron::sunDow(const Layer &nextLayer) const {
    double sum=0.0;
    for(unsigned n=0;n<nextLayer.size()-1;n++){
        sum+=m_outputweights[n].weight*nextLayer[n].m_gradient;
    }

    return sum;
}
void Neuron::updateInputWeights(Layer &prevLayer) {

}

class Net{
public:

    Net(vector <unsigned> &topology);
    void feedForward(const vector<double> &inputval);
    void backProp(const vector<double> &targetval);
    void getResults( vector<double> &resultval) const{

    };


private:
    vector<Layer> m_layers;
    double m_error;
    double m_recentaverage;
    double m_smoothingfactor;


};

void Net::feedForward(const vector<double> &inputval){
    assert(inputval.size()==m_layers[0].size()-1);

    for (unsigned i=0;i<inputval.size();i++){
        m_layers[0][i].setOutputVal(inputval[i]);
    }
    for(unsigned layerNum =1;layerNum<m_layers.size();layerNum++){
        Layer &prevLayer=m_layers[layerNum-1];
        for(unsigned n=0;m_layers[layerNum].size()-1;n++){
            m_layers[layerNum][n].feedForward(prevLayer);
        }
    }
}
void Net::backProp(const vector<double> &targetval) {
    Layer &outputLayer=m_layers.back();
    m_error=0.0;
    for(unsigned n =0;n<outputLayer.size()-1;n++){
        double delta = targetval[n]-outputLayer[n].getOutputVal();
        m_error+=delta*delta;
    }
    m_error/=outputLayer.size()-1;
    m_error=sqrt(m_error);

    m_recentaverage=(m_recentaverage*m_smoothingfactor+m_error)/(m_smoothingfactor+1.0);


    for(unsigned n=0;n<outputLayer.size()-1;n++){
        outputLayer[n].calculateOutput(targetval[n]);
    }
    for(unsigned layerNum=m_layers.size()-2;layerNum>0;layerNum--){
        Layer &hiddenLayer =m_layers[layerNum];
        Layer &nextLayer = m_layers[layerNum+1];

        for(unsigned n=0;n<hiddenLayer.size();n++){
            hiddenLayer[n].calculateHidden(nextLayer);
        }
    }
    for(unsigned layerNum=m_layers.size()-1;layerNum>0;layerNum--){
        Layer &layer = m_layers[layerNum];
        Layer &prevLayer = m_layers[layerNum-1];
        for(unsigned n=0;n<layer.size()-1;n++){
            layer[n].updateWeights(prevLayer);
        }
    }


}

Net::Net(vector<unsigned> &topology) {
    unsigned  numLayers =topology.size();
    for(unsigned layerNum = 0;layerNum<numLayers;layerNum++){

        m_layers.push_back(Layer());
        unsigned numofOutputs = layerNum == topology.size() -1?0:topology[layerNum+1];

        for(unsigned neuroNum =0;neuroNum<=topology[layerNum];neuroNum++){
            m_layers.back().push_back(Neuron(numofOutputs,neuroNum));
            cout<<"\tMade a Neuron"<<endl;
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


