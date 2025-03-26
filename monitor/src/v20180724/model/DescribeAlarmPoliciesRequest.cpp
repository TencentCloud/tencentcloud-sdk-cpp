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

#include <tencentcloud/monitor/v20180724/model/DescribeAlarmPoliciesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeAlarmPoliciesRequest::DescribeAlarmPoliciesRequest() :
    m_moduleHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_monitorTypesHasBeenSet(false),
    m_namespacesHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_receiverUidsHasBeenSet(false),
    m_receiverGroupsHasBeenSet(false),
    m_policyTypeHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_noticeIdsHasBeenSet(false),
    m_ruleTypesHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_notBindingNoticeRuleHasBeenSet(false),
    m_instanceGroupIdHasBeenSet(false),
    m_needCorrespondenceHasBeenSet(false),
    m_triggerTasksHasBeenSet(false),
    m_oneClickPolicyTypeHasBeenSet(false),
    m_notBindAllHasBeenSet(false),
    m_notInstanceGroupHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_promInsIdHasBeenSet(false),
    m_receiverOnCallFormIDsHasBeenSet(false),
    m_noticeContentTmplIDsHasBeenSet(false),
    m_isPredefinedHasBeenSet(false)
{
}

string DescribeAlarmPoliciesRequest::ToJsonString() const
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

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_monitorTypes.begin(); itr != m_monitorTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_namespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespaces";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespaces.begin(); itr != m_namespaces.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dimensions.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverUidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverUids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverUids.begin(); itr != m_receiverUids.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_receiverGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverGroups";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverGroups.begin(); itr != m_receiverGroups.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_policyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyType.begin(); itr != m_policyType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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

    if (m_ruleTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleTypes.begin(); itr != m_ruleTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_enable.begin(); itr != m_enable.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_notBindingNoticeRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBindingNoticeRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notBindingNoticeRule, allocator);
    }

    if (m_instanceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_instanceGroupId, allocator);
    }

    if (m_needCorrespondenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedCorrespondence";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needCorrespondence, allocator);
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

    if (m_oneClickPolicyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OneClickPolicyType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_oneClickPolicyType.begin(); itr != m_oneClickPolicyType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_notBindAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotBindAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notBindAll, allocator);
    }

    if (m_notInstanceGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotInstanceGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_notInstanceGroup, allocator);
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

    if (m_promInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromInsId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_promInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_receiverOnCallFormIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiverOnCallFormIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_receiverOnCallFormIDs.begin(); itr != m_receiverOnCallFormIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_noticeContentTmplIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeContentTmplIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_noticeContentTmplIDs.begin(); itr != m_noticeContentTmplIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isPredefinedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPredefined";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPredefined, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAlarmPoliciesRequest::GetModule() const
{
    return m_module;
}

void DescribeAlarmPoliciesRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t DescribeAlarmPoliciesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeAlarmPoliciesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeAlarmPoliciesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeAlarmPoliciesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeAlarmPoliciesRequest::GetPolicyName() const
{
    return m_policyName;
}

void DescribeAlarmPoliciesRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

vector<string> DescribeAlarmPoliciesRequest::GetMonitorTypes() const
{
    return m_monitorTypes;
}

void DescribeAlarmPoliciesRequest::SetMonitorTypes(const vector<string>& _monitorTypes)
{
    m_monitorTypes = _monitorTypes;
    m_monitorTypesHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::MonitorTypesHasBeenSet() const
{
    return m_monitorTypesHasBeenSet;
}

vector<string> DescribeAlarmPoliciesRequest::GetNamespaces() const
{
    return m_namespaces;
}

void DescribeAlarmPoliciesRequest::SetNamespaces(const vector<string>& _namespaces)
{
    m_namespaces = _namespaces;
    m_namespacesHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::NamespacesHasBeenSet() const
{
    return m_namespacesHasBeenSet;
}

string DescribeAlarmPoliciesRequest::GetDimensions() const
{
    return m_dimensions;
}

void DescribeAlarmPoliciesRequest::SetDimensions(const string& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

vector<int64_t> DescribeAlarmPoliciesRequest::GetReceiverUids() const
{
    return m_receiverUids;
}

void DescribeAlarmPoliciesRequest::SetReceiverUids(const vector<int64_t>& _receiverUids)
{
    m_receiverUids = _receiverUids;
    m_receiverUidsHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::ReceiverUidsHasBeenSet() const
{
    return m_receiverUidsHasBeenSet;
}

vector<int64_t> DescribeAlarmPoliciesRequest::GetReceiverGroups() const
{
    return m_receiverGroups;
}

void DescribeAlarmPoliciesRequest::SetReceiverGroups(const vector<int64_t>& _receiverGroups)
{
    m_receiverGroups = _receiverGroups;
    m_receiverGroupsHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::ReceiverGroupsHasBeenSet() const
{
    return m_receiverGroupsHasBeenSet;
}

vector<string> DescribeAlarmPoliciesRequest::GetPolicyType() const
{
    return m_policyType;
}

void DescribeAlarmPoliciesRequest::SetPolicyType(const vector<string>& _policyType)
{
    m_policyType = _policyType;
    m_policyTypeHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::PolicyTypeHasBeenSet() const
{
    return m_policyTypeHasBeenSet;
}

string DescribeAlarmPoliciesRequest::GetField() const
{
    return m_field;
}

void DescribeAlarmPoliciesRequest::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string DescribeAlarmPoliciesRequest::GetOrder() const
{
    return m_order;
}

void DescribeAlarmPoliciesRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

vector<int64_t> DescribeAlarmPoliciesRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeAlarmPoliciesRequest::SetProjectIds(const vector<int64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> DescribeAlarmPoliciesRequest::GetNoticeIds() const
{
    return m_noticeIds;
}

void DescribeAlarmPoliciesRequest::SetNoticeIds(const vector<string>& _noticeIds)
{
    m_noticeIds = _noticeIds;
    m_noticeIdsHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::NoticeIdsHasBeenSet() const
{
    return m_noticeIdsHasBeenSet;
}

vector<string> DescribeAlarmPoliciesRequest::GetRuleTypes() const
{
    return m_ruleTypes;
}

void DescribeAlarmPoliciesRequest::SetRuleTypes(const vector<string>& _ruleTypes)
{
    m_ruleTypes = _ruleTypes;
    m_ruleTypesHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::RuleTypesHasBeenSet() const
{
    return m_ruleTypesHasBeenSet;
}

vector<int64_t> DescribeAlarmPoliciesRequest::GetEnable() const
{
    return m_enable;
}

void DescribeAlarmPoliciesRequest::SetEnable(const vector<int64_t>& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t DescribeAlarmPoliciesRequest::GetNotBindingNoticeRule() const
{
    return m_notBindingNoticeRule;
}

void DescribeAlarmPoliciesRequest::SetNotBindingNoticeRule(const int64_t& _notBindingNoticeRule)
{
    m_notBindingNoticeRule = _notBindingNoticeRule;
    m_notBindingNoticeRuleHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::NotBindingNoticeRuleHasBeenSet() const
{
    return m_notBindingNoticeRuleHasBeenSet;
}

int64_t DescribeAlarmPoliciesRequest::GetInstanceGroupId() const
{
    return m_instanceGroupId;
}

void DescribeAlarmPoliciesRequest::SetInstanceGroupId(const int64_t& _instanceGroupId)
{
    m_instanceGroupId = _instanceGroupId;
    m_instanceGroupIdHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::InstanceGroupIdHasBeenSet() const
{
    return m_instanceGroupIdHasBeenSet;
}

int64_t DescribeAlarmPoliciesRequest::GetNeedCorrespondence() const
{
    return m_needCorrespondence;
}

void DescribeAlarmPoliciesRequest::SetNeedCorrespondence(const int64_t& _needCorrespondence)
{
    m_needCorrespondence = _needCorrespondence;
    m_needCorrespondenceHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::NeedCorrespondenceHasBeenSet() const
{
    return m_needCorrespondenceHasBeenSet;
}

vector<AlarmPolicyTriggerTask> DescribeAlarmPoliciesRequest::GetTriggerTasks() const
{
    return m_triggerTasks;
}

void DescribeAlarmPoliciesRequest::SetTriggerTasks(const vector<AlarmPolicyTriggerTask>& _triggerTasks)
{
    m_triggerTasks = _triggerTasks;
    m_triggerTasksHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::TriggerTasksHasBeenSet() const
{
    return m_triggerTasksHasBeenSet;
}

vector<string> DescribeAlarmPoliciesRequest::GetOneClickPolicyType() const
{
    return m_oneClickPolicyType;
}

void DescribeAlarmPoliciesRequest::SetOneClickPolicyType(const vector<string>& _oneClickPolicyType)
{
    m_oneClickPolicyType = _oneClickPolicyType;
    m_oneClickPolicyTypeHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::OneClickPolicyTypeHasBeenSet() const
{
    return m_oneClickPolicyTypeHasBeenSet;
}

int64_t DescribeAlarmPoliciesRequest::GetNotBindAll() const
{
    return m_notBindAll;
}

void DescribeAlarmPoliciesRequest::SetNotBindAll(const int64_t& _notBindAll)
{
    m_notBindAll = _notBindAll;
    m_notBindAllHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::NotBindAllHasBeenSet() const
{
    return m_notBindAllHasBeenSet;
}

int64_t DescribeAlarmPoliciesRequest::GetNotInstanceGroup() const
{
    return m_notInstanceGroup;
}

void DescribeAlarmPoliciesRequest::SetNotInstanceGroup(const int64_t& _notInstanceGroup)
{
    m_notInstanceGroup = _notInstanceGroup;
    m_notInstanceGroupHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::NotInstanceGroupHasBeenSet() const
{
    return m_notInstanceGroupHasBeenSet;
}

vector<Tag> DescribeAlarmPoliciesRequest::GetTags() const
{
    return m_tags;
}

void DescribeAlarmPoliciesRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeAlarmPoliciesRequest::GetPromInsId() const
{
    return m_promInsId;
}

void DescribeAlarmPoliciesRequest::SetPromInsId(const string& _promInsId)
{
    m_promInsId = _promInsId;
    m_promInsIdHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::PromInsIdHasBeenSet() const
{
    return m_promInsIdHasBeenSet;
}

vector<string> DescribeAlarmPoliciesRequest::GetReceiverOnCallFormIDs() const
{
    return m_receiverOnCallFormIDs;
}

void DescribeAlarmPoliciesRequest::SetReceiverOnCallFormIDs(const vector<string>& _receiverOnCallFormIDs)
{
    m_receiverOnCallFormIDs = _receiverOnCallFormIDs;
    m_receiverOnCallFormIDsHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::ReceiverOnCallFormIDsHasBeenSet() const
{
    return m_receiverOnCallFormIDsHasBeenSet;
}

vector<string> DescribeAlarmPoliciesRequest::GetNoticeContentTmplIDs() const
{
    return m_noticeContentTmplIDs;
}

void DescribeAlarmPoliciesRequest::SetNoticeContentTmplIDs(const vector<string>& _noticeContentTmplIDs)
{
    m_noticeContentTmplIDs = _noticeContentTmplIDs;
    m_noticeContentTmplIDsHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::NoticeContentTmplIDsHasBeenSet() const
{
    return m_noticeContentTmplIDsHasBeenSet;
}

int64_t DescribeAlarmPoliciesRequest::GetIsPredefined() const
{
    return m_isPredefined;
}

void DescribeAlarmPoliciesRequest::SetIsPredefined(const int64_t& _isPredefined)
{
    m_isPredefined = _isPredefined;
    m_isPredefinedHasBeenSet = true;
}

bool DescribeAlarmPoliciesRequest::IsPredefinedHasBeenSet() const
{
    return m_isPredefinedHasBeenSet;
}


