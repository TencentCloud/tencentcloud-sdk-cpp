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

#include <tencentcloud/teo/v20220901/model/ModifyMultiPathGatewayLineRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyMultiPathGatewayLineRequest::ModifyMultiPathGatewayLineRequest() :
    m_zoneIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_lineIdHasBeenSet(false),
    m_lineTypeHasBeenSet(false),
    m_lineAddressHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string ModifyMultiPathGatewayLineRequest::ToJsonString() const
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

    if (m_lineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lineId.c_str(), allocator).Move(), allocator);
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


string ModifyMultiPathGatewayLineRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyMultiPathGatewayLineRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyMultiPathGatewayLineRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyMultiPathGatewayLineRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyMultiPathGatewayLineRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyMultiPathGatewayLineRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string ModifyMultiPathGatewayLineRequest::GetLineId() const
{
    return m_lineId;
}

void ModifyMultiPathGatewayLineRequest::SetLineId(const string& _lineId)
{
    m_lineId = _lineId;
    m_lineIdHasBeenSet = true;
}

bool ModifyMultiPathGatewayLineRequest::LineIdHasBeenSet() const
{
    return m_lineIdHasBeenSet;
}

string ModifyMultiPathGatewayLineRequest::GetLineType() const
{
    return m_lineType;
}

void ModifyMultiPathGatewayLineRequest::SetLineType(const string& _lineType)
{
    m_lineType = _lineType;
    m_lineTypeHasBeenSet = true;
}

bool ModifyMultiPathGatewayLineRequest::LineTypeHasBeenSet() const
{
    return m_lineTypeHasBeenSet;
}

string ModifyMultiPathGatewayLineRequest::GetLineAddress() const
{
    return m_lineAddress;
}

void ModifyMultiPathGatewayLineRequest::SetLineAddress(const string& _lineAddress)
{
    m_lineAddress = _lineAddress;
    m_lineAddressHasBeenSet = true;
}

bool ModifyMultiPathGatewayLineRequest::LineAddressHasBeenSet() const
{
    return m_lineAddressHasBeenSet;
}

string ModifyMultiPathGatewayLineRequest::GetProxyId() const
{
    return m_proxyId;
}

void ModifyMultiPathGatewayLineRequest::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool ModifyMultiPathGatewayLineRequest::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string ModifyMultiPathGatewayLineRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyMultiPathGatewayLineRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyMultiPathGatewayLineRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


