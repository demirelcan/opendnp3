/**
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
#include "ChannelSet.h"

#include "DNP3Channel.h"

#include <asiopal/PhysicalLayerBase.h>

using namespace openpal;
using namespace asiopal;
using namespace opendnp3;

namespace asiodnp3
{

ChannelSet::~ChannelSet()
{
	this->Shutdown();
}

void ChannelSet::Shutdown()
{	
	std::vector<DNP3Channel*> channelscopy;

	for (auto pChannel : channels) channelscopy.push_back(pChannel);
	
	for (auto pChannel : channelscopy) pChannel->Shutdown();

	assert(channels.empty());
}

IChannel* ChannelSet::CreateChannel(
	openpal::LogRoot* pLogRoot,
	asiopal::ASIOExecutor& executor,
    openpal::TimeDuration minOpenRetry,
    openpal::TimeDuration maxOpenRetry,
	PhysicalLayerBase* apPhys,    
    IOpenDelayStrategy* pOpenStrategy)
{	
	auto pChannel = new DNP3Channel(pLogRoot, executor, minOpenRetry, maxOpenRetry, pOpenStrategy, apPhys);
	auto onShutdown = [this, pChannel]() { this->OnShutdown(pChannel); };
	pChannel->SetShutdownHandler(Runnable::Bind(onShutdown));
	channels.insert(pChannel);
	return pChannel;
}

void ChannelSet::OnShutdown(DNP3Channel* pChannel)
{		
	channels.erase(pChannel);	
	delete pChannel;
}



}

