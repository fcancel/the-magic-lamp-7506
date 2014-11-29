#ifndef HEADERS_NGRAM_H_
#define HEADERS_NGRAM_H_

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>
using namespace std;

class NGram {

private:
	string ngramAddress;

public:

	NGram(string ngramAddress);
	virtual ~NGram();

	/**
	 * will return the modified lineOfText with the missing word, ready to be put in the file
	 */
	void fillTheMissingWord(string *lineOfText);
	/*
	 * va a decir cual es la palabra que falta dado un contexto
	 */
	string findMissingWord(vector<string> vectorOfTheLine, int wordPosition);

	/*
	 * Nos dice en que posicion falta la palabra, ejemplo, si tengo I running, y la frase deberia ser
	 * I am running, devuelve 1, que es la posicion donde deberia haber una palabra
	 */
	unsigned int whereIsMissingTheWord(vector<string> vectorOfTheLine);
	/*
	 * Sabiendo donde uno tiene que insertar, puede saber cual es el ngrama y cual le sigue
	 */
	string whichWordToAdd(vector<string> vectorOfTheLine,unsigned int whereToAdd);
};

#endif /* HEADERS_NGRAM_H_ */