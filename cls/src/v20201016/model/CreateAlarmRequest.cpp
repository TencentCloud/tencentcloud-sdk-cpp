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

#include <tencentcloud/cls/v20201016/model/CreateAlarmRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateAlarmRequest::CreateAlarmRequest() :
    m_nameHasBeenSet(false),
    m_alarmTargetsHasBeenSet(false),
    m_monitorTimeHasBeenSet(false),
    m_triggerCountHasBeenSet(false),
    m_alarmPeriodHasBeenSet(false),
    m_alarmNoticeIdsHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_alarmLevelHasBeenSet(false),
    m_multiConditionsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_messageTemplateHasBeenSet(false),
    m_callBackHasBeenSet(false),
    m_analysisHasBeenSet(false),
    m_groupTriggerStatusHasBeenSet(false),
    m_groupTriggerConditionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_monitorObjectTypeHasBeenSet(false),
    m_classificationsHasBeenSet(false)
{
}

string CreateAlarmRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmTargetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTargets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_alarmTargets.begin(); itr != m_alarmTargets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_monitorTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monitorTime.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_triggerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_triggerCount, allocator);
    }

    if (m_alarmPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmPeriod, allocator);
    }

    if (m_alarmNoticeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmNoticeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmNoticeIds.begin(); itr != m_alarmNoticeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_alarmLevel, allocator);
    }

    if (m_multiConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiConditions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiConditions.begin(); itr != m_multiConditions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_messageTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_messageTemplate.c_str(), allocator).Move(), allocator);
    }

    if (m_callBackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallBack";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_callBack.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_analysisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Analysis";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_analysis.begin(); itr != m_analysis.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_groupTriggerStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupTriggerStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupTriggerStatus, allocator);
    }

    if (m_groupTriggerConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupTriggerCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupTriggerCondition.begin(); itr != m_groupTriggerCondition.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_monitorObjectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorObjectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_monitorObjectType, allocator);
    }

    if (m_classificationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classifications";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_classifications.begin(); itr != m_classifications.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAlarmRequest::GetName() const
{
    return m_name;
}

void CreateAlarmRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAlarmRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<AlarmTarget> CreateAlarmRequest::GetAlarmTargets() const
{
    return m_alarmTargets;
}

void CreateAlarmRequest::SetAlarmTargets(const vector<AlarmTarget>& _alarmTargets)
{
    m_alarmTargets = _alarmTargets;
    m_alarmTargetsHasBeenSet = true;
}

bool CreateAlarmRequest::AlarmTargetsHasBeenSet() const
{
    return m_alarmTargetsHasBeenSet;
}

MonitorTime CreateAlarmRequest::GetMonitorTime() const
{
    return m_monitorTime;
}

void CreateAlarmRequest::SetMonitorTime(const MonitorTime& _monitorTime)
{
    m_monitorTime = _monitorTime;
    m_monitorTimeHasBeenSet = true;
}

bool CreateAlarmRequest::MonitorTimeHasBeenSet() const
{
    return m_monitorTimeHasBeenSet;
}

int64_t CreateAlarmRequest::GetTriggerCount() const
{
    return m_triggerCount;
}

void CreateAlarmRequest::SetTriggerCount(const int64_t& _triggerCount)
{
    m_triggerCount = _triggerCount;
    m_triggerCountHasBeenSet = true;
}

bool CreateAlarmRequest::TriggerCountHasBeenSet() const
{
    return m_triggerCountHasBeenSet;
}

int64_t CreateAlarmRequest::GetAlarmPeriod() const
{
    return m_alarmPeriod;
}

void CreateAlarmRequest::SetAlarmPeriod(const int64_t& _alarmPeriod)
{
    m_alarmPeriod = _alarmPeriod;
    m_alarmPeriodHasBeenSet = true;
}

bool CreateAlarmRequest::AlarmPeriodHasBeenSet() const
{
    return m_alarmPeriodHasBeenSet;
}

vector<string> CreateAlarmRequest::GetAlarmNoticeIds() const
{
    return m_alarmNoticeIds;
}

void CreateAlarmRequest::SetAlarmNoticeIds(const vector<string>& _alarmNoticeIds)
{
    m_alarmNoticeIds = _alarmNoticeIds;
    m_alarmNoticeIdsHasBeenSet = true;
}

bool CreateAlarmRequest::AlarmNoticeIdsHasBeenSet() const
{
    return m_alarmNoticeIdsHasBeenSet;
}

string CreateAlarmRequest::GetCondition() const
{
    return m_condition;
}

void CreateAlarmRequest::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool CreateAlarmRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

uint64_t CreateAlarmRequest::GetAlarmLevel() const
{
    return m_alarmLevel;
}

void CreateAlarmRequest::SetAlarmLevel(const uint64_t& _alarmLevel)
{
    m_alarmLevel = _alarmLevel;
    m_alarmLevelHasBeenSet = true;
}

bool CreateAlarmRequest::AlarmLevelHasBeenSet() const
{
    return m_alarmLevelHasBeenSet;
}

vector<MultiCondition> CreateAlarmRequest::GetMultiConditions() const
{
    return m_multiConditions;
}

void CreateAlarmRequest::SetMultiConditions(const vector<MultiCondition>& _multiConditions)
{
    m_multiConditions = _multiConditions;
    m_multiConditionsHasBeenSet = true;
}

bool CreateAlarmRequest::MultiConditionsHasBeenSet() const
{
    return m_multiConditionsHasBeenSet;
}

bool CreateAlarmRequest::GetStatus() const
{
    return m_status;
}

void CreateAlarmRequest::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CreateAlarmRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool CreateAlarmRequest::GetEnable() const
{
    return m_enable;
}

void CreateAlarmRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateAlarmRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string CreateAlarmRequest::GetMessageTemplate() const
{
    return m_messageTemplate;
}

void CreateAlarmRequest::SetMessageTemplate(const string& _messageTemplate)
{
    m_messageTemplate = _messageTemplate;
    m_messageTemplateHasBeenSet = true;
}

bool CreateAlarmRequest::MessageTemplateHasBeenSet() const
{
    return m_messageTemplateHasBeenSet;
}

CallBackInfo CreateAlarmRequest::GetCallBack() const
{
    return m_callBack;
}

void CreateAlarmRequest::SetCallBack(const CallBackInfo& _callBack)
{
    m_callBack = _callBack;
    m_callBackHasBeenSet = true;
}

bool CreateAlarmRequest::CallBackHasBeenSet() const
{
    return m_callBackHasBeenSet;
}

vector<AnalysisDimensional> CreateAlarmRequest::GetAnalysis() const
{
    return m_analysis;
}

void CreateAlarmRequest::SetAnalysis(const vector<AnalysisDimensional>& _analysis)
{
    m_analysis = _analysis;
    m_analysisHasBeenSet = true;
}

bool CreateAlarmRequest::AnalysisHasBeenSet() const
{
    return m_analysisHasBeenSet;
}

bool CreateAlarmRequest::GetGroupTriggerStatus() const
{
    return m_groupTriggerStatus;
}

void CreateAlarmRequest::SetGroupTriggerStatus(const bool& _groupTriggerStatus)
{
    m_groupTriggerStatus = _groupTriggerStatus;
    m_groupTriggerStatusHasBeenSet = true;
}

bool CreateAlarmRequest::GroupTriggerStatusHasBeenSet() const
{
    return m_groupTriggerStatusHasBeenSet;
}

vector<string> CreateAlarmRequest::GetGroupTriggerCondition() const
{
    return m_groupTriggerCondition;
}

void CreateAlarmRequest::SetGroupTriggerCondition(const vector<string>& _groupTriggerCondition)
{
    m_groupTriggerCondition = _groupTriggerCondition;
    m_groupTriggerConditionHasBeenSet = true;
}

bool CreateAlarmRequest::GroupTriggerConditionHasBeenSet() const
{
    return m_groupTriggerConditionHasBeenSet;
}

vector<Tag> CreateAlarmRequest::GetTags() const
{
    return m_tags;
}

void CreateAlarmRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAlarmRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

uint64_t CreateAlarmRequest::GetMonitorObjectType() const
{
    return m_monitorObjectType;
}

void CreateAlarmRequest::SetMonitorObjectType(const uint64_t& _monitorObjectType)
{
    m_monitorObjectType = _monitorObjectType;
    m_monitorObjectTypeHasBeenSet = true;
}

bool CreateAlarmRequest::MonitorObjectTypeHasBeenSet() const
{
    return m_monitorObjectTypeHasBeenSet;
}

vector<AlarmClassification> CreateAlarmRequest::GetClassifications() const
{
    return m_classifications;
}

void CreateAlarmRequest::SetClassifications(const vector<AlarmClassification>& _classifications)
{
    m_classifications = _classifications;
    m_classificationsHasBeenSet = true;
}

bool CreateAlarmRequest::ClassificationsHasBeenSet() const
{
    return m_classificationsHasBeenSet;
}


