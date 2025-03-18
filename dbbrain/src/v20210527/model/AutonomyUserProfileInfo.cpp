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

#include <tencentcloud/dbbrain/v20210527/model/AutonomyUserProfileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

AutonomyUserProfileInfo::AutonomyUserProfileInfo() :
    m_enabledHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_memoryUpperLimitHasBeenSet(false),
    m_thresholdRuleHasBeenSet(false),
    m_enabledItemsHasBeenSet(false)
{
}

CoreInternalOutcome AutonomyUserProfileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyUserProfileInfo.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyUserProfileInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("MemoryUpperLimit") && !value["MemoryUpperLimit"].IsNull())
    {
        if (!value["MemoryUpperLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyUserProfileInfo.MemoryUpperLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memoryUpperLimit = value["MemoryUpperLimit"].GetInt64();
        m_memoryUpperLimitHasBeenSet = true;
    }

    if (value.HasMember("ThresholdRule") && !value["ThresholdRule"].IsNull())
    {
        if (!value["ThresholdRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AutonomyUserProfileInfo.ThresholdRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_thresholdRule.Deserialize(value["ThresholdRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_thresholdRuleHasBeenSet = true;
    }

    if (value.HasMember("EnabledItems") && !value["EnabledItems"].IsNull())
    {
        if (!value["EnabledItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutonomyUserProfileInfo.EnabledItems` is not array type"));

        const rapidjson::Value &tmpValue = value["EnabledItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_enabledItems.push_back((*itr).GetString());
        }
        m_enabledItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutonomyUserProfileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_memoryUpperLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemoryUpperLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memoryUpperLimit, allocator);
    }

    if (m_thresholdRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThresholdRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_thresholdRule.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_enabledItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnabledItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enabledItems.begin(); itr != m_enabledItems.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


bool AutonomyUserProfileInfo::GetEnabled() const
{
    return m_enabled;
}

void AutonomyUserProfileInfo::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool AutonomyUserProfileInfo::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

string AutonomyUserProfileInfo::GetUin() const
{
    return m_uin;
}

void AutonomyUserProfileInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AutonomyUserProfileInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t AutonomyUserProfileInfo::GetMemoryUpperLimit() const
{
    return m_memoryUpperLimit;
}

void AutonomyUserProfileInfo::SetMemoryUpperLimit(const int64_t& _memoryUpperLimit)
{
    m_memoryUpperLimit = _memoryUpperLimit;
    m_memoryUpperLimitHasBeenSet = true;
}

bool AutonomyUserProfileInfo::MemoryUpperLimitHasBeenSet() const
{
    return m_memoryUpperLimitHasBeenSet;
}

MetricThreshold AutonomyUserProfileInfo::GetThresholdRule() const
{
    return m_thresholdRule;
}

void AutonomyUserProfileInfo::SetThresholdRule(const MetricThreshold& _thresholdRule)
{
    m_thresholdRule = _thresholdRule;
    m_thresholdRuleHasBeenSet = true;
}

bool AutonomyUserProfileInfo::ThresholdRuleHasBeenSet() const
{
    return m_thresholdRuleHasBeenSet;
}

vector<string> AutonomyUserProfileInfo::GetEnabledItems() const
{
    return m_enabledItems;
}

void AutonomyUserProfileInfo::SetEnabledItems(const vector<string>& _enabledItems)
{
    m_enabledItems = _enabledItems;
    m_enabledItemsHasBeenSet = true;
}

bool AutonomyUserProfileInfo::EnabledItemsHasBeenSet() const
{
    return m_enabledItemsHasBeenSet;
}

