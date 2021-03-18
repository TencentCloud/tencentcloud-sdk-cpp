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

#include <tencentcloud/dlc/v20210125/model/CreateTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace rapidjson;
using namespace std;

CreateTaskRequest::CreateTaskRequest() :
    m_taskHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

string CreateTaskRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Task";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_task.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Task CreateTaskRequest::GetTask() const
{
    return m_task;
}

void CreateTaskRequest::SetTask(const Task& _task)
{
    m_task = _task;
    m_taskHasBeenSet = true;
}

bool CreateTaskRequest::TaskHasBeenSet() const
{
    return m_taskHasBeenSet;
}

string CreateTaskRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void CreateTaskRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool CreateTaskRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}


