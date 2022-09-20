/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/teo/v20220901/model/VanityNameServersIps.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

VanityNameServersIps::VanityNameServersIps() :
    m_nameHasBeenSet(false),
    m_iPv4HasBeenSet(false)
{
}

CoreInternalOutcome VanityNameServersIps::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VanityNameServersIps.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IPv4") && !value["IPv4"].IsNull())
    {
        if (!value["IPv4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VanityNameServersIps.IPv4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iPv4 = string(value["IPv4"].GetString());
        m_iPv4HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VanityNameServersIps::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_iPv4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iPv4.c_str(), allocator).Move(), allocator);
    }

}


string VanityNameServersIps::GetName() const
{
    return m_name;
}

void VanityNameServersIps::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VanityNameServersIps::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VanityNameServersIps::GetIPv4() const
{
    return m_iPv4;
}

void VanityNameServersIps::SetIPv4(const string& _iPv4)
{
    m_iPv4 = _iPv4;
    m_iPv4HasBeenSet = true;
}

bool VanityNameServersIps::IPv4HasBeenSet() const
{
    return m_iPv4HasBeenSet;
}

