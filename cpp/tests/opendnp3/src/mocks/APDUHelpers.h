/*
 * Copyright 2013-2019 Automatak, LLC
 *
 * Licensed to Green Energy Corp (www.greenenergycorp.com) and Automatak
 * LLC (www.automatak.com) under one or more contributor license agreements.
 * See the NOTICE file distributed with this work for additional information
 * regarding copyright ownership. Green Energy Corp and Automatak LLC license
 * this file to you under the Apache License, Version 2.0 (the "License"); you
 * may not use this file except in compliance with the License. You may obtain
 * a copy of the License at:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __APDU_HELPERS_H_
#define __APDU_HELPERS_H_

#include <openpal/util/Uncopyable.h>

#include <opendnp3/app/APDURequest.h>
#include <opendnp3/app/APDUResponse.h>

#include <assert.h>

class APDUHelpers : private openpal::StaticOnly
{
private:
    static const uint32_t SIZE = 2048;
    static uint8_t fixedBuffer[2048];

public:
    static opendnp3::APDURequest Request(opendnp3::FunctionCode code, uint32_t size = SIZE);

    static opendnp3::APDUResponse Response(uint32_t size = SIZE);
};

#endif
