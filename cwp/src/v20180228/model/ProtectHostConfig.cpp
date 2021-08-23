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

#include <tencentcloud/cwp/v20180228/model/ProtectHostConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ProtectHostConfig::ProtectHostConfig() :
    m_quuidHasBeenSet(false),
    m_protectSwitchHasBeenSet(false),
    m_autoRecoveryHasBeenSet(false)
{
}

CoreInternalOutcome ProtectHostConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectHostConfig.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("ProtectSwitch") && !value["ProtectSwitch"].IsNull())
    {
        if (!value["ProtectSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectHostConfig.ProtectSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_protectSwitch = value["ProtectSwitch"].GetUint64();
        m_protectSwitchHasBeenSet = true;
    }

    if (value.HasMember("AutoRecovery") && !value["AutoRecovery"].IsNull())
    {
        if (!value["AutoRecovery"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectHostConfig.AutoRecovery` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRecovery = value["AutoRecovery"].GetUint64();
        m_autoRecoveryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectHostConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_protectSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectSwitch, allocator);
    }

    if (m_autoRecoveryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRecovery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRecovery, allocator);
    }

}


string ProtectHostConfig::GetQuuid() const
{
    return m_quuid;
}

void ProtectHostConfig::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool ProtectHostConfig::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

uint64_t ProtectHostConfig::GetProtectSwitch() const
{
    return m_protectSwitch;
}

void ProtectHostConfig::SetProtectSwitch(const uint64_t& _protectSwitch)
{
    m_protectSwitch = _protectSwitch;
    m_protectSwitchHasBeenSet = true;
}

bool ProtectHostConfig::ProtectSwitchHasBeenSet() const
{
    return m_protectSwitchHasBeenSet;
}

uint64_t ProtectHostConfig::GetAutoRecovery() const
{
    return m_autoRecovery;
}

void ProtectHostConfig::SetAutoRecovery(const uint64_t& _autoRecovery)
{
    m_autoRecovery = _autoRecovery;
    m_autoRecoveryHasBeenSet = true;
}

bool ProtectHostConfig::AutoRecoveryHasBeenSet() const
{
    return m_autoRecoveryHasBeenSet;
}

