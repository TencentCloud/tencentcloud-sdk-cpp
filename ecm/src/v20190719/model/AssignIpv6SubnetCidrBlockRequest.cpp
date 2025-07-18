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

#include <tencentcloud/ecm/v20190719/model/AssignIpv6SubnetCidrBlockRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

AssignIpv6SubnetCidrBlockRequest::AssignIpv6SubnetCidrBlockRequest() :
    m_vpcIdHasBeenSet(false),
    m_ipv6SubnetCidrBlocksHasBeenSet(false),
    m_ecmRegionHasBeenSet(false)
{
}

string AssignIpv6SubnetCidrBlockRequest::ToJsonString() const
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

    if (m_ipv6SubnetCidrBlocksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ipv6SubnetCidrBlocks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ipv6SubnetCidrBlocks.begin(); itr != m_ipv6SubnetCidrBlocks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ecmRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EcmRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ecmRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AssignIpv6SubnetCidrBlockRequest::GetVpcId() const
{
    return m_vpcId;
}

void AssignIpv6SubnetCidrBlockRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AssignIpv6SubnetCidrBlockRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<Ipv6SubnetCidrBlock> AssignIpv6SubnetCidrBlockRequest::GetIpv6SubnetCidrBlocks() const
{
    return m_ipv6SubnetCidrBlocks;
}

void AssignIpv6SubnetCidrBlockRequest::SetIpv6SubnetCidrBlocks(const vector<Ipv6SubnetCidrBlock>& _ipv6SubnetCidrBlocks)
{
    m_ipv6SubnetCidrBlocks = _ipv6SubnetCidrBlocks;
    m_ipv6SubnetCidrBlocksHasBeenSet = true;
}

bool AssignIpv6SubnetCidrBlockRequest::Ipv6SubnetCidrBlocksHasBeenSet() const
{
    return m_ipv6SubnetCidrBlocksHasBeenSet;
}

string AssignIpv6SubnetCidrBlockRequest::GetEcmRegion() const
{
    return m_ecmRegion;
}

void AssignIpv6SubnetCidrBlockRequest::SetEcmRegion(const string& _ecmRegion)
{
    m_ecmRegion = _ecmRegion;
    m_ecmRegionHasBeenSet = true;
}

bool AssignIpv6SubnetCidrBlockRequest::EcmRegionHasBeenSet() const
{
    return m_ecmRegionHasBeenSet;
}


