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

#include <tencentcloud/vpc/v20170312/model/ModifyNatGatewayAdvancedAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyNatGatewayAdvancedAttributeRequest::ModifyNatGatewayAdvancedAttributeRequest() :
    m_natGatewayIdHasBeenSet(false),
    m_uDPMappingTimeoutHasBeenSet(false),
    m_tCPEstablishedConnectionTimeoutHasBeenSet(false),
    m_tCPTimeWaitTimeoutHasBeenSet(false)
{
}

string ModifyNatGatewayAdvancedAttributeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_natGatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NatGatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_natGatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_uDPMappingTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UDPMappingTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_uDPMappingTimeout, allocator);
    }

    if (m_tCPEstablishedConnectionTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCPEstablishedConnectionTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tCPEstablishedConnectionTimeout, allocator);
    }

    if (m_tCPTimeWaitTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCPTimeWaitTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tCPTimeWaitTimeout, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyNatGatewayAdvancedAttributeRequest::GetNatGatewayId() const
{
    return m_natGatewayId;
}

void ModifyNatGatewayAdvancedAttributeRequest::SetNatGatewayId(const string& _natGatewayId)
{
    m_natGatewayId = _natGatewayId;
    m_natGatewayIdHasBeenSet = true;
}

bool ModifyNatGatewayAdvancedAttributeRequest::NatGatewayIdHasBeenSet() const
{
    return m_natGatewayIdHasBeenSet;
}

uint64_t ModifyNatGatewayAdvancedAttributeRequest::GetUDPMappingTimeout() const
{
    return m_uDPMappingTimeout;
}

void ModifyNatGatewayAdvancedAttributeRequest::SetUDPMappingTimeout(const uint64_t& _uDPMappingTimeout)
{
    m_uDPMappingTimeout = _uDPMappingTimeout;
    m_uDPMappingTimeoutHasBeenSet = true;
}

bool ModifyNatGatewayAdvancedAttributeRequest::UDPMappingTimeoutHasBeenSet() const
{
    return m_uDPMappingTimeoutHasBeenSet;
}

uint64_t ModifyNatGatewayAdvancedAttributeRequest::GetTCPEstablishedConnectionTimeout() const
{
    return m_tCPEstablishedConnectionTimeout;
}

void ModifyNatGatewayAdvancedAttributeRequest::SetTCPEstablishedConnectionTimeout(const uint64_t& _tCPEstablishedConnectionTimeout)
{
    m_tCPEstablishedConnectionTimeout = _tCPEstablishedConnectionTimeout;
    m_tCPEstablishedConnectionTimeoutHasBeenSet = true;
}

bool ModifyNatGatewayAdvancedAttributeRequest::TCPEstablishedConnectionTimeoutHasBeenSet() const
{
    return m_tCPEstablishedConnectionTimeoutHasBeenSet;
}

uint64_t ModifyNatGatewayAdvancedAttributeRequest::GetTCPTimeWaitTimeout() const
{
    return m_tCPTimeWaitTimeout;
}

void ModifyNatGatewayAdvancedAttributeRequest::SetTCPTimeWaitTimeout(const uint64_t& _tCPTimeWaitTimeout)
{
    m_tCPTimeWaitTimeout = _tCPTimeWaitTimeout;
    m_tCPTimeWaitTimeoutHasBeenSet = true;
}

bool ModifyNatGatewayAdvancedAttributeRequest::TCPTimeWaitTimeoutHasBeenSet() const
{
    return m_tCPTimeWaitTimeoutHasBeenSet;
}


