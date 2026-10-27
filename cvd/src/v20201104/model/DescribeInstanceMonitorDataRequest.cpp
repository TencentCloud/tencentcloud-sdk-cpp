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

#include <tencentcloud/cvd/v20201104/model/DescribeInstanceMonitorDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

DescribeInstanceMonitorDataRequest::DescribeInstanceMonitorDataRequest() :
    m_instancesHasBeenSet(false),
    m_nameSpaceHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_specifyStatisticsHasBeenSet(false)
{
}

string DescribeInstanceMonitorDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instancesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instances";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instances.begin(); itr != m_instances.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_nameSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nameSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_specifyStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifyStatistics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_specifyStatistics, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<Instance> DescribeInstanceMonitorDataRequest::GetInstances() const
{
    return m_instances;
}

void DescribeInstanceMonitorDataRequest::SetInstances(const vector<Instance>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool DescribeInstanceMonitorDataRequest::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

string DescribeInstanceMonitorDataRequest::GetNameSpace() const
{
    return m_nameSpace;
}

void DescribeInstanceMonitorDataRequest::SetNameSpace(const string& _nameSpace)
{
    m_nameSpace = _nameSpace;
    m_nameSpaceHasBeenSet = true;
}

bool DescribeInstanceMonitorDataRequest::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

string DescribeInstanceMonitorDataRequest::GetMetricName() const
{
    return m_metricName;
}

void DescribeInstanceMonitorDataRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribeInstanceMonitorDataRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

uint64_t DescribeInstanceMonitorDataRequest::GetPeriod() const
{
    return m_period;
}

void DescribeInstanceMonitorDataRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeInstanceMonitorDataRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string DescribeInstanceMonitorDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeInstanceMonitorDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeInstanceMonitorDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeInstanceMonitorDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeInstanceMonitorDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeInstanceMonitorDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t DescribeInstanceMonitorDataRequest::GetSpecifyStatistics() const
{
    return m_specifyStatistics;
}

void DescribeInstanceMonitorDataRequest::SetSpecifyStatistics(const int64_t& _specifyStatistics)
{
    m_specifyStatistics = _specifyStatistics;
    m_specifyStatisticsHasBeenSet = true;
}

bool DescribeInstanceMonitorDataRequest::SpecifyStatisticsHasBeenSet() const
{
    return m_specifyStatisticsHasBeenSet;
}


