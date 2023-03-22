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

#include <tencentcloud/tcb/v20180608/model/DescribeGatewayCurveDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeGatewayCurveDataRequest::DescribeGatewayCurveDataRequest() :
    m_envIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_gatewayVersionHasBeenSet(false),
    m_gatewayRouteHasBeenSet(false)
{
}

string DescribeGatewayCurveDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
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

    if (m_gatewayVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayRouteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayRoute";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayRoute.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGatewayCurveDataRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeGatewayCurveDataRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeGatewayCurveDataRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeGatewayCurveDataRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeGatewayCurveDataRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeGatewayCurveDataRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DescribeGatewayCurveDataRequest::GetMetricName() const
{
    return m_metricName;
}

void DescribeGatewayCurveDataRequest::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool DescribeGatewayCurveDataRequest::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string DescribeGatewayCurveDataRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeGatewayCurveDataRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeGatewayCurveDataRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeGatewayCurveDataRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeGatewayCurveDataRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeGatewayCurveDataRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeGatewayCurveDataRequest::GetGatewayVersion() const
{
    return m_gatewayVersion;
}

void DescribeGatewayCurveDataRequest::SetGatewayVersion(const string& _gatewayVersion)
{
    m_gatewayVersion = _gatewayVersion;
    m_gatewayVersionHasBeenSet = true;
}

bool DescribeGatewayCurveDataRequest::GatewayVersionHasBeenSet() const
{
    return m_gatewayVersionHasBeenSet;
}

string DescribeGatewayCurveDataRequest::GetGatewayRoute() const
{
    return m_gatewayRoute;
}

void DescribeGatewayCurveDataRequest::SetGatewayRoute(const string& _gatewayRoute)
{
    m_gatewayRoute = _gatewayRoute;
    m_gatewayRouteHasBeenSet = true;
}

bool DescribeGatewayCurveDataRequest::GatewayRouteHasBeenSet() const
{
    return m_gatewayRouteHasBeenSet;
}


