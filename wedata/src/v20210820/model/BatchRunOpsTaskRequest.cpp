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

#include <tencentcloud/wedata/v20210820/model/BatchRunOpsTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchRunOpsTaskRequest::BatchRunOpsTaskRequest() :
    m_projectIdHasBeenSet(false),
    m_enableMakeUpHasBeenSet(false),
    m_tasksHasBeenSet(false)
{
}

string BatchRunOpsTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableMakeUpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableMakeUp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableMakeUp, allocator);
    }

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BatchRunOpsTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchRunOpsTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchRunOpsTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t BatchRunOpsTaskRequest::GetEnableMakeUp() const
{
    return m_enableMakeUp;
}

void BatchRunOpsTaskRequest::SetEnableMakeUp(const int64_t& _enableMakeUp)
{
    m_enableMakeUp = _enableMakeUp;
    m_enableMakeUpHasBeenSet = true;
}

bool BatchRunOpsTaskRequest::EnableMakeUpHasBeenSet() const
{
    return m_enableMakeUpHasBeenSet;
}

vector<string> BatchRunOpsTaskRequest::GetTasks() const
{
    return m_tasks;
}

void BatchRunOpsTaskRequest::SetTasks(const vector<string>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool BatchRunOpsTaskRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}


