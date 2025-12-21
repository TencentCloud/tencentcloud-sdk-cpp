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

#include <tencentcloud/emr/v20190103/model/DescribeHBaseTableStoreSizeMetricRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeHBaseTableStoreSizeMetricRequest::DescribeHBaseTableStoreSizeMetricRequest() :
    m_instanceIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_regionServerHasBeenSet(false),
    m_downsampleHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeHBaseTableStoreSizeMetricRequest::ToJsonString() const
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

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionServer.c_str(), allocator).Move(), allocator);
    }

    if (m_downsampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Downsample";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_downsample.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeHBaseTableStoreSizeMetricRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeHBaseTableStoreSizeMetricRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeHBaseTableStoreSizeMetricRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeHBaseTableStoreSizeMetricRequest::GetTableName() const
{
    return m_tableName;
}

void DescribeHBaseTableStoreSizeMetricRequest::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DescribeHBaseTableStoreSizeMetricRequest::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string DescribeHBaseTableStoreSizeMetricRequest::GetRegionServer() const
{
    return m_regionServer;
}

void DescribeHBaseTableStoreSizeMetricRequest::SetRegionServer(const string& _regionServer)
{
    m_regionServer = _regionServer;
    m_regionServerHasBeenSet = true;
}

bool DescribeHBaseTableStoreSizeMetricRequest::RegionServerHasBeenSet() const
{
    return m_regionServerHasBeenSet;
}

string DescribeHBaseTableStoreSizeMetricRequest::GetDownsample() const
{
    return m_downsample;
}

void DescribeHBaseTableStoreSizeMetricRequest::SetDownsample(const string& _downsample)
{
    m_downsample = _downsample;
    m_downsampleHasBeenSet = true;
}

bool DescribeHBaseTableStoreSizeMetricRequest::DownsampleHasBeenSet() const
{
    return m_downsampleHasBeenSet;
}

int64_t DescribeHBaseTableStoreSizeMetricRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeHBaseTableStoreSizeMetricRequest::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeHBaseTableStoreSizeMetricRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t DescribeHBaseTableStoreSizeMetricRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeHBaseTableStoreSizeMetricRequest::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeHBaseTableStoreSizeMetricRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


