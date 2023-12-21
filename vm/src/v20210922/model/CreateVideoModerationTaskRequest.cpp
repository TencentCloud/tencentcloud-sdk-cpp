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

#include <tencentcloud/vm/v20210922/model/CreateVideoModerationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

CreateVideoModerationTaskRequest::CreateVideoModerationTaskRequest() :
    m_bizTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_priorityHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

string CreateVideoModerationTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_seedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Seed";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_seed.c_str(), allocator).Move(), allocator);
    }

    if (m_callbackUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callbackUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_priorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Priority";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_priority, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_user.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
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

User CreateVideoModerationTaskRequest::GetUser() const
{
    return m_user;
}

void CreateVideoModerationTaskRequest::SetUser(const User& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool CreateVideoModerationTaskRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}


