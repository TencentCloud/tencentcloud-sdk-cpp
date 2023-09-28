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

#include <tencentcloud/vpc/v20170312/model/ModifyVpcPeeringConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyVpcPeeringConnectionRequest::ModifyVpcPeeringConnectionRequest() :
    m_peeringConnectionIdHasBeenSet(false),
    m_peeringConnectionNameHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_chargeTypeHasBeenSet(false)
{
}

string ModifyVpcPeeringConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_peeringConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeeringConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peeringConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_peeringConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeeringConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peeringConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_chargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chargeType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVpcPeeringConnectionRequest::GetPeeringConnectionId() const
{
    return m_peeringConnectionId;
}

void ModifyVpcPeeringConnectionRequest::SetPeeringConnectionId(const string& _peeringConnectionId)
{
    m_peeringConnectionId = _peeringConnectionId;
    m_peeringConnectionIdHasBeenSet = true;
}

bool ModifyVpcPeeringConnectionRequest::PeeringConnectionIdHasBeenSet() const
{
    return m_peeringConnectionIdHasBeenSet;
}

string ModifyVpcPeeringConnectionRequest::GetPeeringConnectionName() const
{
    return m_peeringConnectionName;
}

void ModifyVpcPeeringConnectionRequest::SetPeeringConnectionName(const string& _peeringConnectionName)
{
    m_peeringConnectionName = _peeringConnectionName;
    m_peeringConnectionNameHasBeenSet = true;
}

bool ModifyVpcPeeringConnectionRequest::PeeringConnectionNameHasBeenSet() const
{
    return m_peeringConnectionNameHasBeenSet;
}

int64_t ModifyVpcPeeringConnectionRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyVpcPeeringConnectionRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyVpcPeeringConnectionRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string ModifyVpcPeeringConnectionRequest::GetChargeType() const
{
    return m_chargeType;
}

void ModifyVpcPeeringConnectionRequest::SetChargeType(const string& _chargeType)
{
    m_chargeType = _chargeType;
    m_chargeTypeHasBeenSet = true;
}

bool ModifyVpcPeeringConnectionRequest::ChargeTypeHasBeenSet() const
{
    return m_chargeTypeHasBeenSet;
}


