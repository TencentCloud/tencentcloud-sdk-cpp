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

#include <tencentcloud/vm/v20201229/model/CreateVideoModerationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vm::V20201229::Model;
using namespace rapidjson;
using namespace std;

CreateVideoModerationTaskRequest::CreateVideoModerationTaskRequest() :
    m_typeHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_priorityHasBeenSet(false)
{
}

string CreateVideoModerationTaskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_bizTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_seedHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_seed.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVideoModerationTaskRequest::GetType() const
{
    return m_type;
}

void CreateVideoModerationTaskRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateVideoModerationTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<TaskInput> CreateVideoModerationTaskRequest::GetTasks() const
{
    return m_tasks;
}

void CreateVideoModerationTaskRequest::SetTasks(const vector<TaskInput>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CreateVideoModerationTaskRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string CreateVideoModerationTaskRequest::GetBizType() const
{
    return m_bizType;
}

void CreateVideoModerationTaskRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool CreateVideoModerationTaskRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string CreateVideoModerationTaskRequest::GetSeed() const
{
    return m_seed;
}

void CreateVideoModerationTaskRequest::SetSeed(const string& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool CreateVideoModerationTaskRequest::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

string CreateVideoModerationTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateVideoModerationTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateVideoModerationTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

int64_t CreateVideoModerationTaskRequest::GetPriority() const
{
    return m_priority;
}

void CreateVideoModerationTaskRequest::SetPriority(const int64_t& _priority)
{
    m_priority = _priority;
    m_priorityHasBeenSet = true;
}

bool CreateVideoModerationTaskRequest::PriorityHasBeenSet() const
{
    return m_priorityHasBeenSet;
}


