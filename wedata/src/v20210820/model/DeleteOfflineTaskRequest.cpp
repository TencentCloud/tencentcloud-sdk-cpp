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

#include <tencentcloud/wedata/v20210820/model/DeleteOfflineTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteOfflineTaskRequest::DeleteOfflineTaskRequest() :
    m_operatorNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_virtualFlagHasBeenSet(false)
{
}

string DeleteOfflineTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operatorName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_virtualFlag, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteOfflineTaskRequest::GetOperatorName() const
{
    return m_operatorName;
}

void DeleteOfflineTaskRequest::SetOperatorName(const string& _operatorName)
{
    m_operatorName = _operatorName;
    m_operatorNameHasBeenSet = true;
}

bool DeleteOfflineTaskRequest::OperatorNameHasBeenSet() const
{
    return m_operatorNameHasBeenSet;
}

string DeleteOfflineTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void DeleteOfflineTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeleteOfflineTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DeleteOfflineTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void DeleteOfflineTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DeleteOfflineTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

bool DeleteOfflineTaskRequest::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void DeleteOfflineTaskRequest::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool DeleteOfflineTaskRequest::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}


