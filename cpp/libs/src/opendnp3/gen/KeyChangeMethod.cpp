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

#include "opendnp3/gen/KeyChangeMethod.h"

namespace opendnp3 {

uint8_t KeyChangeMethodToType(KeyChangeMethod arg)
{
  return static_cast<uint8_t>(arg);
}
KeyChangeMethod KeyChangeMethodFromType(uint8_t arg)
{
  switch(arg)
  {
    case(0x3):
      return KeyChangeMethod::AES_128_SHA1_HMAC;
    case(0x4):
      return KeyChangeMethod::AES_256_SHA256_HMAC;
    case(0x5):
      return KeyChangeMethod::AES_256_AES_GMAC;
    case(0x43):
      return KeyChangeMethod::RSA_1024_DSA_SHA1_HMAC_SHA1;
    case(0x44):
      return KeyChangeMethod::RSA_2048_DSA_SHA256_HMAC_SHA256;
    case(0x45):
      return KeyChangeMethod::RSA_3072_DSA_SHA256_HMAC_SHA256;
    case(0x46):
      return KeyChangeMethod::RSA_2048_DSA_SHA256_AES_GMAC;
    case(0x47):
      return KeyChangeMethod::RSA_3072_DSA_SHA256_AES_GMAC;
    default:
      return KeyChangeMethod::UNDEFINED;
  }
}
char const* KeyChangeMethodToString(KeyChangeMethod arg)
{
  switch(arg)
  {
    case(KeyChangeMethod::AES_128_SHA1_HMAC):
      return "AES_128_SHA1_HMAC";
    case(KeyChangeMethod::AES_256_SHA256_HMAC):
      return "AES_256_SHA256_HMAC";
    case(KeyChangeMethod::AES_256_AES_GMAC):
      return "AES_256_AES_GMAC";
    case(KeyChangeMethod::RSA_1024_DSA_SHA1_HMAC_SHA1):
      return "RSA_1024_DSA_SHA1_HMAC_SHA1";
    case(KeyChangeMethod::RSA_2048_DSA_SHA256_HMAC_SHA256):
      return "RSA_2048_DSA_SHA256_HMAC_SHA256";
    case(KeyChangeMethod::RSA_3072_DSA_SHA256_HMAC_SHA256):
      return "RSA_3072_DSA_SHA256_HMAC_SHA256";
    case(KeyChangeMethod::RSA_2048_DSA_SHA256_AES_GMAC):
      return "RSA_2048_DSA_SHA256_AES_GMAC";
    case(KeyChangeMethod::RSA_3072_DSA_SHA256_AES_GMAC):
      return "RSA_3072_DSA_SHA256_AES_GMAC";
    default:
      return "UNDEFINED";
  }
}

}
