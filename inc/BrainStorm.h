#include <stdlib.h>
#include <stdio.h>

#include <math.h>


static const int numInputs = 2;
static const int numHiddenNodes = 2;
static const int numOutputs = 1;


/// Activation functions
double sigmoid(double x){
	return 1 / (1 + exp(-x));
}


double dSigmoid(double x){
	return x * (1-x);
}



double ReLU(double x){
	return fmax(0.0, x);
}



/// From https://paperswithcode.com/method/silu
double SiLU(double x){
	return (x*sigmoid(x));
}




// Init all weights and biases between 0.0 and 1.0
double init_weight(){
	return ((double)rand())/((double)RAND_MAX);
}

int init(){
	double hiddenLayer[numHiddenNodes];
	double outputLayer[numOutputs];
	
	double hiddenLayerBias[numHiddenNodes];
	double outputLayerBias[numOutputs];
	
	double hiddenWeights[numInputs][numHiddenNodes];
	double outputWeights[numHiddenNodes][numOutputs];
	
	return 0;
}




