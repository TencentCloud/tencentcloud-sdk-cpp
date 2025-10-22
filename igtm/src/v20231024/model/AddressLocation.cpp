/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/igtm/v20231024/model/AddressLocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

AddressLocation::AddressLocation() :
    m_addrHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

CoreInternalOutcome AddressLocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Addr") && !value["Addr"].IsNull())
    {
        if (!value["Addr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressLocation.Addr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addr = string(value["Addr"].GetString());
        m_addrHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddressLocation.Location` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_location = string(value["Location"].GetString());
        m_locationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AddressLocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_addrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addr.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_location.c_str(), allocator).Move(), allocator);
    }

}


string AddressLocation::GetAddr() const
{
    return m_addr;
}

void AddressLocation::SetAddr(const string& _addr)
{
    m_addr = _addr;
    m_addrHasBeenSet = true;
}

bool AddressLocation::AddrHasBeenSet() const
{
    return m_addrHasBeenSet;
}

string AddressLocation::GetLocation() const
{
    return m_location;
}

void AddressLocation::SetLocation(const string& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool AddressLocation::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

