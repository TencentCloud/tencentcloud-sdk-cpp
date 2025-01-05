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

#include <tencentcloud/monitor/v20180724/model/CreateAlarmPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

CreateAlarmPolicyRequest::CreateAlarmPolicyRequest() :
    m_moduleHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_conditionTemplateIdHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_eventConditionHasBeenSet(false),
    m_noticeIdsHasBeenSet(false),
    m_triggerTasksHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_groupByHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_logAlarmReqInfoHasBeenSet(false),
    m_hierarchicalNoticesHasBeenSet(false),
    m_migrateFlagHasBeenSet(false),
    m_ebSubjectHasBeenSet(false),
    m_additionalAlarmContentHasBeenSet(false),
    m_noticeContentTmplBindInfosHasBeenSet(false)
{
}

string CreateAlarmPolicyRequest::ToJsonString() const
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

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
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

    if (m_triggerTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerTasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_triggerTasks.begin(); itr != m_triggerTasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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

    if (m_logAlarmReqInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogAlarmReqInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_logAlarmReqInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hierarchicalNoticesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HierarchicalNotices";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hierarchicalNotices.begin(); itr != m_hierarchicalNotices.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_migrateFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_migrateFlag, allocator);
    }

    if (m_ebSubjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EbSubject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ebSubject.c_str(), allocator).Move(), allocator);
    }

    if (m_additionalAlarmContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdditionalAlarmContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_additionalAlarmContent.c_str(), allocator).Move(), allocator);
    }

    if (m_noticeContentTmplBindInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeContentTmplBindInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeContentTmplBindInfos.begin(); itr != m_noticeContentTmplBindInfos.end(); ++itr, ++i)
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


string CreateAlarmPolicyRequest::GetModule() const
{
    return m_module;
}

void CreateAlarmPolicyRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreateAlarmPolicyRequest::GetPolicyName() const
{
    return m_policyName;
}

void CreateAlarmPolicyRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string CreateAlarmPolicyRequest::GetMonitorType() const
{
    return m_monitorType;
}

void CreateAlarmPolicyRequest::SetMonitorType(const string& _monitorType)
{
    m_monitorType = _monitorType;
    m_monitorTypeHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string CreateAlarmPolicyRequest::GetNamespace() const
{
    return m_namespace;
}

void CreateAlarmPolicyRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string CreateAlarmPolicyRequest::GetRemark() const
{
    return m_remark;
}

void CreateAlarmPolicyRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateAlarmPolicyRequest::GetEnable() const
{
    return m_enable;
}

void CreateAlarmPolicyRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t CreateAlarmPolicyRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateAlarmPolicyRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t CreateAlarmPolicyRequest::GetConditionTemplateId() const
{
    return m_conditionTemplateId;
}

void CreateAlarmPolicyRequest::SetConditionTemplateId(const int64_t& _conditionTemplateId)
{
    m_conditionTemplateId = _conditionTemplateId;
    m_conditionTemplateIdHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::ConditionTemplateIdHasBeenSet() const
{
    return m_conditionTemplateIdHasBeenSet;
}

AlarmPolicyCondition CreateAlarmPolicyRequest::GetCondition() const
{
    return m_condition;
}

void CreateAlarmPolicyRequest::SetCondition(const AlarmPolicyCondition& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

AlarmPolicyEventCondition CreateAlarmPolicyRequest::GetEventCondition() const
{
    return m_eventCondition;
}

void CreateAlarmPolicyRequest::SetEventCondition(const AlarmPolicyEventCondition& _eventCondition)
{
    m_eventCondition = _eventCondition;
    m_eventConditionHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::EventConditionHasBeenSet() const
{
    return m_eventConditionHasBeenSet;
}

vector<string> CreateAlarmPolicyRequest::GetNoticeIds() const
{
    return m_noticeIds;
}

void CreateAlarmPolicyRequest::SetNoticeIds(const vector<string>& _noticeIds)
{
    m_noticeIds = _noticeIds;
    m_noticeIdsHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::NoticeIdsHasBeenSet() const
{
    return m_noticeIdsHasBeenSet;
}

vector<AlarmPolicyTriggerTask> CreateAlarmPolicyRequest::GetTriggerTasks() const
{
    return m_triggerTasks;
}

void CreateAlarmPolicyRequest::SetTriggerTasks(const vector<AlarmPolicyTriggerTask>& _triggerTasks)
{
    m_triggerTasks = _triggerTasks;
    m_triggerTasksHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::TriggerTasksHasBeenSet() const
{
    return m_triggerTasksHasBeenSet;
}

AlarmPolicyFilter CreateAlarmPolicyRequest::GetFilter() const
{
    return m_filter;
}

void CreateAlarmPolicyRequest::SetFilter(const AlarmPolicyFilter& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}

vector<string> CreateAlarmPolicyRequest::GetGroupBy() const
{
    return m_groupBy;
}

void CreateAlarmPolicyRequest::SetGroupBy(const vector<string>& _groupBy)
{
    m_groupBy = _groupBy;
    m_groupByHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::GroupByHasBeenSet() const
{
    return m_groupByHasBeenSet;
}

vector<Tag> CreateAlarmPolicyRequest::GetTags() const
{
    return m_tags;
}

void CreateAlarmPolicyRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

LogAlarmReq CreateAlarmPolicyRequest::GetLogAlarmReqInfo() const
{
    return m_logAlarmReqInfo;
}

void CreateAlarmPolicyRequest::SetLogAlarmReqInfo(const LogAlarmReq& _logAlarmReqInfo)
{
    m_logAlarmReqInfo = _logAlarmReqInfo;
    m_logAlarmReqInfoHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::LogAlarmReqInfoHasBeenSet() const
{
    return m_logAlarmReqInfoHasBeenSet;
}

vector<AlarmHierarchicalNotice> CreateAlarmPolicyRequest::GetHierarchicalNotices() const
{
    return m_hierarchicalNotices;
}

void CreateAlarmPolicyRequest::SetHierarchicalNotices(const vector<AlarmHierarchicalNotice>& _hierarchicalNotices)
{
    m_hierarchicalNotices = _hierarchicalNotices;
    m_hierarchicalNoticesHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::HierarchicalNoticesHasBeenSet() const
{
    return m_hierarchicalNoticesHasBeenSet;
}

int64_t CreateAlarmPolicyRequest::GetMigrateFlag() const
{
    return m_migrateFlag;
}

void CreateAlarmPolicyRequest::SetMigrateFlag(const int64_t& _migrateFlag)
{
    m_migrateFlag = _migrateFlag;
    m_migrateFlagHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::MigrateFlagHasBeenSet() const
{
    return m_migrateFlagHasBeenSet;
}

string CreateAlarmPolicyRequest::GetEbSubject() const
{
    return m_ebSubject;
}

void CreateAlarmPolicyRequest::SetEbSubject(const string& _ebSubject)
{
    m_ebSubject = _ebSubject;
    m_ebSubjectHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::EbSubjectHasBeenSet() const
{
    return m_ebSubjectHasBeenSet;
}

string CreateAlarmPolicyRequest::GetAdditionalAlarmContent() const
{
    return m_additionalAlarmContent;
}

void CreateAlarmPolicyRequest::SetAdditionalAlarmContent(const string& _additionalAlarmContent)
{
    m_additionalAlarmContent = _additionalAlarmContent;
    m_additionalAlarmContentHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::AdditionalAlarmContentHasBeenSet() const
{
    return m_additionalAlarmContentHasBeenSet;
}

vector<NoticeContentTmplBindInfo> CreateAlarmPolicyRequest::GetNoticeContentTmplBindInfos() const
{
    return m_noticeContentTmplBindInfos;
}

void CreateAlarmPolicyRequest::SetNoticeContentTmplBindInfos(const vector<NoticeContentTmplBindInfo>& _noticeContentTmplBindInfos)
{
    m_noticeContentTmplBindInfos = _noticeContentTmplBindInfos;
    m_noticeContentTmplBindInfosHasBeenSet = true;
}

bool CreateAlarmPolicyRequest::NoticeContentTmplBindInfosHasBeenSet() const
{
    return m_noticeContentTmplBindInfosHasBeenSet;
}


