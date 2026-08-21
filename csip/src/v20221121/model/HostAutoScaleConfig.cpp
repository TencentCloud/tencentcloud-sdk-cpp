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

#include <tencentcloud/csip/v20221121/model/HostAutoScaleConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

HostAutoScaleConfig::HostAutoScaleConfig() :
    m_switchHasBeenSet(false),
    m_protectTypeHasBeenSet(false)
{
}

CoreInternalOutcome HostAutoScaleConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostAutoScaleConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("ProtectType") && !value["ProtectType"].IsNull())
    {
        if (!value["ProtectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostAutoScaleConfig.ProtectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectType = string(value["ProtectType"].GetString());
        m_protectTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostAutoScaleConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_protectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectType.c_str(), allocator).Move(), allocator);
    }

}


string HostAutoScaleConfig::GetSwitch() const
{
    return m_switch;
}

void HostAutoScaleConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool HostAutoScaleConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

string HostAutoScaleConfig::GetProtectType() const
{
    return m_protectType;
}

void HostAutoScaleConfig::SetProtectType(const string& _protectType)
{
    m_protectType = _protectType;
    m_protectTypeHasBeenSet = true;
}

bool HostAutoScaleConfig::ProtectTypeHasBeenSet() const
{
    return m_protectTypeHasBeenSet;
}

