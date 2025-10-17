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

#include <tencentcloud/privatedns/v20201028/model/CreateInboundEndpointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

CreateInboundEndpointRequest::CreateInboundEndpointRequest() :
    m_endpointNameHasBeenSet(false),
    m_endpointRegionHasBeenSet(false),
    m_endpointVpcHasBeenSet(false),
    m_subnetIpHasBeenSet(false)
{
}

string CreateInboundEndpointRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endpointNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointName.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndpointVpc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpointVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subnetIp.begin(); itr != m_subnetIp.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInboundEndpointRequest::GetEndpointName() const
{
    return m_endpointName;
}

void CreateInboundEndpointRequest::SetEndpointName(const string& _endpointName)
{
    m_endpointName = _endpointName;
    m_endpointNameHasBeenSet = true;
}

bool CreateInboundEndpointRequest::EndpointNameHasBeenSet() const
{
    return m_endpointNameHasBeenSet;
}

string CreateInboundEndpointRequest::GetEndpointRegion() const
{
    return m_endpointRegion;
}

void CreateInboundEndpointRequest::SetEndpointRegion(const string& _endpointRegion)
{
    m_endpointRegion = _endpointRegion;
    m_endpointRegionHasBeenSet = true;
}

bool CreateInboundEndpointRequest::EndpointRegionHasBeenSet() const
{
    return m_endpointRegionHasBeenSet;
}

string CreateInboundEndpointRequest::GetEndpointVpc() const
{
    return m_endpointVpc;
}

void CreateInboundEndpointRequest::SetEndpointVpc(const string& _endpointVpc)
{
    m_endpointVpc = _endpointVpc;
    m_endpointVpcHasBeenSet = true;
}

bool CreateInboundEndpointRequest::EndpointVpcHasBeenSet() const
{
    return m_endpointVpcHasBeenSet;
}

vector<SubnetIpInfo> CreateInboundEndpointRequest::GetSubnetIp() const
{
    return m_subnetIp;
}

void CreateInboundEndpointRequest::SetSubnetIp(const vector<SubnetIpInfo>& _subnetIp)
{
    m_subnetIp = _subnetIp;
    m_subnetIpHasBeenSet = true;
}

bool CreateInboundEndpointRequest::SubnetIpHasBeenSet() const
{
    return m_subnetIpHasBeenSet;
}


