/*
* Author: Kiveisha Yevgeniy
* Copyright (c) 2016 Setopy.
*
* Permission is hereby granted, free of charge, to any person obtaining
* a copy of this software and associated documentation files (the
* "Software"), to deal in the Software without restriction, including
* without limitation the rights to use, copy, modify, merge, publish,
* distribute, sublicense, and/or sell copies of the Software, and to
* permit persons to whom the Software is furnished to do so, subject to
* the following conditions:
*
* The above copyright notice and this permission notice shall be
* included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
* LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
* OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
* WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "IAlgorithm.h"
#include "IStamp.h"

class MachineA : public IMachine {
public:
	MachineA (std::vector<IStamp *> plan) {
		this->plan = plan;
	}

	~MachineA () {  };

	void SetAlgo (IAlgorithm& algo) {
		this->algo = algo;
	}
};

class Spoon : public IStamp {
public:
	Spoon (int color) {
		this->Type 				= 1;
		this->ManufactureTime 	= 60;
		this->Color 			= color;
	}

	~Spoon () {  }

	int GetType () {
		return this->Type;
	}

	int GetManufactureTime () {
		return this->ManufactureTime;
	}
};