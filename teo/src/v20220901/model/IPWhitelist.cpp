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

#include <tencentcloud/teo/v20220901/model/IPWhitelist.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

IPWhitelist::IPWhitelist() :
    m_iPv4HasBeenSet(false),
    m_iPv6HasBeenSet(false)
{
}

CoreInternalOutcome IPWhitelist::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IPv4") && !value["IPv4"].IsNull())
    {
        if (!value["IPv4"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPWhitelist.IPv4` is not array type"));

        const rapidjson::Value &tmpValue = value["IPv4"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPv4.push_back((*itr).GetString());
        }
        m_iPv4HasBeenSet = true;
    }

    if (value.HasMember("IPv6") && !value["IPv6"].IsNull())
    {
        if (!value["IPv6"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPWhitelist.IPv6` is not array type"));

        const rapidjson::Value &tmpValue = value["IPv6"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_iPv6.push_back((*itr).GetString());
        }
        m_iPv6HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPWhitelist::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iPv4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPv4.begin(); itr != m_iPv4.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_iPv6HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPv6";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_iPv6.begin(); itr != m_iPv6.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> IPWhitelist::GetIPv4() const
{
    return m_iPv4;
}

void IPWhitelist::SetIPv4(const vector<string>& _iPv4)
{
    m_iPv4 = _iPv4;
    m_iPv4HasBeenSet = true;
}

bool IPWhitelist::IPv4HasBeenSet() const
{
    return m_iPv4HasBeenSet;
}

vector<string> IPWhitelist::GetIPv6() const
{
    return m_iPv6;
}

void IPWhitelist::SetIPv6(const vector<string>& _iPv6)
{
    m_iPv6 = _iPv6;
    m_iPv6HasBeenSet = true;
}

bool IPWhitelist::IPv6HasBeenSet() const
{
    return m_iPv6HasBeenSet;
}

