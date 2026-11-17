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

#include <tencentcloud/dlc/v20210125/model/DescribePartitionMonitorOverviewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribePartitionMonitorOverviewRequest::DescribePartitionMonitorOverviewRequest() :
    m_partitionCodeHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_metricKeysHasBeenSet(false)
{
}

string DescribePartitionMonitorOverviewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_partitionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PartitionCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_partitionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricKeysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricKeys";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_metricKeys.begin(); itr != m_metricKeys.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePartitionMonitorOverviewRequest::GetPartitionCode() const
{
    return m_partitionCode;
}

void DescribePartitionMonitorOverviewRequest::SetPartitionCode(const string& _partitionCode)
{
    m_partitionCode = _partitionCode;
    m_partitionCodeHasBeenSet = true;
}

bool DescribePartitionMonitorOverviewRequest::PartitionCodeHasBeenSet() const
{
    return m_partitionCodeHasBeenSet;
}

string DescribePartitionMonitorOverviewRequest::GetQueueName() const
{
    return m_queueName;
}

void DescribePartitionMonitorOverviewRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool DescribePartitionMonitorOverviewRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

vector<string> DescribePartitionMonitorOverviewRequest::GetMetricKeys() const
{
    return m_metricKeys;
}

void DescribePartitionMonitorOverviewRequest::SetMetricKeys(const vector<string>& _metricKeys)
{
    m_metricKeys = _metricKeys;
    m_metricKeysHasBeenSet = true;
}

bool DescribePartitionMonitorOverviewRequest::MetricKeysHasBeenSet() const
{
    return m_metricKeysHasBeenSet;
}


