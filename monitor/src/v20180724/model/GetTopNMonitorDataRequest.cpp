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

#include <tencentcloud/monitor/v20180724/model/GetTopNMonitorDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

GetTopNMonitorDataRequest::GetTopNMonitorDataRequest() :
    m_nHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

string GetTopNMonitorDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "N";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_n, allocator);
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

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetTopNMonitorDataRequest::GetN() const
{
    return m_n;
}

void GetTopNMonitorDataRequest::SetN(const uint64_t& _n)
{
    m_n = _n;
    m_nHasBeenSet = true;
}

bool GetTopNMonitorDataRequest::NHasBeenSet() const
{
    return m_nHasBeenSet;
}

string GetTopNMonitorDataRequest::GetStartTime() const
{
    return m_startTime;
}

void GetTopNMonitorDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool GetTopNMonitorDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string GetTopNMonitorDataRequest::GetEndTime() const
{
    return m_endTime;
}

void GetTopNMonitorDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool GetTopNMonitorDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<Instance> GetTopNMonitorDataRequest::GetInstances() const
{
    return m_instances;
}

void GetTopNMonitorDataRequest::SetInstances(const vector<Instance>& _instances)
{
    m_instances = _instances;
    m_instancesHasBeenSet = true;
}

bool GetTopNMonitorDataRequest::InstancesHasBeenSet() const
{
    return m_instancesHasBeenSet;
}

string GetTopNMonitorDataRequest::GetMetricName() const
{
    return m_metricName;
}

void GetTopNMonitorDataRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool GetTopNMonitorDataRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string GetTopNMonitorDataRequest::GetNamespace() const
{
    return m_namespace;
}

void GetTopNMonitorDataRequest::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool GetTopNMonitorDataRequest::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

uint64_t GetTopNMonitorDataRequest::GetPeriod() const
{
    return m_period;
}

void GetTopNMonitorDataRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool GetTopNMonitorDataRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}


