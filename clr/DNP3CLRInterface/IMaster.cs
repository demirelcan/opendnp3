﻿
//
// Licensed to Green Energy Corp (www.greenenergycorp.com) under one or
// more contributor license agreements. See the NOTICE file distributed
// with this work for additional information regarding copyright ownership.
// Green Energy Corp licenses this file to you under the Apache License,
// Version 2.0 (the "License"); you may not use this file except in
// compliance with the License.  You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// This file was forked on 01/01/2013 by Automatak, LLC and modifications
// have been made to this file. Automatak, LLC licenses these modifications to
// you under the terms of the License.
//
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DNP3.Interface
{
    /// <summary>
    /// Interface representing a master station
    /// </summary>
    public interface IMaster: IStack
    {
        /// <summary>
        /// 
        /// </summary>
        /// <returns>Interface used to dispatch command requests</returns>
        ICommandProcessor GetCommandProcessor();
        
        /// <summary>
        /// Retrieve an interface representing the integrity scan
        /// </summary>
        /// <returns>IMasterScan interface representing the integrity scan</returns>
        IMasterScan GetIntegrityScan();

        /// <summary>
        /// Adds a class scan to the master
        /// </summary>
        /// <param name="aClassMask">bitfield of class values</param>
        /// <param name="period">period, negative for non-periodic</param>
        /// <param name="taskRetryPeriod">task retry rate on failure in milliseconds</param>
        /// <returns></returns>
        IMasterScan AddClassScan(int aClassMask, TimeSpan period, TimeSpan taskRetryPeriod);
    }
}
