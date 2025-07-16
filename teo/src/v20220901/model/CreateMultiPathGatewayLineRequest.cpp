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

#include <tencentcloud/teo/v20220901/model/CreateMultiPathGatewayLineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CreateMultiPathGatewayLineRequest::CreateMultiPathGatewayLineRequest() :
    m_zoneIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_lineTypeHasBeenSet(false),
    m_lineAddressHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string CreateMultiPathGatewayLineRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_lineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lineType.c_str(), allocator).Move(), allocator);
    }

    if (m_lineAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lineAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMultiPathGatewayLineRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateMultiPathGatewayLineRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateMultiPathGatewayLineRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateMultiPathGatewayLineRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void CreateMultiPathGatewayLineRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool CreateMultiPathGatewayLineRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string CreateMultiPathGatewayLineRequest::GetLineType() const
{
    return m_lineType;
}

void CreateMultiPathGatewayLineRequest::SetLineType(const string& _lineType)
{
    m_lineType = _lineType;
    m_lineTypeHasBeenSet = true;
}

bool CreateMultiPathGatewayLineRequest::LineTypeHasBeenSet() const
{
    return m_lineTypeHasBeenSet;
}

string CreateMultiPathGatewayLineRequest::GetLineAddress() const
{
    return m_lineAddress;
}

void CreateMultiPathGatewayLineRequest::SetLineAddress(const string& _lineAddress)
{
    m_lineAddress = _lineAddress;
    m_lineAddressHasBeenSet = true;
}

bool CreateMultiPathGatewayLineRequest::LineAddressHasBeenSet() const
{
    return m_lineAddressHasBeenSet;
}

string CreateMultiPathGatewayLineRequest::GetProxyId() const
{
    return m_proxyId;
}

void CreateMultiPathGatewayLineRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool CreateMultiPathGatewayLineRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string CreateMultiPathGatewayLineRequest::GetRuleId() const
{
    return m_ruleId;
}

void CreateMultiPathGatewayLineRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CreateMultiPathGatewayLineRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


