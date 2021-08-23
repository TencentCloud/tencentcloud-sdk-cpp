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

#include <tencentcloud/cdn/v20180606/model/Hsts.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

Hsts::Hsts() :
    m_switchHasBeenSet(false),
    m_maxAgeHasBeenSet(false),
    m_includeSubDomainsHasBeenSet(false)
{
}

CoreInternalOutcome Hsts::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hsts.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("MaxAge") && !value["MaxAge"].IsNull())
    {
        if (!value["MaxAge"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Hsts.MaxAge` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAge = value["MaxAge"].GetInt64();
        m_maxAgeHasBeenSet = true;
    }

    if (value.HasMember("IncludeSubDomains") && !value["IncludeSubDomains"].IsNull())
    {
        if (!value["IncludeSubDomains"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hsts.IncludeSubDomains` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_includeSubDomains = string(value["IncludeSubDomains"].GetString());
        m_includeSubDomainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Hsts::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_maxAgeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAge, allocator);
    }

    if (m_includeSubDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeSubDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_includeSubDomains.c_str(), allocator).Move(), allocator);
    }

}


string Hsts::GetSwitch() const
{
    return m_switch;
}

void Hsts::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool Hsts::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t Hsts::GetMaxAge() const
{
    return m_maxAge;
}

void Hsts::SetMaxAge(const int64_t& _maxAge)
{
    m_maxAge = _maxAge;
    m_maxAgeHasBeenSet = true;
}

bool Hsts::MaxAgeHasBeenSet() const
{
    return m_maxAgeHasBeenSet;
}

string Hsts::GetIncludeSubDomains() const
{
    return m_includeSubDomains;
}

void Hsts::SetIncludeSubDomains(const string& _includeSubDomains)
{
    m_includeSubDomains = _includeSubDomains;
    m_includeSubDomainsHasBeenSet = true;
}

bool Hsts::IncludeSubDomainsHasBeenSet() const
{
    return m_includeSubDomainsHasBeenSet;
}

