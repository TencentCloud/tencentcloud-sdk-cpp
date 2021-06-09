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

#include <tencentcloud/bmvpc/v20180625/model/CreateVpcPeerConnectionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmvpc::V20180625::Model;
using namespace std;

CreateVpcPeerConnectionRequest::CreateVpcPeerConnectionRequest() :
    m_vpcIdHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false),
    m_peerRegionHasBeenSet(false),
    m_vpcPeerConnectionNameHasBeenSet(false),
    m_peerUinHasBeenSet(false),
    m_bandwidthHasBeenSet(false)
{
}

string CreateVpcPeerConnectionRequest::ToJsonString() const
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

    if (m_peerVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_peerRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcPeerConnectionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcPeerConnectionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcPeerConnectionName.c_str(), allocator).Move(), allocator);
    }

    if (m_peerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVpcPeerConnectionRequest::GetVpcId() const
{
    return m_vpcId;
}

void CreateVpcPeerConnectionRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CreateVpcPeerConnectionRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CreateVpcPeerConnectionRequest::GetPeerVpcId() const
{
    return m_peerVpcId;
}

void CreateVpcPeerConnectionRequest::SetPeerVpcId(const string& _peerVpcId)
{
    m_peerVpcId = _peerVpcId;
    m_peerVpcIdHasBeenSet = true;
}

bool CreateVpcPeerConnectionRequest::PeerVpcIdHasBeenSet() const
{
    return m_peerVpcIdHasBeenSet;
}

string CreateVpcPeerConnectionRequest::GetPeerRegion() const
{
    return m_peerRegion;
}

void CreateVpcPeerConnectionRequest::SetPeerRegion(const string& _peerRegion)
{
    m_peerRegion = _peerRegion;
    m_peerRegionHasBeenSet = true;
}

bool CreateVpcPeerConnectionRequest::PeerRegionHasBeenSet() const
{
    return m_peerRegionHasBeenSet;
}

string CreateVpcPeerConnectionRequest::GetVpcPeerConnectionName() const
{
    return m_vpcPeerConnectionName;
}

void CreateVpcPeerConnectionRequest::SetVpcPeerConnectionName(const string& _vpcPeerConnectionName)
{
    m_vpcPeerConnectionName = _vpcPeerConnectionName;
    m_vpcPeerConnectionNameHasBeenSet = true;
}

bool CreateVpcPeerConnectionRequest::VpcPeerConnectionNameHasBeenSet() const
{
    return m_vpcPeerConnectionNameHasBeenSet;
}

string CreateVpcPeerConnectionRequest::GetPeerUin() const
{
    return m_peerUin;
}

void CreateVpcPeerConnectionRequest::SetPeerUin(const string& _peerUin)
{
    m_peerUin = _peerUin;
    m_peerUinHasBeenSet = true;
}

bool CreateVpcPeerConnectionRequest::PeerUinHasBeenSet() const
{
    return m_peerUinHasBeenSet;
}

uint64_t CreateVpcPeerConnectionRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateVpcPeerConnectionRequest::SetBandwidth(const uint64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateVpcPeerConnectionRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}


