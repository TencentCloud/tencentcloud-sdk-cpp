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

#include <tencentcloud/clb/v20180317/model/CreateLoadBalancerSnatIpsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CreateLoadBalancerSnatIpsRequest::CreateLoadBalancerSnatIpsRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_snatIpsHasBeenSet(false),
    m_numberHasBeenSet(false)
{
}

string CreateLoadBalancerSnatIpsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_snatIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnatIps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_snatIps.begin(); itr != m_snatIps.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_numberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Number";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_number, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateLoadBalancerSnatIpsRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void CreateLoadBalancerSnatIpsRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool CreateLoadBalancerSnatIpsRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<SnatIp> CreateLoadBalancerSnatIpsRequest::GetSnatIps() const
{
    return m_snatIps;
}

void CreateLoadBalancerSnatIpsRequest::SetSnatIps(const vector<SnatIp>& _snatIps)
{
    m_snatIps = _snatIps;
    m_snatIpsHasBeenSet = true;
}

bool CreateLoadBalancerSnatIpsRequest::SnatIpsHasBeenSet() const
{
    return m_snatIpsHasBeenSet;
}

uint64_t CreateLoadBalancerSnatIpsRequest::GetNumber() const
{
    return m_number;
}

void CreateLoadBalancerSnatIpsRequest::SetNumber(const uint64_t& _number)
{
    m_number = _number;
    m_numberHasBeenSet = true;
}

bool CreateLoadBalancerSnatIpsRequest::NumberHasBeenSet() const
{
    return m_numberHasBeenSet;
}


