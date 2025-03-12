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

#include <tencentcloud/clb/v20180317/model/DeleteLoadBalancerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DeleteLoadBalancerRequest::DeleteLoadBalancerRequest() :
    m_loadBalancerIdsHasBeenSet(false),
    m_forceDeleteHasBeenSet(false)
{
}

string DeleteLoadBalancerRequest::ToJsonString() const
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

    if (m_forceDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceDelete, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DeleteLoadBalancerRequest::GetLoadBalancerIds() const
{
    return m_loadBalancerIds;
}

void DeleteLoadBalancerRequest::SetLoadBalancerIds(const vector<string>& _loadBalancerIds)
{
    m_loadBalancerIds = _loadBalancerIds;
    m_loadBalancerIdsHasBeenSet = true;
}

bool DeleteLoadBalancerRequest::LoadBalancerIdsHasBeenSet() const
{
    return m_loadBalancerIdsHasBeenSet;
}

bool DeleteLoadBalancerRequest::GetForceDelete() const
{
    return m_forceDelete;
}

void DeleteLoadBalancerRequest::SetForceDelete(const bool& _forceDelete)
{
    m_forceDelete = _forceDelete;
    m_forceDeleteHasBeenSet = true;
}

bool DeleteLoadBalancerRequest::ForceDeleteHasBeenSet() const
{
    return m_forceDeleteHasBeenSet;
}


