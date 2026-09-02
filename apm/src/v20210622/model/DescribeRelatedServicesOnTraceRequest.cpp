/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/apm/v20210622/model/DescribeRelatedServicesOnTraceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

DescribeRelatedServicesOnTraceRequest::DescribeRelatedServicesOnTraceRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_isServiceTopologyHasBeenSet(false)
{
}

string DescribeRelatedServicesOnTraceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
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

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_isServiceTopologyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsServiceTopology";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isServiceTopology, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRelatedServicesOnTraceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRelatedServicesOnTraceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRelatedServicesOnTraceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t DescribeRelatedServicesOnTraceRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeRelatedServicesOnTraceRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRelatedServicesOnTraceRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeRelatedServicesOnTraceRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeRelatedServicesOnTraceRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRelatedServicesOnTraceRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeRelatedServicesOnTraceRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeRelatedServicesOnTraceRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeRelatedServicesOnTraceRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

bool DescribeRelatedServicesOnTraceRequest::GetIsServiceTopology() const
{
    return m_isServiceTopology;
}

void DescribeRelatedServicesOnTraceRequest::SetIsServiceTopology(const bool& _isServiceTopology)
{
    m_isServiceTopology = _isServiceTopology;
    m_isServiceTopologyHasBeenSet = true;
}

bool DescribeRelatedServicesOnTraceRequest::IsServiceTopologyHasBeenSet() const
{
    return m_isServiceTopologyHasBeenSet;
}


