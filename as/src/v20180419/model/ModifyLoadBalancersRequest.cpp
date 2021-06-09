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

#include <tencentcloud/as/v20180419/model/ModifyLoadBalancersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::As::V20180419::Model;
using namespace std;

ModifyLoadBalancersRequest::ModifyLoadBalancersRequest() :
    m_autoScalingGroupIdHasBeenSet(false),
    m_loadBalancerIdsHasBeenSet(false),
    m_forwardLoadBalancersHasBeenSet(false),
    m_loadBalancersCheckPolicyHasBeenSet(false)
{
}

string ModifyLoadBalancersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_autoScalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoScalingGroupId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_forwardLoadBalancersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardLoadBalancers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_forwardLoadBalancers.begin(); itr != m_forwardLoadBalancers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_loadBalancersCheckPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancersCheckPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancersCheckPolicy.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLoadBalancersRequest::GetAutoScalingGroupId() const
{
    return m_autoScalingGroupId;
}

void ModifyLoadBalancersRequest::SetAutoScalingGroupId(const string& _autoScalingGroupId)
{
    m_autoScalingGroupId = _autoScalingGroupId;
    m_autoScalingGroupIdHasBeenSet = true;
}

bool ModifyLoadBalancersRequest::AutoScalingGroupIdHasBeenSet() const
{
    return m_autoScalingGroupIdHasBeenSet;
}

vector<string> ModifyLoadBalancersRequest::GetLoadBalancerIds() const
{
    return m_loadBalancerIds;
}

void ModifyLoadBalancersRequest::SetLoadBalancerIds(const vector<string>& _loadBalancerIds)
{
    m_loadBalancerIds = _loadBalancerIds;
    m_loadBalancerIdsHasBeenSet = true;
}

bool ModifyLoadBalancersRequest::LoadBalancerIdsHasBeenSet() const
{
    return m_loadBalancerIdsHasBeenSet;
}

vector<ForwardLoadBalancer> ModifyLoadBalancersRequest::GetForwardLoadBalancers() const
{
    return m_forwardLoadBalancers;
}

void ModifyLoadBalancersRequest::SetForwardLoadBalancers(const vector<ForwardLoadBalancer>& _forwardLoadBalancers)
{
    m_forwardLoadBalancers = _forwardLoadBalancers;
    m_forwardLoadBalancersHasBeenSet = true;
}

bool ModifyLoadBalancersRequest::ForwardLoadBalancersHasBeenSet() const
{
    return m_forwardLoadBalancersHasBeenSet;
}

string ModifyLoadBalancersRequest::GetLoadBalancersCheckPolicy() const
{
    return m_loadBalancersCheckPolicy;
}

void ModifyLoadBalancersRequest::SetLoadBalancersCheckPolicy(const string& _loadBalancersCheckPolicy)
{
    m_loadBalancersCheckPolicy = _loadBalancersCheckPolicy;
    m_loadBalancersCheckPolicyHasBeenSet = true;
}

bool ModifyLoadBalancersRequest::LoadBalancersCheckPolicyHasBeenSet() const
{
    return m_loadBalancersCheckPolicyHasBeenSet;
}


