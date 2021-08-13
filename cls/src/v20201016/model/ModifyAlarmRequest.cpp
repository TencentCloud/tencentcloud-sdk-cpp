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

#include <tencentcloud/cls/v20201016/model/ModifyAlarmRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ModifyAlarmRequest::ModifyAlarmRequest() :
    m_alarmIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_monitorTimeHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_triggerCountHasBeenSet(false),
    m_alarmPeriodHasBeenSet(false),
    m_alarmNoticeIdsHasBeenSet(false),
    m_alarmTargetsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageTemplateHasBeenSet(false),
    m_callBackHasBeenSet(false),
    m_analysisHasBeenSet(false)
{
}

string ModifyAlarmRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_alarmIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_monitorTime.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAlarmRequest::GetAlarmId() const
{
    return m_alarmId;
}

void ModifyAlarmRequest::SetAlarmId(const string& _alarmId)
{
    m_alarmId = _alarmId;
    m_alarmIdHasBeenSet = true;
}

bool ModifyAlarmRequest::AlarmIdHasBeenSet() const
{
    return m_alarmIdHasBeenSet;
}

string ModifyAlarmRequest::GetName() const
{
    return m_name;
}

void ModifyAlarmRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyAlarmRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

MonitorTime ModifyAlarmRequest::GetMonitorTime() const
{
    return m_monitorTime;
}

void ModifyAlarmRequest::SetMonitorTime(const MonitorTime& _monitorTime)
{
    m_monitorTime = _monitorTime;
    m_monitorTimeHasBeenSet = true;
}

bool ModifyAlarmRequest::MonitorTimeHasBeenSet() const
{
    return m_monitorTimeHasBeenSet;
}

string ModifyAlarmRequest::GetCondition() const
{
    return m_condition;
}

void ModifyAlarmRequest::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ModifyAlarmRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t ModifyAlarmRequest::GetTriggerCount() const
{
    return m_triggerCount;
}

void ModifyAlarmRequest::SetTriggerCount(const int64_t& _triggerCount)
{
    m_triggerCount = _triggerCount;
    m_triggerCountHasBeenSet = true;
}

bool ModifyAlarmRequest::TriggerCountHasBeenSet() const
{
    return m_triggerCountHasBeenSet;
}

int64_t ModifyAlarmRequest::GetAlarmPeriod() const
{
    return m_alarmPeriod;
}

void ModifyAlarmRequest::SetAlarmPeriod(const int64_t& _alarmPeriod)
{
    m_alarmPeriod = _alarmPeriod;
    m_alarmPeriodHasBeenSet = true;
}

bool ModifyAlarmRequest::AlarmPeriodHasBeenSet() const
{
    return m_alarmPeriodHasBeenSet;
}

vector<string> ModifyAlarmRequest::GetAlarmNoticeIds() const
{
    return m_alarmNoticeIds;
}

void ModifyAlarmRequest::SetAlarmNoticeIds(const vector<string>& _alarmNoticeIds)
{
    m_alarmNoticeIds = _alarmNoticeIds;
    m_alarmNoticeIdsHasBeenSet = true;
}

bool ModifyAlarmRequest::AlarmNoticeIdsHasBeenSet() const
{
    return m_alarmNoticeIdsHasBeenSet;
}

vector<AlarmTarget> ModifyAlarmRequest::GetAlarmTargets() const
{
    return m_alarmTargets;
}

void ModifyAlarmRequest::SetAlarmTargets(const vector<AlarmTarget>& _alarmTargets)
{
    m_alarmTargets = _alarmTargets;
    m_alarmTargetsHasBeenSet = true;
}

bool ModifyAlarmRequest::AlarmTargetsHasBeenSet() const
{
    return m_alarmTargetsHasBeenSet;
}

bool ModifyAlarmRequest::GetStatus() const
{
    return m_status;
}

void ModifyAlarmRequest::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyAlarmRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyAlarmRequest::GetMessageTemplate() const
{
    return m_messageTemplate;
}

void ModifyAlarmRequest::SetMessageTemplate(const string& _messageTemplate)
{
    m_messageTemplate = _messageTemplate;
    m_messageTemplateHasBeenSet = true;
}

bool ModifyAlarmRequest::MessageTemplateHasBeenSet() const
{
    return m_messageTemplateHasBeenSet;
}

CallBackInfo ModifyAlarmRequest::GetCallBack() const
{
    return m_callBack;
}

void ModifyAlarmRequest::SetCallBack(const CallBackInfo& _callBack)
{
    m_callBack = _callBack;
    m_callBackHasBeenSet = true;
}

bool ModifyAlarmRequest::CallBackHasBeenSet() const
{
    return m_callBackHasBeenSet;
}

vector<AnalysisDimensional> ModifyAlarmRequest::GetAnalysis() const
{
    return m_analysis;
}

void ModifyAlarmRequest::SetAnalysis(const vector<AnalysisDimensional>& _analysis)
{
    m_analysis = _analysis;
    m_analysisHasBeenSet = true;
}

bool ModifyAlarmRequest::AnalysisHasBeenSet() const
{
    return m_analysisHasBeenSet;
}


