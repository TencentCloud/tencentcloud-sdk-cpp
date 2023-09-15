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

#include <tencentcloud/cynosdb/v20190107/model/LogRuleTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

LogRuleTemplateInfo::LogRuleTemplateInfo() :
    m_ruleTemplateIdHasBeenSet(false),
    m_ruleTemplateNameHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_ruleTemplateStatusHasBeenSet(false)
{
}

CoreInternalOutcome LogRuleTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleTemplateId") && !value["RuleTemplateId"].IsNull())
    {
        if (!value["RuleTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogRuleTemplateInfo.RuleTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateId = string(value["RuleTemplateId"].GetString());
        m_ruleTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("RuleTemplateName") && !value["RuleTemplateName"].IsNull())
    {
        if (!value["RuleTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogRuleTemplateInfo.RuleTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateName = string(value["RuleTemplateName"].GetString());
        m_ruleTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LogRuleTemplateInfo.AlarmLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = string(value["AlarmLevel"].GetString());
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("RuleTemplateStatus") && !value["RuleTemplateStatus"].IsNull())
    {
        if (!value["RuleTemplateStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LogRuleTemplateInfo.RuleTemplateStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTemplateStatus = value["RuleTemplateStatus"].GetInt64();
        m_ruleTemplateStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LogRuleTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTemplateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTemplateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleTemplateStatus, allocator);
    }

}


string LogRuleTemplateInfo::GetRuleTemplateId() const
{
    return m_ruleTemplateId;
}

void LogRuleTemplateInfo::SetRuleTemplateId(const string& _ruleTemplateId)
{
    m_ruleTemplateId = _ruleTemplateId;
    m_ruleTemplateIdHasBeenSet = true;
}

bool LogRuleTemplateInfo::RuleTemplateIdHasBeenSet() const
{
    return m_ruleTemplateIdHasBeenSet;
}

string LogRuleTemplateInfo::GetRuleTemplateName() const
{
    return m_ruleTemplateName;
}

void LogRuleTemplateInfo::SetRuleTemplateName(const string& _ruleTemplateName)
{
    m_ruleTemplateName = _ruleTemplateName;
    m_ruleTemplateNameHasBeenSet = true;
}

bool LogRuleTemplateInfo::RuleTemplateNameHasBeenSet() const
{
    return m_ruleTemplateNameHasBeenSet;
}

string LogRuleTemplateInfo::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void LogRuleTemplateInfo::SetAlarmLevel(const string& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool LogRuleTemplateInfo::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

int64_t LogRuleTemplateInfo::GetRuleTemplateStatus() const
{
    return m_ruleTemplateStatus;
}

void LogRuleTemplateInfo::SetRuleTemplateStatus(const int64_t& _ruleTemplateStatus)
{
    m_ruleTemplateStatus = _ruleTemplateStatus;
    m_ruleTemplateStatusHasBeenSet = true;
}

bool LogRuleTemplateInfo::RuleTemplateStatusHasBeenSet() const
{
    return m_ruleTemplateStatusHasBeenSet;
}

