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

#include <tencentcloud/clb/v20180317/model/ModifyLoadBalancerSlaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

ModifyLoadBalancerSlaRequest::ModifyLoadBalancerSlaRequest() :
    m_loadBalancerSlaHasBeenSet(false),
    m_forceHasBeenSet(false)
{
}

string ModifyLoadBalancerSlaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerSlaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerSla";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_loadBalancerSla.begin(); itr != m_loadBalancerSla.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_forceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Force";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_force, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<SlaUpdateParam> ModifyLoadBalancerSlaRequest::GetLoadBalancerSla() const
{
    return m_loadBalancerSla;
}

void ModifyLoadBalancerSlaRequest::SetLoadBalancerSla(const vector<SlaUpdateParam>& _loadBalancerSla)
{
    m_loadBalancerSla = _loadBalancerSla;
    m_loadBalancerSlaHasBeenSet = true;
}

bool ModifyLoadBalancerSlaRequest::LoadBalancerSlaHasBeenSet() const
{
    return m_loadBalancerSlaHasBeenSet;
}

bool ModifyLoadBalancerSlaRequest::GetForce() const
{
    return m_force;
}

void ModifyLoadBalancerSlaRequest::SetForce(const bool& _force)
{
    m_force = _force;
    m_forceHasBeenSet = true;
}

bool ModifyLoadBalancerSlaRequest::ForceHasBeenSet() const
{
    return m_forceHasBeenSet;
}


