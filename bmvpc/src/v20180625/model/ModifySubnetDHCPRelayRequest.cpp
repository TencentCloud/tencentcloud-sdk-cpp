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

#include <tencentcloud/bmvpc/v20180625/model/ModifySubnetDHCPRelayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

ModifySubnetDHCPRelayRequest::ModifySubnetDHCPRelayRequest() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_enableDHCPHasBeenSet(false),
    m_serverIpsHasBeenSet(false),
    m_reservedIpCountHasBeenSet(false)
{
}

string ModifySubnetDHCPRelayRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableDHCPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableDHCP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableDHCP, allocator);
    }

    if (m_serverIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serverIps.begin(); itr != m_serverIps.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_reservedIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedIpCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_reservedIpCount, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySubnetDHCPRelayRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifySubnetDHCPRelayRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifySubnetDHCPRelayRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifySubnetDHCPRelayRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ModifySubnetDHCPRelayRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModifySubnetDHCPRelayRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

bool ModifySubnetDHCPRelayRequest::GetEnableDHCP() const
{
    return m_enableDHCP;
}

void ModifySubnetDHCPRelayRequest::SetEnableDHCP(const bool& _enableDHCP)
{
    m_enableDHCP = _enableDHCP;
    m_enableDHCPHasBeenSet = true;
}

bool ModifySubnetDHCPRelayRequest::EnableDHCPHasBeenSet() const
{
    return m_enableDHCPHasBeenSet;
}

vector<string> ModifySubnetDHCPRelayRequest::GetServerIps() const
{
    return m_serverIps;
}

void ModifySubnetDHCPRelayRequest::SetServerIps(const vector<string>& _serverIps)
{
    m_serverIps = _serverIps;
    m_serverIpsHasBeenSet = true;
}

bool ModifySubnetDHCPRelayRequest::ServerIpsHasBeenSet() const
{
    return m_serverIpsHasBeenSet;
}

uint64_t ModifySubnetDHCPRelayRequest::GetReservedIpCount() const
{
    return m_reservedIpCount;
}

void ModifySubnetDHCPRelayRequest::SetReservedIpCount(const uint64_t& _reservedIpCount)
{
    m_reservedIpCount = _reservedIpCount;
    m_reservedIpCountHasBeenSet = true;
}

bool ModifySubnetDHCPRelayRequest::ReservedIpCountHasBeenSet() const
{
    return m_reservedIpCountHasBeenSet;
}


