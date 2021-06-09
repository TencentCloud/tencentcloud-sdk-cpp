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

#include <tencentcloud/bmvpc/v20180625/model/ModifyVpcPeerConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

ModifyVpcPeerConnectionRequest::ModifyVpcPeerConnectionRequest() :
    m_vpcPeerConnectionIdHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_vpcPeerConnectionNameHasBeenSet(false)
{
}

string ModifyVpcPeerConnectionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcPeerConnectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcPeerConnectionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcPeerConnectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_vpcPeerConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcPeerConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcPeerConnectionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyVpcPeerConnectionRequest::GetVpcPeerConnectionId() const
{
    return m_vpcPeerConnectionId;
}

void ModifyVpcPeerConnectionRequest::SetVpcPeerConnectionId(const string& _vpcPeerConnectionId)
{
    m_vpcPeerConnectionId = _vpcPeerConnectionId;
    m_vpcPeerConnectionIdHasBeenSet = true;
}

bool ModifyVpcPeerConnectionRequest::VpcPeerConnectionIdHasBeenSet() const
{
    return m_vpcPeerConnectionIdHasBeenSet;
}

uint64_t ModifyVpcPeerConnectionRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void ModifyVpcPeerConnectionRequest::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool ModifyVpcPeerConnectionRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

string ModifyVpcPeerConnectionRequest::GetVpcPeerConnectionName() const
{
    return m_vpcPeerConnectionName;
}

void ModifyVpcPeerConnectionRequest::SetVpcPeerConnectionName(const string& _vpcPeerConnectionName)
{
    m_vpcPeerConnectionName = _vpcPeerConnectionName;
    m_vpcPeerConnectionNameHasBeenSet = true;
}

bool ModifyVpcPeerConnectionRequest::VpcPeerConnectionNameHasBeenSet() const
{
    return m_vpcPeerConnectionNameHasBeenSet;
}


