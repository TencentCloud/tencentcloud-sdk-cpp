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

#include <tencentcloud/dbbrain/v20210527/model/DescribeDBPerfTimeSeriesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeDBPerfTimeSeriesRequest::DescribeDBPerfTimeSeriesRequest() :
    m_instanceIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricHasBeenSet(false),
    m_productHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_instanceNodeIdHasBeenSet(false),
    m_instanceProxyIdHasBeenSet(false),
    m_proxyIdHasBeenSet(false)
{
}

string DescribeDBPerfTimeSeriesRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_metricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metric";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metric.c_str(), allocator).Move(), allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_instanceNodeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceNodeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceNodeId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceProxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceProxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDBPerfTimeSeriesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeDBPerfTimeSeriesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeDBPerfTimeSeriesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDBPerfTimeSeriesRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeDBPerfTimeSeriesRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeDBPerfTimeSeriesRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeDBPerfTimeSeriesRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeDBPerfTimeSeriesRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeDBPerfTimeSeriesRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeDBPerfTimeSeriesRequest::GetMetric() const
{
    return m_metric;
}

void DescribeDBPerfTimeSeriesRequest::SetMetric(const string& _metric)
{
    m_metric = _metric;
    m_metricHasBeenSet = true;
}

bool DescribeDBPerfTimeSeriesRequest::MetricHasBeenSet() const
{
    return m_metricHasBeenSet;
}

string DescribeDBPerfTimeSeriesRequest::GetProduct() const
{
    return m_product;
}

void DescribeDBPerfTimeSeriesRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeDBPerfTimeSeriesRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string DescribeDBPerfTimeSeriesRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeDBPerfTimeSeriesRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeDBPerfTimeSeriesRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t DescribeDBPerfTimeSeriesRequest::GetPeriod() const
{
    return m_period;
}

void DescribeDBPerfTimeSeriesRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeDBPerfTimeSeriesRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string DescribeDBPerfTimeSeriesRequest::GetInstanceNodeId() const
{
    return m_instanceNodeId;
}

void DescribeDBPerfTimeSeriesRequest::SetInstanceNodeId(const string& _instanceNodeId)
{
    m_instanceNodeId = _instanceNodeId;
    m_instanceNodeIdHasBeenSet = true;
}

bool DescribeDBPerfTimeSeriesRequest::InstanceNodeIdHasBeenSet() const
{
    return m_instanceNodeIdHasBeenSet;
}

string DescribeDBPerfTimeSeriesRequest::GetInstanceProxyId() const
{
    return m_instanceProxyId;
}

void DescribeDBPerfTimeSeriesRequest::SetInstanceProxyId(const string& _instanceProxyId)
{
    m_instanceProxyId = _instanceProxyId;
    m_instanceProxyIdHasBeenSet = true;
}

bool DescribeDBPerfTimeSeriesRequest::InstanceProxyIdHasBeenSet() const
{
    return m_instanceProxyIdHasBeenSet;
}

string DescribeDBPerfTimeSeriesRequest::GetProxyId() const
{
    return m_proxyId;
}

void DescribeDBPerfTimeSeriesRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool DescribeDBPerfTimeSeriesRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}


