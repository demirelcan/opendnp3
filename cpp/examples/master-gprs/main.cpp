/*
 * Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
 * more contributor license agreements. See the NOTICE file distributed
 * with this work for additional information regarding copyright ownership.
 * Green Energy Corp licenses this file to you under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except in
 * compliance with the License.  You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * This project was forked on 01/01/2013 by Automatak, LLC and modifications
 * may have been made to this file. Automatak, LLC licenses these modifications
 * to you under the terms of the License.
 */
#include <asiodnp3/GPRSManager.h>
#include <asiodnp3/ConsoleLogger.h>

#include <opendnp3/LogLevels.h>
#include <iostream>

using namespace std;
using namespace openpal;
using namespace asiodnp3;
using namespace opendnp3;

int main(int argc, char* argv[])
{
	// Specify what log levels to use. NORMAL is warning and above
	// You can add all the comms logging by uncommenting below
	const uint32_t FILTERS = levels::NORMAL | levels::ALL_APP_COMMS;

	// This is the main point of interaction with the stack
	GPRSManager manager(1, ConsoleLogger::Instance());	

	do
	{
		std::cout << "Enter a command" << std::endl;
		std::cout << "x - exits program" << std::endl;		

		char cmd;
		std::cin >> cmd;
		switch(cmd)
		{		
		case('x'):			
			return 0;		
		default:
			std::cout << "Unknown action: " << cmd << std::endl;
			break;
		}
	}
	while(true);

	return 0;
}

