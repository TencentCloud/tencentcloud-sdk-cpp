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

#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeAlarmHistoriesRequest::DescribeAlarmHistoriesRequest() :
    m_moduleHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_monitorTypesHasBeenSet(false),
    m_alarmObjectHasBeenSet(false),
    m_alarmStatusHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_instanceGroupIdsHasBeenSet(false),
    m_namespacesHasBeenSet(false),
    m_metricNamesHasBeenSet(false),
    m_policyNameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_receiverUidsHasBeenSet(false),
    m_receiverGroupsHasBeenSet(false),
    m_policyIdsHasBeenSet(false),
    m_alarmLevelsHasBeenSet(false),
    m_convergenceHistoryIDsHasBeenSet(false),
    m_alarmTypesHasBeenSet(false)
{
}

string DescribeAlarmHistoriesRequest::ToJsonString() const
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

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_endTime, allocator);
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

    if (m_alarmObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmObject";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alarmObject.c_str(), allocator).Move(), allocator);
    }

    if (m_alarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmStatus.begin(); itr != m_alarmStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_instanceGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceGroupIds.begin(); itr != m_instanceGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_namespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespaces";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_namespaces.begin(); itr != m_namespaces.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_metricNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metricNames.begin(); itr != m_metricNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_policyName.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
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

    if (m_policyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyIds.begin(); itr != m_policyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmLevelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmLevels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmLevels.begin(); itr != m_alarmLevels.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_convergenceHistoryIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConvergenceHistoryIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_convergenceHistoryIDs.begin(); itr != m_convergenceHistoryIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmTypes.begin(); itr != m_alarmTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAlarmHistoriesRequest::GetModule() const
{
    return m_module;
}

void DescribeAlarmHistoriesRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t DescribeAlarmHistoriesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeAlarmHistoriesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeAlarmHistoriesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeAlarmHistoriesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeAlarmHistoriesRequest::GetOrder() const
{
    return m_order;
}

void DescribeAlarmHistoriesRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

int64_t DescribeAlarmHistoriesRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeAlarmHistoriesRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeAlarmHistoriesRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeAlarmHistoriesRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeAlarmHistoriesRequest::GetMonitorTypes() const
{
    return m_monitorTypes;
}

void DescribeAlarmHistoriesRequest::SetMonitorTypes(const vector<string>& _monitorTypes)
{
    m_monitorTypes = _monitorTypes;
    m_monitorTypesHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::MonitorTypesHasBeenSet() const
{
    return m_monitorTypesHasBeenSet;
}

string DescribeAlarmHistoriesRequest::GetAlarmObject() const
{
    return m_alarmObject;
}

void DescribeAlarmHistoriesRequest::SetAlarmObject(const string& _alarmObject)
{
    m_alarmObject = _alarmObject;
    m_alarmObjectHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::AlarmObjectHasBeenSet() const
{
    return m_alarmObjectHasBeenSet;
}

vector<string> DescribeAlarmHistoriesRequest::GetAlarmStatus() const
{
    return m_alarmStatus;
}

void DescribeAlarmHistoriesRequest::SetAlarmStatus(const vector<string>& _alarmStatus)
{
    m_alarmStatus = _alarmStatus;
    m_alarmStatusHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::AlarmStatusHasBeenSet() const
{
    return m_alarmStatusHasBeenSet;
}

vector<int64_t> DescribeAlarmHistoriesRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeAlarmHistoriesRequest::SetProjectIds(const vector<int64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<int64_t> DescribeAlarmHistoriesRequest::GetInstanceGroupIds() const
{
    return m_instanceGroupIds;
}

void DescribeAlarmHistoriesRequest::SetInstanceGroupIds(const vector<int64_t>& _instanceGroupIds)
{
    m_instanceGroupIds = _instanceGroupIds;
    m_instanceGroupIdsHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::InstanceGroupIdsHasBeenSet() const
{
    return m_instanceGroupIdsHasBeenSet;
}

vector<MonitorTypeNamespace> DescribeAlarmHistoriesRequest::GetNamespaces() const
{
    return m_namespaces;
}

void DescribeAlarmHistoriesRequest::SetNamespaces(const vector<MonitorTypeNamespace>& _namespaces)
{
    m_namespaces = _namespaces;
    m_namespacesHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::NamespacesHasBeenSet() const
{
    return m_namespacesHasBeenSet;
}

vector<string> DescribeAlarmHistoriesRequest::GetMetricNames() const
{
    return m_metricNames;
}

void DescribeAlarmHistoriesRequest::SetMetricNames(const vector<string>& _metricNames)
{
    m_metricNames = _metricNames;
    m_metricNamesHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::MetricNamesHasBeenSet() const
{
    return m_metricNamesHasBeenSet;
}

string DescribeAlarmHistoriesRequest::GetPolicyName() const
{
    return m_policyName;
}

void DescribeAlarmHistoriesRequest::SetPolicyName(const string& _policyName)
{
    m_policyName = _policyName;
    m_policyNameHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::PolicyNameHasBeenSet() const
{
    return m_policyNameHasBeenSet;
}

string DescribeAlarmHistoriesRequest::GetContent() const
{
    return m_content;
}

void DescribeAlarmHistoriesRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<int64_t> DescribeAlarmHistoriesRequest::GetReceiverUids() const
{
    return m_receiverUids;
}

void DescribeAlarmHistoriesRequest::SetReceiverUids(const vector<int64_t>& _receiverUids)
{
    m_receiverUids = _receiverUids;
    m_receiverUidsHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::ReceiverUidsHasBeenSet() const
{
    return m_receiverUidsHasBeenSet;
}

vector<int64_t> DescribeAlarmHistoriesRequest::GetReceiverGroups() const
{
    return m_receiverGroups;
}

void DescribeAlarmHistoriesRequest::SetReceiverGroups(const vector<int64_t>& _receiverGroups)
{
    m_receiverGroups = _receiverGroups;
    m_receiverGroupsHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::ReceiverGroupsHasBeenSet() const
{
    return m_receiverGroupsHasBeenSet;
}

vector<string> DescribeAlarmHistoriesRequest::GetPolicyIds() const
{
    return m_policyIds;
}

void DescribeAlarmHistoriesRequest::SetPolicyIds(const vector<string>& _policyIds)
{
    m_policyIds = _policyIds;
    m_policyIdsHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::PolicyIdsHasBeenSet() const
{
    return m_policyIdsHasBeenSet;
}

vector<string> DescribeAlarmHistoriesRequest::GetAlarmLevels() const
{
    return m_alarmLevels;
}

void DescribeAlarmHistoriesRequest::SetAlarmLevels(const vector<string>& _alarmLevels)
{
    m_alarmLevels = _alarmLevels;
    m_alarmLevelsHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::AlarmLevelsHasBeenSet() const
{
    return m_alarmLevelsHasBeenSet;
}

vector<string> DescribeAlarmHistoriesRequest::GetConvergenceHistoryIDs() const
{
    return m_convergenceHistoryIDs;
}

void DescribeAlarmHistoriesRequest::SetConvergenceHistoryIDs(const vector<string>& _convergenceHistoryIDs)
{
    m_convergenceHistoryIDs = _convergenceHistoryIDs;
    m_convergenceHistoryIDsHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::ConvergenceHistoryIDsHasBeenSet() const
{
    return m_convergenceHistoryIDsHasBeenSet;
}

vector<string> DescribeAlarmHistoriesRequest::GetAlarmTypes() const
{
    return m_alarmTypes;
}

void DescribeAlarmHistoriesRequest::SetAlarmTypes(const vector<string>& _alarmTypes)
{
    m_alarmTypes = _alarmTypes;
    m_alarmTypesHasBeenSet = true;
}

bool DescribeAlarmHistoriesRequest::AlarmTypesHasBeenSet() const
{
    return m_alarmTypesHasBeenSet;
}


