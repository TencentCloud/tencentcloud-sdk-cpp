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

#include <tencentcloud/tse/v20201207/model/CanaryPriorityRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CanaryPriorityRule::CanaryPriorityRule() :
    m_priorityHasBeenSet(false),
    m_canaryRuleHasBeenSet(false)
{
}

CoreInternalOutcome CanaryPriorityRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Priority") && !value["Priority"].IsNull())
    {
        if (!value["Priority"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CanaryPriorityRule.Priority` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_priority = value["Priority"].GetInt64();
        m_priorityHasBeenSet = true;
    }

    if (value.HasMember("CanaryRule") && !value["CanaryRule"].IsNull())
    {
        if (!value["CanaryRule"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CanaryPriorityRule.CanaryRule` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_canaryRule.Deserialize(value["CanaryRule"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_canaryRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CanaryPriorityRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_priority, allocator);
    }

    if (m_canaryRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanaryRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_canaryRule.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t CanaryPriorityRule::GetPriority() const
{
    return m_priority;
}

void CanaryPriorityRule::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CanaryPriorityRule::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}

CloudNativeAPIGatewayCanaryRule CanaryPriorityRule::GetCanaryRule() const
{
    return m_canaryRule;
}

void CanaryPriorityRule::SetCanaryRule(const CloudNativeAPIGatewayCanaryRule& _canaryRule)
{
    m_canaryRule = _canaryRule;
    m_canaryRuleHasBeenSet = true;
}

bool CanaryPriorityRule::CanaryRuleHasBeenSet() const
{
    return m_canaryRuleHasBeenSet;
}

