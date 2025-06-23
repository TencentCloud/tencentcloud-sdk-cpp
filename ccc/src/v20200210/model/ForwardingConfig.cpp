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

#include <tencentcloud/ccc/v20200210/model/ForwardingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

ForwardingConfig::ForwardingConfig() :
    m_enabledHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

CoreInternalOutcome ForwardingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingConfig.Condition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_condition = value["Condition"].GetInt64();
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("Target") && !value["Target"].IsNull())
    {
        if (!value["Target"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ForwardingConfig.Target` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_target.Deserialize(value["Target"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ForwardingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_condition, allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_target.ToJsonObject(value[key.c_str()], allocator);
    }

}


bool ForwardingConfig::GetEnabled() const
{
    return m_enabled;
}

void ForwardingConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ForwardingConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t ForwardingConfig::GetCondition() const
{
    return m_condition;
}

void ForwardingConfig::SetCondition(const int64_t& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ForwardingConfig::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

ForwardingTarget ForwardingConfig::GetTarget() const
{
    return m_target;
}

void ForwardingConfig::SetTarget(const ForwardingTarget& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool ForwardingConfig::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

