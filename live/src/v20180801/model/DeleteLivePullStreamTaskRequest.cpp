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

#include <tencentcloud/live/v20180801/model/DeleteLivePullStreamTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DeleteLivePullStreamTaskRequest::DeleteLivePullStreamTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_specifyTaskIdHasBeenSet(false)
{
}

string DeleteLivePullStreamTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_specifyTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecifyTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specifyTaskId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteLivePullStreamTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void DeleteLivePullStreamTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DeleteLivePullStreamTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DeleteLivePullStreamTaskRequest::GetOperator() const
{
    return m_operator;
}

void DeleteLivePullStreamTaskRequest::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool DeleteLivePullStreamTaskRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DeleteLivePullStreamTaskRequest::GetSpecifyTaskId() const
{
    return m_specifyTaskId;
}

void DeleteLivePullStreamTaskRequest::SetSpecifyTaskId(const string& _specifyTaskId)
{
    m_specifyTaskId = _specifyTaskId;
    m_specifyTaskIdHasBeenSet = true;
}

bool DeleteLivePullStreamTaskRequest::SpecifyTaskIdHasBeenSet() const
{
    return m_specifyTaskIdHasBeenSet;
}


