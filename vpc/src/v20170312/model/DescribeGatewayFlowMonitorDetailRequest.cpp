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

#include <tencentcloud/vpc/v20170312/model/DescribeGatewayFlowMonitorDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeGatewayFlowMonitorDetailRequest::DescribeGatewayFlowMonitorDetailRequest() :
    m_timePointHasBeenSet(false),
    m_vpnIdHasBeenSet(false),
    m_directConnectGatewayIdHasBeenSet(false),
    m_peeringConnectionIdHasBeenSet(false),
    m_natIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false)
{
}

string DescribeGatewayFlowMonitorDetailRequest::ToJsonString() const
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

    if (m_vpnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpnId.c_str(), allocator).Move(), allocator);
    }

    if (m_directConnectGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectConnectGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_directConnectGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_peeringConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeeringConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peeringConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_natIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natId.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_privateIpAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateIpAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_privateIpAddress.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeGatewayFlowMonitorDetailRequest::GetTimePoint() const
{
    return m_timePoint;
}

void DescribeGatewayFlowMonitorDetailRequest::SetTimePoint(const string& _timePoint)
{
    m_timePoint = _timePoint;
    m_timePointHasBeenSet = true;
}

bool DescribeGatewayFlowMonitorDetailRequest::TimePointHasBeenSet() const
{
    return m_timePointHasBeenSet;
}

string DescribeGatewayFlowMonitorDetailRequest::GetVpnId() const
{
    return m_vpnId;
}

void DescribeGatewayFlowMonitorDetailRequest::SetVpnId(const string& _vpnId)
{
    m_vpnId = _vpnId;
    m_vpnIdHasBeenSet = true;
}

bool DescribeGatewayFlowMonitorDetailRequest::VpnIdHasBeenSet() const
{
    return m_vpnIdHasBeenSet;
}

string DescribeGatewayFlowMonitorDetailRequest::GetDirectConnectGatewayId() const
{
    return m_directConnectGatewayId;
}

void DescribeGatewayFlowMonitorDetailRequest::SetDirectConnectGatewayId(const string& _directConnectGatewayId)
{
    m_directConnectGatewayId = _directConnectGatewayId;
    m_directConnectGatewayIdHasBeenSet = true;
}

bool DescribeGatewayFlowMonitorDetailRequest::DirectConnectGatewayIdHasBeenSet() const
{
    return m_directConnectGatewayIdHasBeenSet;
}

string DescribeGatewayFlowMonitorDetailRequest::GetPeeringConnectionId() const
{
    return m_peeringConnectionId;
}

void DescribeGatewayFlowMonitorDetailRequest::SetPeeringConnectionId(const string& _peeringConnectionId)
{
    m_peeringConnectionId = _peeringConnectionId;
    m_peeringConnectionIdHasBeenSet = true;
}

bool DescribeGatewayFlowMonitorDetailRequest::PeeringConnectionIdHasBeenSet() const
{
    return m_peeringConnectionIdHasBeenSet;
}

string DescribeGatewayFlowMonitorDetailRequest::GetNatId() const
{
    return m_natId;
}

void DescribeGatewayFlowMonitorDetailRequest::SetNatId(const string& _natId)
{
    m_natId = _natId;
    m_natIdHasBeenSet = true;
}

bool DescribeGatewayFlowMonitorDetailRequest::NatIdHasBeenSet() const
{
    return m_natIdHasBeenSet;
}

uint64_t DescribeGatewayFlowMonitorDetailRequest::GetOffset() const
{
    return m_offset;
}

void DescribeGatewayFlowMonitorDetailRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeGatewayFlowMonitorDetailRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeGatewayFlowMonitorDetailRequest::GetLimit() const
{
    return m_limit;
}

void DescribeGatewayFlowMonitorDetailRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeGatewayFlowMonitorDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeGatewayFlowMonitorDetailRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeGatewayFlowMonitorDetailRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeGatewayFlowMonitorDetailRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

string DescribeGatewayFlowMonitorDetailRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeGatewayFlowMonitorDetailRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeGatewayFlowMonitorDetailRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

string DescribeGatewayFlowMonitorDetailRequest::GetPrivateIpAddress() const
{
    return m_privateIpAddress;
}

void DescribeGatewayFlowMonitorDetailRequest::SetPrivateIpAddress(const string& _privateIpAddress)
{
    m_privateIpAddress = _privateIpAddress;
    m_privateIpAddressHasBeenSet = true;
}

bool DescribeGatewayFlowMonitorDetailRequest::PrivateIpAddressHasBeenSet() const
{
    return m_privateIpAddressHasBeenSet;
}


