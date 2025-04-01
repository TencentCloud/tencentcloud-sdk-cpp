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

#include <tencentcloud/vpc/v20170312/model/DescribeNatGatewayFlowMonitorDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeNatGatewayFlowMonitorDetailRequest::DescribeNatGatewayFlowMonitorDetailRequest() :
    m_timePointHasBeenSet(false),
    m_natGatewayIdHasBeenSet(false),
    m_topNHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_aggregationTimeRangeHasBeenSet(false),
    m_allMetricModeHasBeenSet(false)
{
}

string DescribeNatGatewayFlowMonitorDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_timePointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimePoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timePoint.c_str(), allocator).Move(), allocator);
    }

    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_topNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopN";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topN, allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_aggregationTimeRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AggregationTimeRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_aggregationTimeRange, allocator);
    }

    if (m_allMetricModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllMetricMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_allMetricMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeNatGatewayFlowMonitorDetailRequest::GetTimePoint() const
{
    return m_timePoint;
}

void DescribeNatGatewayFlowMonitorDetailRequest::SetTimePoint(const string& _timePoint)
{
    m_timePoint = _timePoint;
    m_timePointHasBeenSet = true;
}

bool DescribeNatGatewayFlowMonitorDetailRequest::TimePointHasBeenSet() const
{
    return m_timePointHasBeenSet;
}

string DescribeNatGatewayFlowMonitorDetailRequest::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void DescribeNatGatewayFlowMonitorDetailRequest::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool DescribeNatGatewayFlowMonitorDetailRequest::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

int64_t DescribeNatGatewayFlowMonitorDetailRequest::GetTopN() const
{
    return m_topN;
}

void DescribeNatGatewayFlowMonitorDetailRequest::SetTopN(const int64_t& _topN)
{
    m_topN = _topN;
    m_topNHasBeenSet = true;
}

bool DescribeNatGatewayFlowMonitorDetailRequest::TopNHasBeenSet() const
{
    return m_topNHasBeenSet;
}

string DescribeNatGatewayFlowMonitorDetailRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeNatGatewayFlowMonitorDetailRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeNatGatewayFlowMonitorDetailRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

int64_t DescribeNatGatewayFlowMonitorDetailRequest::GetAggregationTimeRange() const
{
    return m_aggregationTimeRange;
}

void DescribeNatGatewayFlowMonitorDetailRequest::SetAggregationTimeRange(const int64_t& _aggregationTimeRange)
{
    m_aggregationTimeRange = _aggregationTimeRange;
    m_aggregationTimeRangeHasBeenSet = true;
}

bool DescribeNatGatewayFlowMonitorDetailRequest::AggregationTimeRangeHasBeenSet() const
{
    return m_aggregationTimeRangeHasBeenSet;
}

bool DescribeNatGatewayFlowMonitorDetailRequest::GetAllMetricMode() const
{
    return m_allMetricMode;
}

void DescribeNatGatewayFlowMonitorDetailRequest::SetAllMetricMode(const bool& _allMetricMode)
{
    m_allMetricMode = _allMetricMode;
    m_allMetricModeHasBeenSet = true;
}

bool DescribeNatGatewayFlowMonitorDetailRequest::AllMetricModeHasBeenSet() const
{
    return m_allMetricModeHasBeenSet;
}


