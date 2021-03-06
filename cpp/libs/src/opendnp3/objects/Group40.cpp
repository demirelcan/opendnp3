//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2013-2019 Automatak, LLC
// 
// Licensed to Green Energy Corp (www.greenenergycorp.com) and Automatak
// LLC (www.automatak.com) under one or more contributor license agreements.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership. Green Energy Corp and Automatak LLC license
// this file to you under the Apache License, Version 2.0 (the "License"); you
// may not use this file except in compliance with the License. You may obtain
// a copy of the License at:
// 
//   http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "Group40.h"

#include <openpal/serialization/Format.h>
#include <openpal/serialization/Parse.h>
#include "opendnp3/app/MeasurementFactory.h"
#include "opendnp3/app/WriteConversions.h"

using namespace openpal;

namespace opendnp3 {

// ------- Group40Var1 -------

Group40Var1::Group40Var1() : flags(0), value(0)
{}

bool Group40Var1::Read(RSlice& buffer, Group40Var1& output)
{
  return Parse::Many(buffer, output.flags, output.value);
}

bool Group40Var1::Write(const Group40Var1& arg, openpal::WSlice& buffer)
{
  return Format::Many(buffer, arg.flags, arg.value);
}

bool Group40Var1::ReadTarget(RSlice& buff, AnalogOutputStatus& output)
{
  Group40Var1 value;
  if(Read(buff, value))
  {
    output = AnalogOutputStatusFactory::From(value.flags, value.value);
    return true;
  }
  else
  {
    return false;
  }
}

bool Group40Var1::WriteTarget(const AnalogOutputStatus& value, openpal::WSlice& buff)
{
  return Group40Var1::Write(ConvertGroup40Var1::Apply(value), buff);
}

// ------- Group40Var2 -------

Group40Var2::Group40Var2() : flags(0), value(0)
{}

bool Group40Var2::Read(RSlice& buffer, Group40Var2& output)
{
  return Parse::Many(buffer, output.flags, output.value);
}

bool Group40Var2::Write(const Group40Var2& arg, openpal::WSlice& buffer)
{
  return Format::Many(buffer, arg.flags, arg.value);
}

bool Group40Var2::ReadTarget(RSlice& buff, AnalogOutputStatus& output)
{
  Group40Var2 value;
  if(Read(buff, value))
  {
    output = AnalogOutputStatusFactory::From(value.flags, value.value);
    return true;
  }
  else
  {
    return false;
  }
}

bool Group40Var2::WriteTarget(const AnalogOutputStatus& value, openpal::WSlice& buff)
{
  return Group40Var2::Write(ConvertGroup40Var2::Apply(value), buff);
}

// ------- Group40Var3 -------

Group40Var3::Group40Var3() : flags(0), value(0.0)
{}

bool Group40Var3::Read(RSlice& buffer, Group40Var3& output)
{
  return Parse::Many(buffer, output.flags, output.value);
}

bool Group40Var3::Write(const Group40Var3& arg, openpal::WSlice& buffer)
{
  return Format::Many(buffer, arg.flags, arg.value);
}

bool Group40Var3::ReadTarget(RSlice& buff, AnalogOutputStatus& output)
{
  Group40Var3 value;
  if(Read(buff, value))
  {
    output = AnalogOutputStatusFactory::From(value.flags, value.value);
    return true;
  }
  else
  {
    return false;
  }
}

bool Group40Var3::WriteTarget(const AnalogOutputStatus& value, openpal::WSlice& buff)
{
  return Group40Var3::Write(ConvertGroup40Var3::Apply(value), buff);
}

// ------- Group40Var4 -------

Group40Var4::Group40Var4() : flags(0), value(0.0)
{}

bool Group40Var4::Read(RSlice& buffer, Group40Var4& output)
{
  return Parse::Many(buffer, output.flags, output.value);
}

bool Group40Var4::Write(const Group40Var4& arg, openpal::WSlice& buffer)
{
  return Format::Many(buffer, arg.flags, arg.value);
}

bool Group40Var4::ReadTarget(RSlice& buff, AnalogOutputStatus& output)
{
  Group40Var4 value;
  if(Read(buff, value))
  {
    output = AnalogOutputStatusFactory::From(value.flags, value.value);
    return true;
  }
  else
  {
    return false;
  }
}

bool Group40Var4::WriteTarget(const AnalogOutputStatus& value, openpal::WSlice& buff)
{
  return Group40Var4::Write(ConvertGroup40Var4::Apply(value), buff);
}


}
