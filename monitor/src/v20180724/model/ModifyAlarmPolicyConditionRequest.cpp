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

#include <tencentcloud/monitor/v20180724/model/ModifyAlarmPolicyConditionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

ModifyAlarmPolicyConditionRequest::ModifyAlarmPolicyConditionRequest() :
    m_moduleHasBeenSet(false),
    m_policyIdHasBeenSet(false),
    m_conditionTemplateIdHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_eventConditionHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_logAlarmReqInfoHasBeenSet(false),
    m_noticeIdsHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_ebSubjectHasBeenSet(false)
{
}

string ModifyAlarmPolicyConditionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_policyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyId.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConditionTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_conditionTemplateId, allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_condition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_eventConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCondition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eventCondition.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_filter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_groupByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupBy.begin(); itr != m_groupBy.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_logAlarmReqInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogAlarmReqInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logAlarmReqInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_noticeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticeIds.begin(); itr != m_noticeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_ebSubjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EbSubject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ebSubject.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAlarmPolicyConditionRequest::GetModule() const
{
    return m_module;
}

void ModifyAlarmPolicyConditionRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string ModifyAlarmPolicyConditionRequest::GetPolicyId() const
{
    return m_policyId;
}

void ModifyAlarmPolicyConditionRequest::SetPolicyId(const string& _policyId)
{
    m_policyId = _policyId;
    m_policyIdHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::PolicyIdHasBeenSet() const
{
    return m_policyIdHasBeenSet;
}

int64_t ModifyAlarmPolicyConditionRequest::GetConditionTemplateId() const
{
    return m_conditionTemplateId;
}

void ModifyAlarmPolicyConditionRequest::SetConditionTemplateId(const int64_t& _conditionTemplateId)
{
    m_conditionTemplateId = _conditionTemplateId;
    m_conditionTemplateIdHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::ConditionTemplateIdHasBeenSet() const
{
    return m_conditionTemplateIdHasBeenSet;
}

AlarmPolicyCondition ModifyAlarmPolicyConditionRequest::GetCondition() const
{
    return m_condition;
}

void ModifyAlarmPolicyConditionRequest::SetCondition(const AlarmPolicyCondition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

AlarmPolicyEventCondition ModifyAlarmPolicyConditionRequest::GetEventCondition() const
{
    return m_eventCondition;
}

void ModifyAlarmPolicyConditionRequest::SetEventCondition(const AlarmPolicyEventCondition& _eventCondition)
{
    m_eventCondition = _eventCondition;
    m_eventConditionHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::EventConditionHasBeenSet() const
{
    return m_eventConditionHasBeenSet;
}

AlarmPolicyFilter ModifyAlarmPolicyConditionRequest::GetFilter() const
{
    return m_filter;
}

void ModifyAlarmPolicyConditionRequest::SetFilter(const AlarmPolicyFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<string> ModifyAlarmPolicyConditionRequest::GetGroupBy() const
{
    return m_groupBy;
}

void ModifyAlarmPolicyConditionRequest::SetGroupBy(const vector<string>& _groupBy)
{
    m_groupBy = _groupBy;
    m_groupByHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::GroupByHasBeenSet() const
{
    return m_groupByHasBeenSet;
}

LogAlarmReq ModifyAlarmPolicyConditionRequest::GetLogAlarmReqInfo() const
{
    return m_logAlarmReqInfo;
}

void ModifyAlarmPolicyConditionRequest::SetLogAlarmReqInfo(const LogAlarmReq& _logAlarmReqInfo)
{
    m_logAlarmReqInfo = _logAlarmReqInfo;
    m_logAlarmReqInfoHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::LogAlarmReqInfoHasBeenSet() const
{
    return m_logAlarmReqInfoHasBeenSet;
}

vector<string> ModifyAlarmPolicyConditionRequest::GetNoticeIds() const
{
    return m_noticeIds;
}

void ModifyAlarmPolicyConditionRequest::SetNoticeIds(const vector<string>& _noticeIds)
{
    m_noticeIds = _noticeIds;
    m_noticeIdsHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::NoticeIdsHasBeenSet() const
{
    return m_noticeIdsHasBeenSet;
}

int64_t ModifyAlarmPolicyConditionRequest::GetEnable() const
{
    return m_enable;
}

void ModifyAlarmPolicyConditionRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyAlarmPolicyConditionRequest::GetPolicyName() const
{
    return m_policyName;
}

void ModifyAlarmPolicyConditionRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string ModifyAlarmPolicyConditionRequest::GetEbSubject() const
{
    return m_ebSubject;
}

void ModifyAlarmPolicyConditionRequest::SetEbSubject(const string& _ebSubject)
{
    m_ebSubject = _ebSubject;
    m_ebSubjectHasBeenSet = true;
}

bool ModifyAlarmPolicyConditionRequest::EbSubjectHasBeenSet() const
{
    return m_ebSubjectHasBeenSet;
}


