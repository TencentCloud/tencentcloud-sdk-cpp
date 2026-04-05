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

#include <tencentcloud/ga2/v20250115/model/DeleteForwardingRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ga2::V20250115::Model;
using namespace std;

DeleteForwardingRuleRequest::DeleteForwardingRuleRequest() :
    m_globalAcceleratorIdHasBeenSet(false),
    m_listenerIdHasBeenSet(false),
    m_forwardingPolicyIdHasBeenSet(false),
    m_forwardingRuleIdHasBeenSet(false)
{
}

string DeleteForwardingRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_globalAcceleratorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalAcceleratorId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalAcceleratorId.c_str(), allocator).Move(), allocator);
    }

    if (m_listenerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ListenerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_listenerId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardingPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardingPolicyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardingPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_forwardingRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardingRuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_forwardingRuleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteForwardingRuleRequest::GetGlobalAcceleratorId() const
{
    return m_globalAcceleratorId;
}

void DeleteForwardingRuleRequest::SetGlobalAcceleratorId(const string& _globalAcceleratorId)
{
    m_globalAcceleratorId = _globalAcceleratorId;
    m_globalAcceleratorIdHasBeenSet = true;
}

bool DeleteForwardingRuleRequest::GlobalAcceleratorIdHasBeenSet() const
{
    return m_globalAcceleratorIdHasBeenSet;
}

string DeleteForwardingRuleRequest::GetListenerId() const
{
    return m_listenerId;
}

void DeleteForwardingRuleRequest::SetListenerId(const string& _listenerId)
{
    m_listenerId = _listenerId;
    m_listenerIdHasBeenSet = true;
}

bool DeleteForwardingRuleRequest::ListenerIdHasBeenSet() const
{
    return m_listenerIdHasBeenSet;
}

string DeleteForwardingRuleRequest::GetForwardingPolicyId() const
{
    return m_forwardingPolicyId;
}

void DeleteForwardingRuleRequest::SetForwardingPolicyId(const string& _forwardingPolicyId)
{
    m_forwardingPolicyId = _forwardingPolicyId;
    m_forwardingPolicyIdHasBeenSet = true;
}

bool DeleteForwardingRuleRequest::ForwardingPolicyIdHasBeenSet() const
{
    return m_forwardingPolicyIdHasBeenSet;
}

string DeleteForwardingRuleRequest::GetForwardingRuleId() const
{
    return m_forwardingRuleId;
}

void DeleteForwardingRuleRequest::SetForwardingRuleId(const string& _forwardingRuleId)
{
    m_forwardingRuleId = _forwardingRuleId;
    m_forwardingRuleIdHasBeenSet = true;
}

bool DeleteForwardingRuleRequest::ForwardingRuleIdHasBeenSet() const
{
    return m_forwardingRuleIdHasBeenSet;
}


