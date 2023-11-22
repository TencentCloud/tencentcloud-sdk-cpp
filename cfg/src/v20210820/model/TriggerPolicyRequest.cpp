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

#include <tencentcloud/cfg/v20210820/model/TriggerPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

TriggerPolicyRequest::TriggerPolicyRequest() :
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_triggerTypeHasBeenSet(false)
{
}

string TriggerPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_triggerType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t TriggerPolicyRequest::GetTaskId() const
{
    return m_taskId;
}

void TriggerPolicyRequest::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TriggerPolicyRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string TriggerPolicyRequest::GetName() const
{
    return m_name;
}

void TriggerPolicyRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TriggerPolicyRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TriggerPolicyRequest::GetContent() const
{
    return m_content;
}

void TriggerPolicyRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool TriggerPolicyRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t TriggerPolicyRequest::GetTriggerType() const
{
    return m_triggerType;
}

void TriggerPolicyRequest::SetTriggerType(const int64_t& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool TriggerPolicyRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}


