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

#include <tencentcloud/iecp/v20210914/model/DescribeMonitorMetricsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

DescribeMonitorMetricsRequest::DescribeMonitorMetricsRequest() :
    m_edgeUnitIdHasBeenSet(false),
    m_queryTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_nodeNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_podNameHasBeenSet(false),
    m_workloadNameHasBeenSet(false)
{
}

string DescribeMonitorMetricsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_edgeUnitIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeUnitId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_edgeUnitId, allocator);
    }

    if (m_queryTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryType.c_str(), allocator).Move(), allocator);
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

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_interval, allocator);
    }

    if (m_nodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_podNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_podName.c_str(), allocator).Move(), allocator);
    }

    if (m_workloadNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkloadName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workloadName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeMonitorMetricsRequest::GetEdgeUnitId() const
{
    return m_edgeUnitId;
}

void DescribeMonitorMetricsRequest::SetEdgeUnitId(const uint64_t& _edgeUnitId)
{
    m_edgeUnitId = _edgeUnitId;
    m_edgeUnitIdHasBeenSet = true;
}

bool DescribeMonitorMetricsRequest::EdgeUnitIdHasBeenSet() const
{
    return m_edgeUnitIdHasBeenSet;
}

string DescribeMonitorMetricsRequest::GetQueryType() const
{
    return m_queryType;
}

void DescribeMonitorMetricsRequest::SetQueryType(const string& _queryType)
{
    m_queryType = _queryType;
    m_queryTypeHasBeenSet = true;
}

bool DescribeMonitorMetricsRequest::QueryTypeHasBeenSet() const
{
    return m_queryTypeHasBeenSet;
}

int64_t DescribeMonitorMetricsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeMonitorMetricsRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeMonitorMetricsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeMonitorMetricsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeMonitorMetricsRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeMonitorMetricsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeMonitorMetricsRequest::GetInterval() const
{
    return m_interval;
}

void DescribeMonitorMetricsRequest::SetInterval(const int64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool DescribeMonitorMetricsRequest::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

string DescribeMonitorMetricsRequest::GetNodeName() const
{
    return m_nodeName;
}

void DescribeMonitorMetricsRequest::SetNodeName(const string& _nodeName)
{
    m_nodeName = _nodeName;
    m_nodeNameHasBeenSet = true;
}

bool DescribeMonitorMetricsRequest::NodeNameHasBeenSet() const
{
    return m_nodeNameHasBeenSet;
}

string DescribeMonitorMetricsRequest::GetNamespace() const
{
    return m_namespace;
}

void DescribeMonitorMetricsRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool DescribeMonitorMetricsRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string DescribeMonitorMetricsRequest::GetPodName() const
{
    return m_podName;
}

void DescribeMonitorMetricsRequest::SetPodName(const string& _podName)
{
    m_podName = _podName;
    m_podNameHasBeenSet = true;
}

bool DescribeMonitorMetricsRequest::PodNameHasBeenSet() const
{
    return m_podNameHasBeenSet;
}

string DescribeMonitorMetricsRequest::GetWorkloadName() const
{
    return m_workloadName;
}

void DescribeMonitorMetricsRequest::SetWorkloadName(const string& _workloadName)
{
    m_workloadName = _workloadName;
    m_workloadNameHasBeenSet = true;
}

bool DescribeMonitorMetricsRequest::WorkloadNameHasBeenSet() const
{
    return m_workloadNameHasBeenSet;
}


