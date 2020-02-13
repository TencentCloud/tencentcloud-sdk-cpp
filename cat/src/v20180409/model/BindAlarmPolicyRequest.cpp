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

#include <tencentcloud/cat/v20180409/model/BindAlarmPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cat::V20180409::Model;
using namespace rapidjson;
using namespace std;

BindAlarmPolicyRequest::BindAlarmPolicyRequest() :
    m_taskIdHasBeenSet(false),
    m_policyGroupIdHasBeenSet(false),
    m_ifBindHasBeenSet(false),
    m_topicIdHasBeenSet(false)
{
}

string BindAlarmPolicyRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_policyGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PolicyGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_policyGroupId, allocator);
    }

    if (m_ifBindHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IfBind";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ifBind, allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topicId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t BindAlarmPolicyRequest::GetTaskId() const
{
    return m_taskId;
}

void BindAlarmPolicyRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool BindAlarmPolicyRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t BindAlarmPolicyRequest::GetPolicyGroupId() const
{
    return m_policyGroupId;
}

void BindAlarmPolicyRequest::SetPolicyGroupId(const uint64_t& _policyGroupId)
{
    m_policyGroupId = _policyGroupId;
    m_policyGroupIdHasBeenSet = true;
}

bool BindAlarmPolicyRequest::PolicyGroupIdHasBeenSet() const
{
    return m_policyGroupIdHasBeenSet;
}

uint64_t BindAlarmPolicyRequest::GetIfBind() const
{
    return m_ifBind;
}

void BindAlarmPolicyRequest::SetIfBind(const uint64_t& _ifBind)
{
    m_ifBind = _ifBind;
    m_ifBindHasBeenSet = true;
}

bool BindAlarmPolicyRequest::IfBindHasBeenSet() const
{
    return m_ifBindHasBeenSet;
}

string BindAlarmPolicyRequest::GetTopicId() const
{
    return m_topicId;
}

void BindAlarmPolicyRequest::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool BindAlarmPolicyRequest::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}


