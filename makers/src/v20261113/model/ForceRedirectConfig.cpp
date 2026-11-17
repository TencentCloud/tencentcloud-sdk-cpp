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

#include <tencentcloud/makers/v20261113/model/ForceRedirectConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

ForceRedirectConfig::ForceRedirectConfig() :
    m_switchHasBeenSet(false),
    m_redirectStatusCodeHasBeenSet(false)
{
}

CoreInternalOutcome ForceRedirectConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ForceRedirectConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("RedirectStatusCode") && !value["RedirectStatusCode"].IsNull())
    {
        if (!value["RedirectStatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ForceRedirectConfig.RedirectStatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_redirectStatusCode = value["RedirectStatusCode"].GetInt64();
        m_redirectStatusCodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForceRedirectConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_redirectStatusCode, allocator);
    }

}


string ForceRedirectConfig::GetSwitch() const
{
    return m_switch;
}

void ForceRedirectConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool ForceRedirectConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

int64_t ForceRedirectConfig::GetRedirectStatusCode() const
{
    return m_redirectStatusCode;
}

void ForceRedirectConfig::SetRedirectStatusCode(const int64_t& _redirectStatusCode)
{
    m_redirectStatusCode = _redirectStatusCode;
    m_redirectStatusCodeHasBeenSet = true;
}

bool ForceRedirectConfig::RedirectStatusCodeHasBeenSet() const
{
    return m_redirectStatusCodeHasBeenSet;
}

