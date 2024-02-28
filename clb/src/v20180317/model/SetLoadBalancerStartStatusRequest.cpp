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

#include <tencentcloud/clb/v20180317/model/SetLoadBalancerStartStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

SetLoadBalancerStartStatusRequest::SetLoadBalancerStartStatusRequest() :
    m_operationTypeHasBeenSet(false),
    m_loadBalancerIdHasBeenSet(false),
    m_listenerIdsHasBeenSet(false)
{
}

string SetLoadBalancerStartStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operationType.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_listenerIds.begin(); itr != m_listenerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetLoadBalancerStartStatusRequest::GetOperationType() const
{
    return m_operationType;
}

void SetLoadBalancerStartStatusRequest::SetOperationType(const string& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool SetLoadBalancerStartStatusRequest::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

string SetLoadBalancerStartStatusRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void SetLoadBalancerStartStatusRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool SetLoadBalancerStartStatusRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

vector<string> SetLoadBalancerStartStatusRequest::GetListenerIds() const
{
    return m_listenerIds;
}

void SetLoadBalancerStartStatusRequest::SetListenerIds(const vector<string>& _listenerIds)
{
    m_listenerIds = _listenerIds;
    m_listenerIdsHasBeenSet = true;
}

bool SetLoadBalancerStartStatusRequest::ListenerIdsHasBeenSet() const
{
    return m_listenerIdsHasBeenSet;
}


