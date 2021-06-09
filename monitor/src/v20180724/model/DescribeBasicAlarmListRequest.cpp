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

#include <tencentcloud/monitor/v20180724/model/DescribeBasicAlarmListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeBasicAlarmListRequest::DescribeBasicAlarmListRequest() :
    m_moduleHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_occurTimeOrderHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_viewNamesHasBeenSet(false),
    m_alarmStatusHasBeenSet(false),
    m_objLikeHasBeenSet(false),
    m_instanceGroupIdsHasBeenSet(false),
    m_metricNamesHasBeenSet(false)
{
}

string DescribeBasicAlarmListRequest::ToJsonString() const
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

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_occurTimeOrderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccurTimeOrder";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_occurTimeOrder.c_str(), allocator).Move(), allocator);
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

    if (m_viewNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ViewNames";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_viewNames.begin(); itr != m_viewNames.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmStatus.begin(); itr != m_alarmStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_objLikeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjLike";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_objLike.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBasicAlarmListRequest::GetModule() const
{
    return m_module;
}

void DescribeBasicAlarmListRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

int64_t DescribeBasicAlarmListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBasicAlarmListRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeBasicAlarmListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBasicAlarmListRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeBasicAlarmListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBasicAlarmListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeBasicAlarmListRequest::GetOffset() const
{
    return m_offset;
}

void DescribeBasicAlarmListRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeBasicAlarmListRequest::GetOccurTimeOrder() const
{
    return m_occurTimeOrder;
}

void DescribeBasicAlarmListRequest::SetOccurTimeOrder(const string& _occurTimeOrder)
{
    m_occurTimeOrder = _occurTimeOrder;
    m_occurTimeOrderHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::OccurTimeOrderHasBeenSet() const
{
    return m_occurTimeOrderHasBeenSet;
}

vector<int64_t> DescribeBasicAlarmListRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeBasicAlarmListRequest::SetProjectIds(const vector<int64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> DescribeBasicAlarmListRequest::GetViewNames() const
{
    return m_viewNames;
}

void DescribeBasicAlarmListRequest::SetViewNames(const vector<string>& _viewNames)
{
    m_viewNames = _viewNames;
    m_viewNamesHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::ViewNamesHasBeenSet() const
{
    return m_viewNamesHasBeenSet;
}

vector<int64_t> DescribeBasicAlarmListRequest::GetAlarmStatus() const
{
    return m_alarmStatus;
}

void DescribeBasicAlarmListRequest::SetAlarmStatus(const vector<int64_t>& _alarmStatus)
{
    m_alarmStatus = _alarmStatus;
    m_alarmStatusHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::AlarmStatusHasBeenSet() const
{
    return m_alarmStatusHasBeenSet;
}

string DescribeBasicAlarmListRequest::GetObjLike() const
{
    return m_objLike;
}

void DescribeBasicAlarmListRequest::SetObjLike(const string& _objLike)
{
    m_objLike = _objLike;
    m_objLikeHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::ObjLikeHasBeenSet() const
{
    return m_objLikeHasBeenSet;
}

vector<int64_t> DescribeBasicAlarmListRequest::GetInstanceGroupIds() const
{
    return m_instanceGroupIds;
}

void DescribeBasicAlarmListRequest::SetInstanceGroupIds(const vector<int64_t>& _instanceGroupIds)
{
    m_instanceGroupIds = _instanceGroupIds;
    m_instanceGroupIdsHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::InstanceGroupIdsHasBeenSet() const
{
    return m_instanceGroupIdsHasBeenSet;
}

vector<string> DescribeBasicAlarmListRequest::GetMetricNames() const
{
    return m_metricNames;
}

void DescribeBasicAlarmListRequest::SetMetricNames(const vector<string>& _metricNames)
{
    m_metricNames = _metricNames;
    m_metricNamesHasBeenSet = true;
}

bool DescribeBasicAlarmListRequest::MetricNamesHasBeenSet() const
{
    return m_metricNamesHasBeenSet;
}


