#include <stdlib.h>
#include <stdio.h>
#include "bytes.h"

#include "SmartMath.h"



// Activation function and its derivative
double sigmoid(double x){
	return 1 / (1 + exp(-x));
}
double dSigmoid(double x){
	return x * (1-x);
}

// Init all weights and biases between 0.0 and 1.0
double init_weight(){
	return ((double)rand())/((double)RAND_MAX);
}

static const int numInputs = 2;
static const int numHiddenNodes = 2;
static const int numOutputs = 1;

int init(){
	double hiddenLayer[numHiddenNodes];
	double outputLayer[numOutputs];
	
	double hiddenLayerBias[numHiddenNodes];
	double outputLayerBias[numOutputs];
	
	double hiddenWeights[numInputs][numHiddenNodes];
	double outputWeights[numHiddenNodes][numOutputs];
	
	return 0;
}




