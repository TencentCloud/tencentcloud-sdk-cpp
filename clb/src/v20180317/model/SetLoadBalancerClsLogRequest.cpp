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

#include <tencentcloud/clb/v20180317/model/SetLoadBalancerClsLogRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

SetLoadBalancerClsLogRequest::SetLoadBalancerClsLogRequest() :
    m_loadBalancerIdHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_logTopicIdHasBeenSet(false)
{
}

string SetLoadBalancerClsLogRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_loadBalancerIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logTopicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LogTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_logTopicId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetLoadBalancerClsLogRequest::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void SetLoadBalancerClsLogRequest::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool SetLoadBalancerClsLogRequest::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string SetLoadBalancerClsLogRequest::GetLogSetId() const
{
    return m_logSetId;
}

void SetLoadBalancerClsLogRequest::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool SetLoadBalancerClsLogRequest::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string SetLoadBalancerClsLogRequest::GetLogTopicId() const
{
    return m_logTopicId;
}

void SetLoadBalancerClsLogRequest::SetLogTopicId(const string& _logTopicId)
{
    m_logTopicId = _logTopicId;
    m_logTopicIdHasBeenSet = true;
}

bool SetLoadBalancerClsLogRequest::LogTopicIdHasBeenSet() const
{
    return m_logTopicIdHasBeenSet;
}


