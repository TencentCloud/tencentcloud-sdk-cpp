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

#include <tencentcloud/ams/v20200608/model/CreateAudioModerationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ams::V20200608::Model;
using namespace std;

CreateAudioModerationTaskRequest::CreateAudioModerationTaskRequest() :
    m_bizTypeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_seedHasBeenSet(false),
    m_callbackUrlHasBeenSet(false),
    m_tasksHasBeenSet(false)
{
}

string CreateAudioModerationTaskRequest::ToJsonString() const
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAudioModerationTaskRequest::GetBizType() const
{
    return m_bizType;
}

void CreateAudioModerationTaskRequest::SetBizType(const string& _bizType)
{
    m_bizType = _bizType;
    m_bizTypeHasBeenSet = true;
}

bool CreateAudioModerationTaskRequest::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string CreateAudioModerationTaskRequest::GetType() const
{
    return m_type;
}

void CreateAudioModerationTaskRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateAudioModerationTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateAudioModerationTaskRequest::GetSeed() const
{
    return m_seed;
}

void CreateAudioModerationTaskRequest::SetSeed(const string& _seed)
{
    m_seed = _seed;
    m_seedHasBeenSet = true;
}

bool CreateAudioModerationTaskRequest::SeedHasBeenSet() const
{
    return m_seedHasBeenSet;
}

string CreateAudioModerationTaskRequest::GetCallbackUrl() const
{
    return m_callbackUrl;
}

void CreateAudioModerationTaskRequest::SetCallbackUrl(const string& _callbackUrl)
{
    m_callbackUrl = _callbackUrl;
    m_callbackUrlHasBeenSet = true;
}

bool CreateAudioModerationTaskRequest::CallbackUrlHasBeenSet() const
{
    return m_callbackUrlHasBeenSet;
}

vector<TaskInput> CreateAudioModerationTaskRequest::GetTasks() const
{
    return m_tasks;
}

void CreateAudioModerationTaskRequest::SetTasks(const vector<TaskInput>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CreateAudioModerationTaskRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}


