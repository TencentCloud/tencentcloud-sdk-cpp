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

#include <tencentcloud/alb/v20251030/model/RuleHealthStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

RuleHealthStatusInfo::RuleHealthStatusInfo() :
    m_isDefaultRuleHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_targetGroupHealthInfosHasBeenSet(false)
{
}

CoreInternalOutcome RuleHealthStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsDefaultRule") && !value["IsDefaultRule"].IsNull())
    {
        if (!value["IsDefaultRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleHealthStatusInfo.IsDefaultRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isDefaultRule = string(value["IsDefaultRule"].GetString());
        m_isDefaultRuleHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleHealthStatusInfo.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupHealthInfos") && !value["TargetGroupHealthInfos"].IsNull())
    {
        if (!value["TargetGroupHealthInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleHealthStatusInfo.TargetGroupHealthInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetGroupHealthInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetGroupHealthInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetGroupHealthInfos.push_back(item);
        }
        m_targetGroupHealthInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleHealthStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isDefaultRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefaultRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isDefaultRule.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetGroupHealthInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupHealthInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetGroupHealthInfos.begin(); itr != m_targetGroupHealthInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string RuleHealthStatusInfo::GetIsDefaultRule() const
{
    return m_isDefaultRule;
}

void RuleHealthStatusInfo::SetIsDefaultRule(const string& _isDefaultRule)
{
    m_isDefaultRule = _isDefaultRule;
    m_isDefaultRuleHasBeenSet = true;
}

bool RuleHealthStatusInfo::IsDefaultRuleHasBeenSet() const
{
    return m_isDefaultRuleHasBeenSet;
}

string RuleHealthStatusInfo::GetRuleId() const
{
    return m_ruleId;
}

void RuleHealthStatusInfo::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool RuleHealthStatusInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

vector<TargetGroupHealthInfo> RuleHealthStatusInfo::GetTargetGroupHealthInfos() const
{
    return m_targetGroupHealthInfos;
}

void RuleHealthStatusInfo::SetTargetGroupHealthInfos(const vector<TargetGroupHealthInfo>& _targetGroupHealthInfos)
{
    m_targetGroupHealthInfos = _targetGroupHealthInfos;
    m_targetGroupHealthInfosHasBeenSet = true;
}

bool RuleHealthStatusInfo::TargetGroupHealthInfosHasBeenSet() const
{
    return m_targetGroupHealthInfosHasBeenSet;
}

