#ifndef AIP_NEURAL_NETWORK_H
#define AIP_NEURAL_NETWORK_H

#include <cstddef>

template<std::size_t Inputs, std::size_t HiddenLayers, std::size_t Outputs>
class NeuralNetwork
{
    private:
        static_assert(Inputs > 0, "Inputs cannot be lower than 1");
        static_assert(HiddenLayers > 0, "Hidden Layers cannot be lower than 1");
        static_assert(Outputs > 0, "Outputs cannot be lower than 1");


    //std::array<Neuron, HiddenLayers> HiddenLayer;
    //std::array<Neuron, Outputs> Output;
    public:

    //float predict();
    
}; // class NeuralNetworkNeuralNetwork.h

#endif // AIP_NEURAL_NETWORK_H