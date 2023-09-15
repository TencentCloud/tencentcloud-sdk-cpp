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

#include <tencentcloud/cynosdb/v20190107/model/RuleTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RuleTemplateInfo::RuleTemplateInfo() :
    m_ruleTemplateIdHasBeenSet(false),
    m_ruleTemplateNameHasBeenSet(false),
    m_ruleFiltersHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_alarmPolicyHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome RuleTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleTemplateId") && !value["RuleTemplateId"].IsNull())
    {
        if (!value["RuleTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateInfo.RuleTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateId = string(value["RuleTemplateId"].GetString());
        m_ruleTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("RuleTemplateName") && !value["RuleTemplateName"].IsNull())
    {
        if (!value["RuleTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateInfo.RuleTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateName = string(value["RuleTemplateName"].GetString());
        m_ruleTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("RuleFilters") && !value["RuleFilters"].IsNull())
    {
        if (!value["RuleFilters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleTemplateInfo.RuleFilters` is not array type"));

        const rapidjson::Value &tmpValue = value["RuleFilters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleFilters item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ruleFilters.push_back(item);
        }
        m_ruleFiltersHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateInfo.AlarmLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetInt64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("AlarmPolicy") && !value["AlarmPolicy"].IsNull())
    {
        if (!value["AlarmPolicy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateInfo.AlarmPolicy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmPolicy = value["AlarmPolicy"].GetInt64();
        m_alarmPolicyHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleFilters.begin(); itr != m_ruleFilters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_alarmPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmPolicy, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string RuleTemplateInfo::GetRuleTemplateId() const
{
    return m_ruleTemplateId;
}

void RuleTemplateInfo::SetRuleTemplateId(const string& _ruleTemplateId)
{
    m_ruleTemplateId = _ruleTemplateId;
    m_ruleTemplateIdHasBeenSet = true;
}

bool RuleTemplateInfo::RuleTemplateIdHasBeenSet() const
{
    return m_ruleTemplateIdHasBeenSet;
}

string RuleTemplateInfo::GetRuleTemplateName() const
{
    return m_ruleTemplateName;
}

void RuleTemplateInfo::SetRuleTemplateName(const string& _ruleTemplateName)
{
    m_ruleTemplateName = _ruleTemplateName;
    m_ruleTemplateNameHasBeenSet = true;
}

bool RuleTemplateInfo::RuleTemplateNameHasBeenSet() const
{
    return m_ruleTemplateNameHasBeenSet;
}

vector<RuleFilters> RuleTemplateInfo::GetRuleFilters() const
{
    return m_ruleFilters;
}

void RuleTemplateInfo::SetRuleFilters(const vector<RuleFilters>& _ruleFilters)
{
    m_ruleFilters = _ruleFilters;
    m_ruleFiltersHasBeenSet = true;
}

bool RuleTemplateInfo::RuleFiltersHasBeenSet() const
{
    return m_ruleFiltersHasBeenSet;
}

int64_t RuleTemplateInfo::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void RuleTemplateInfo::SetAlarmLevel(const int64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool RuleTemplateInfo::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

int64_t RuleTemplateInfo::GetAlarmPolicy() const
{
    return m_alarmPolicy;
}

void RuleTemplateInfo::SetAlarmPolicy(const int64_t& _alarmPolicy)
{
    m_alarmPolicy = _alarmPolicy;
    m_alarmPolicyHasBeenSet = true;
}

bool RuleTemplateInfo::AlarmPolicyHasBeenSet() const
{
    return m_alarmPolicyHasBeenSet;
}

string RuleTemplateInfo::GetDescription() const
{
    return m_description;
}

void RuleTemplateInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool RuleTemplateInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

