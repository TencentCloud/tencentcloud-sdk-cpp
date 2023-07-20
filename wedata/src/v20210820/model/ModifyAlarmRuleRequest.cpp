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

#include <tencentcloud/wedata/v20210820/model/ModifyAlarmRuleRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ModifyAlarmRuleRequest::ModifyAlarmRuleRequest() :
    m_alarmIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_monitorObjectIdsHasBeenSet(false),
    m_alarmTypesHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_alarmWaysHasBeenSet(false),
    m_alarmRecipientTypeHasBeenSet(false),
    m_alarmRecipientsHasBeenSet(false),
    m_alarmRecipientIdsHasBeenSet(false),
    m_extInfoHasBeenSet(false)
{
}

CoreInternalOutcome ModifyAlarmRuleRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AlarmId") && !value["AlarmId"].IsNull())
    {
        if (!value["AlarmId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.AlarmId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alarmId = string(value["AlarmId"].GetString());
        m_alarmIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("MonitorType") && !value["MonitorType"].IsNull())
    {
        if (!value["MonitorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.MonitorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = value["MonitorType"].GetInt64();
        m_monitorTypeHasBeenSet = true;
    }

    if (value.HasMember("MonitorObjectIds") && !value["MonitorObjectIds"].IsNull())
    {
        if (!value["MonitorObjectIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.MonitorObjectIds` is not array type"));

        const rapidjson::Value &tmpValue = value["MonitorObjectIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_monitorObjectIds.push_back((*itr).GetString());
        }
        m_monitorObjectIdsHasBeenSet = true;
    }

    if (value.HasMember("AlarmTypes") && !value["AlarmTypes"].IsNull())
    {
        if (!value["AlarmTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.AlarmTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmTypes.push_back((*itr).GetString());
        }
        m_alarmTypesHasBeenSet = true;
    }

    if (value.HasMember("AlarmLevel") && !value["AlarmLevel"].IsNull())
    {
        if (!value["AlarmLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.AlarmLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmLevel = value["AlarmLevel"].GetInt64();
        m_alarmLevelHasBeenSet = true;
    }

    if (value.HasMember("AlarmWays") && !value["AlarmWays"].IsNull())
    {
        if (!value["AlarmWays"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.AlarmWays` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmWays"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmWays.push_back((*itr).GetString());
        }
        m_alarmWaysHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientType") && !value["AlarmRecipientType"].IsNull())
    {
        if (!value["AlarmRecipientType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.AlarmRecipientType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmRecipientType = value["AlarmRecipientType"].GetInt64();
        m_alarmRecipientTypeHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipients") && !value["AlarmRecipients"].IsNull())
    {
        if (!value["AlarmRecipients"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.AlarmRecipients` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmRecipients"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmRecipients.push_back((*itr).GetString());
        }
        m_alarmRecipientsHasBeenSet = true;
    }

    if (value.HasMember("AlarmRecipientIds") && !value["AlarmRecipientIds"].IsNull())
    {
        if (!value["AlarmRecipientIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.AlarmRecipientIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmRecipientIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmRecipientIds.push_back((*itr).GetString());
        }
        m_alarmRecipientIdsHasBeenSet = true;
    }

    if (value.HasMember("ExtInfo") && !value["ExtInfo"].IsNull())
    {
        if (!value["ExtInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModifyAlarmRuleRequest.ExtInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extInfo = string(value["ExtInfo"].GetString());
        m_extInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModifyAlarmRuleRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorType, allocator);
    }

    if (m_monitorObjectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_monitorObjectIds.begin(); itr != m_monitorObjectIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmTypes.begin(); itr != m_alarmTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_alarmWaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmWays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmWays.begin(); itr != m_alarmWays.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmRecipientTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmRecipientType, allocator);
    }

    if (m_alarmRecipientsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipients";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmRecipients.begin(); itr != m_alarmRecipients.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmRecipientIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmRecipientIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmRecipientIds.begin(); itr != m_alarmRecipientIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

}


string ModifyAlarmRuleRequest::GetAlarmId() const
{
    return m_alarmId;
}

void ModifyAlarmRuleRequest::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string ModifyAlarmRuleRequest::GetRuleName() const
{
    return m_ruleName;
}

void ModifyAlarmRuleRequest::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t ModifyAlarmRuleRequest::GetMonitorType() const
{
    return m_monitorType;
}

void ModifyAlarmRuleRequest::SetMonitorType(const int64_t& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

vector<string> ModifyAlarmRuleRequest::GetMonitorObjectIds() const
{
    return m_monitorObjectIds;
}

void ModifyAlarmRuleRequest::SetMonitorObjectIds(const vector<string>& _monitorObjectIds)
{
    m_monitorObjectIds = _monitorObjectIds;
    m_monitorObjectIdsHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::MonitorObjectIdsHasBeenSet() const
{
    return m_monitorObjectIdsHasBeenSet;
}

vector<string> ModifyAlarmRuleRequest::GetAlarmTypes() const
{
    return m_alarmTypes;
}

void ModifyAlarmRuleRequest::SetAlarmTypes(const vector<string>& _alarmTypes)
{
    m_alarmTypes = _alarmTypes;
    m_alarmTypesHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::AlarmTypesHasBeenSet() const
{
    return m_alarmTypesHasBeenSet;
}

int64_t ModifyAlarmRuleRequest::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void ModifyAlarmRuleRequest::SetAlarmLevel(const int64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

vector<string> ModifyAlarmRuleRequest::GetAlarmWays() const
{
    return m_alarmWays;
}

void ModifyAlarmRuleRequest::SetAlarmWays(const vector<string>& _alarmWays)
{
    m_alarmWays = _alarmWays;
    m_alarmWaysHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::AlarmWaysHasBeenSet() const
{
    return m_alarmWaysHasBeenSet;
}

int64_t ModifyAlarmRuleRequest::GetAlarmRecipientType() const
{
    return m_alarmRecipientType;
}

void ModifyAlarmRuleRequest::SetAlarmRecipientType(const int64_t& _alarmRecipientType)
{
    m_alarmRecipientType = _alarmRecipientType;
    m_alarmRecipientTypeHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::AlarmRecipientTypeHasBeenSet() const
{
    return m_alarmRecipientTypeHasBeenSet;
}

vector<string> ModifyAlarmRuleRequest::GetAlarmRecipients() const
{
    return m_alarmRecipients;
}

void ModifyAlarmRuleRequest::SetAlarmRecipients(const vector<string>& _alarmRecipients)
{
    m_alarmRecipients = _alarmRecipients;
    m_alarmRecipientsHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::AlarmRecipientsHasBeenSet() const
{
    return m_alarmRecipientsHasBeenSet;
}

vector<string> ModifyAlarmRuleRequest::GetAlarmRecipientIds() const
{
    return m_alarmRecipientIds;
}

void ModifyAlarmRuleRequest::SetAlarmRecipientIds(const vector<string>& _alarmRecipientIds)
{
    m_alarmRecipientIds = _alarmRecipientIds;
    m_alarmRecipientIdsHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::AlarmRecipientIdsHasBeenSet() const
{
    return m_alarmRecipientIdsHasBeenSet;
}

string ModifyAlarmRuleRequest::GetExtInfo() const
{
    return m_extInfo;
}

void ModifyAlarmRuleRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool ModifyAlarmRuleRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

