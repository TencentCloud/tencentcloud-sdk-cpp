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

#include <tencentcloud/gme/v20180711/model/CreateAgeDetectTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

CreateAgeDetectTaskRequest::CreateAgeDetectTaskRequest() :
    m_bizIdHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_callbackHasBeenSet(false)
{
}

string CreateAgeDetectTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bizId, allocator);
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

    if (m_callbackHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callback";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callback.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateAgeDetectTaskRequest::GetBizId() const
{
    return m_bizId;
}

void CreateAgeDetectTaskRequest::SetBizId(const int64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool CreateAgeDetectTaskRequest::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

vector<AgeDetectTask> CreateAgeDetectTaskRequest::GetTasks() const
{
    return m_tasks;
}

void CreateAgeDetectTaskRequest::SetTasks(const vector<AgeDetectTask>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CreateAgeDetectTaskRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string CreateAgeDetectTaskRequest::GetCallback() const
{
    return m_callback;
}

void CreateAgeDetectTaskRequest::SetCallback(const string& _callback)
{
    m_callback = _callback;
    m_callbackHasBeenSet = true;
}

bool CreateAgeDetectTaskRequest::CallbackHasBeenSet() const
{
    return m_callbackHasBeenSet;
}


