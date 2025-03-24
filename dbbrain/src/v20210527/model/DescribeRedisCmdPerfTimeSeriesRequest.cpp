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

#include <tencentcloud/dbbrain/v20210527/model/DescribeRedisCmdPerfTimeSeriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeRedisCmdPerfTimeSeriesRequest::DescribeRedisCmdPerfTimeSeriesRequest() :
    m_instanceIdHasBeenSet(false),
    m_productHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_commandListHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_periodHasBeenSet(false)
{
}

string DescribeRedisCmdPerfTimeSeriesRequest::ToJsonString() const
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

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
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

    if (m_commandListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_commandList.begin(); itr != m_commandList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
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


string DescribeRedisCmdPerfTimeSeriesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeRedisCmdPerfTimeSeriesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeRedisCmdPerfTimeSeriesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeRedisCmdPerfTimeSeriesRequest::GetProduct() const
{
    return m_product;
}

void DescribeRedisCmdPerfTimeSeriesRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeRedisCmdPerfTimeSeriesRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeRedisCmdPerfTimeSeriesRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeRedisCmdPerfTimeSeriesRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRedisCmdPerfTimeSeriesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeRedisCmdPerfTimeSeriesRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeRedisCmdPerfTimeSeriesRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRedisCmdPerfTimeSeriesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

vector<string> DescribeRedisCmdPerfTimeSeriesRequest::GetCommandList() const
{
    return m_commandList;
}

void DescribeRedisCmdPerfTimeSeriesRequest::SetCommandList(const vector<string>& _commandList)
{
    m_commandList = _commandList;
    m_commandListHasBeenSet = true;
}

bool DescribeRedisCmdPerfTimeSeriesRequest::CommandListHasBeenSet() const
{
    return m_commandListHasBeenSet;
}

string DescribeRedisCmdPerfTimeSeriesRequest::GetMetric() const
{
    return m_metric;
}

void DescribeRedisCmdPerfTimeSeriesRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeRedisCmdPerfTimeSeriesRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

int64_t DescribeRedisCmdPerfTimeSeriesRequest::GetPeriod() const
{
    return m_period;
}

void DescribeRedisCmdPerfTimeSeriesRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeRedisCmdPerfTimeSeriesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}


