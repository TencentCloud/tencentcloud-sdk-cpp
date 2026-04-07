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

#include <tencentcloud/tcss/v20201101/model/K8SAPIRuleTypeCountItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

K8SAPIRuleTypeCountItem::K8SAPIRuleTypeCountItem() :
    m_ruleTypeHasBeenSet(false),
    m_eventCountHasBeenSet(false)
{
}

CoreInternalOutcome K8SAPIRuleTypeCountItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `K8SAPIRuleTypeCountItem.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `K8SAPIRuleTypeCountItem.EventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetUint64();
        m_eventCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void K8SAPIRuleTypeCountItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

}


string K8SAPIRuleTypeCountItem::GetRuleType() const
{
    return m_ruleType;
}

void K8SAPIRuleTypeCountItem::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool K8SAPIRuleTypeCountItem::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

uint64_t K8SAPIRuleTypeCountItem::GetEventCount() const
{
    return m_eventCount;
}

void K8SAPIRuleTypeCountItem::SetEventCount(const uint64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool K8SAPIRuleTypeCountItem::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

