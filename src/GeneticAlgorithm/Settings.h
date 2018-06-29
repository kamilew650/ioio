//
// Created by Szymek on 14.12.2016.
//

#ifndef GENETICALGORITHM_SETTINGS_H
#define GENETICALGORITHM_SETTINGS_H

#include <string>
using namespace std;

struct Settings{
	//GA END CONDITIONS
	double timeCondition = 0;
	double accuracyCondition = 0;
	double maxNoOfEpochs = 40;

	//GA RUN SETTINGS
	int populationSize = 5;
	double individualSize=0.001;
	double mutationProbability = 0.1;
	double crossoverProbability=0.7;
	double randomPickProbability = 0.01;
	bool twoDescendants = true;

	//WEIGHTS FOR FITNESS SCORE
	double weightForAccuracy=1.0;
	double weightForSize=0.0;

	//METHODS TO USE
	string selectionMethod = "RouletteWheel";
	string crossoverMethod = "crossoverMethod";

	//SETTINGS FOR NEURAL NETWORK
	vector<int> topology = {3,6,3,1};
	double learningRate = 0.6;
	double accuracy = 0.01;
	double tolerance = 0.00001;
    vector<int> LayersToDropout = {};
    bool DropoutMethod = false;
    double DropoutProbability = 0;

	std::string fileForResults = "/Users/apple/ClionProjects/GeneticAlgorithm/NeuralNetwork/Outputs/test.txt";
};
#endif //GENETICALGORITHM_SETTINGS_H
