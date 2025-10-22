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

#include <tencentcloud/cam/v20190116/model/IpPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

IpPolicy::IpPolicy() :
    m_iPHasBeenSet(false),
    m_effectHasBeenSet(false)
{
}

CoreInternalOutcome IpPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IP") && !value["IP"].IsNull())
    {
        if (!value["IP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpPolicy.IP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iP = string(value["IP"].GetString());
        m_iPHasBeenSet = true;
    }

    if (value.HasMember("Effect") && !value["Effect"].IsNull())
    {
        if (!value["Effect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IpPolicy.Effect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effect = string(value["Effect"].GetString());
        m_effectHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IpPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iP.c_str(), allocator).Move(), allocator);
    }

    if (m_effectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Effect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effect.c_str(), allocator).Move(), allocator);
    }

}


string IpPolicy::GetIP() const
{
    return m_iP;
}

void IpPolicy::SetIP(const string& _iP)
{
    m_iP = _iP;
    m_iPHasBeenSet = true;
}

bool IpPolicy::IPHasBeenSet() const
{
    return m_iPHasBeenSet;
}

string IpPolicy::GetEffect() const
{
    return m_effect;
}

void IpPolicy::SetEffect(const string& _effect)
{
    m_effect = _effect;
    m_effectHasBeenSet = true;
}

bool IpPolicy::EffectHasBeenSet() const
{
    return m_effectHasBeenSet;
}

