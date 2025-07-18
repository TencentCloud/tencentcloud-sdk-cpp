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

#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerMixIpTargetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyLoadBalancerMixIpTargetRequest::ModifyLoadBalancerMixIpTargetRequest() :
    m_loadBalancerIdsHasBeenSet(false),
    m_mixIpTargetHasBeenSet(false)
{
}

string ModifyLoadBalancerMixIpTargetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loadBalancerIds.begin(); itr != m_loadBalancerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mixIpTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MixIpTarget";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mixIpTarget, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyLoadBalancerMixIpTargetRequest::GetLoadBalancerIds() const
{
    return m_loadBalancerIds;
}

void ModifyLoadBalancerMixIpTargetRequest::SetLoadBalancerIds(const vector<string>& _loadBalancerIds)
{
    m_loadBalancerIds = _loadBalancerIds;
    m_loadBalancerIdsHasBeenSet = true;
}

bool ModifyLoadBalancerMixIpTargetRequest::LoadBalancerIdsHasBeenSet() const
{
    return m_loadBalancerIdsHasBeenSet;
}

bool ModifyLoadBalancerMixIpTargetRequest::GetMixIpTarget() const
{
    return m_mixIpTarget;
}

void ModifyLoadBalancerMixIpTargetRequest::SetMixIpTarget(const bool& _mixIpTarget)
{
    m_mixIpTarget = _mixIpTarget;
    m_mixIpTargetHasBeenSet = true;
}

bool ModifyLoadBalancerMixIpTargetRequest::MixIpTargetHasBeenSet() const
{
    return m_mixIpTargetHasBeenSet;
}


