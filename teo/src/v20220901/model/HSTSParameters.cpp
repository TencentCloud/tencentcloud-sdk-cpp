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

#include <tencentcloud/teo/v20220901/model/HSTSParameters.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

HSTSParameters::HSTSParameters() :
    m_switchHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_includeSubDomainsHasBeenSet(false),
    m_preloadHasBeenSet(false)
{
}

CoreInternalOutcome HSTSParameters::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HSTSParameters.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HSTSParameters.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("IncludeSubDomains") && !value["IncludeSubDomains"].IsNull())
    {
        if (!value["IncludeSubDomains"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HSTSParameters.IncludeSubDomains` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_includeSubDomains = string(value["IncludeSubDomains"].GetString());
        m_includeSubDomainsHasBeenSet = true;
    }

    if (value.HasMember("Preload") && !value["Preload"].IsNull())
    {
        if (!value["Preload"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HSTSParameters.Preload` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_preload = string(value["Preload"].GetString());
        m_preloadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HSTSParameters::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_includeSubDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IncludeSubDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_includeSubDomains.c_str(), allocator).Move(), allocator);
    }

    if (m_preloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Preload";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_preload.c_str(), allocator).Move(), allocator);
    }

}


string HSTSParameters::GetSwitch() const
{
    return m_switch;
}

void HSTSParameters::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool HSTSParameters::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t HSTSParameters::GetTimeout() const
{
    return m_timeout;
}

void HSTSParameters::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool HSTSParameters::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string HSTSParameters::GetIncludeSubDomains() const
{
    return m_includeSubDomains;
}

void HSTSParameters::SetIncludeSubDomains(const string& _includeSubDomains)
{
    m_includeSubDomains = _includeSubDomains;
    m_includeSubDomainsHasBeenSet = true;
}

bool HSTSParameters::IncludeSubDomainsHasBeenSet() const
{
    return m_includeSubDomainsHasBeenSet;
}

string HSTSParameters::GetPreload() const
{
    return m_preload;
}

void HSTSParameters::SetPreload(const string& _preload)
{
    m_preload = _preload;
    m_preloadHasBeenSet = true;
}

bool HSTSParameters::PreloadHasBeenSet() const
{
    return m_preloadHasBeenSet;
}

