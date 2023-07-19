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

#include <tencentcloud/wedata/v20210820/model/DeleteTaskDsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteTaskDsRequest::DeleteTaskDsRequest() :
    m_projectIdHasBeenSet(false),
    m_deleteScriptHasBeenSet(false),
    m_operateInformHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_virtualTaskIdHasBeenSet(false),
    m_virtualFlagHasBeenSet(false),
    m_deleteModeHasBeenSet(false)
{
}

string DeleteTaskDsRequest::ToJsonString() const
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

    if (m_deleteScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteScript, allocator);
    }

    if (m_operateInformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateInform";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_operateInform, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_virtualTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_virtualFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirtualFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_virtualFlag, allocator);
    }

    if (m_deleteModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteMode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteTaskDsRequest::GetProjectId() const
{
    return m_projectId;
}

void DeleteTaskDsRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DeleteTaskDsRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool DeleteTaskDsRequest::GetDeleteScript() const
{
    return m_deleteScript;
}

void DeleteTaskDsRequest::SetDeleteScript(const bool& _deleteScript)
{
    m_deleteScript = _deleteScript;
    m_deleteScriptHasBeenSet = true;
}

bool DeleteTaskDsRequest::DeleteScriptHasBeenSet() const
{
    return m_deleteScriptHasBeenSet;
}

bool DeleteTaskDsRequest::GetOperateInform() const
{
    return m_operateInform;
}

void DeleteTaskDsRequest::SetOperateInform(const bool& _operateInform)
{
    m_operateInform = _operateInform;
    m_operateInformHasBeenSet = true;
}

bool DeleteTaskDsRequest::OperateInformHasBeenSet() const
{
    return m_operateInformHasBeenSet;
}

string DeleteTaskDsRequest::GetTaskId() const
{
    return m_taskId;
}

void DeleteTaskDsRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DeleteTaskDsRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DeleteTaskDsRequest::GetVirtualTaskId() const
{
    return m_virtualTaskId;
}

void DeleteTaskDsRequest::SetVirtualTaskId(const string& _virtualTaskId)
{
    m_virtualTaskId = _virtualTaskId;
    m_virtualTaskIdHasBeenSet = true;
}

bool DeleteTaskDsRequest::VirtualTaskIdHasBeenSet() const
{
    return m_virtualTaskIdHasBeenSet;
}

bool DeleteTaskDsRequest::GetVirtualFlag() const
{
    return m_virtualFlag;
}

void DeleteTaskDsRequest::SetVirtualFlag(const bool& _virtualFlag)
{
    m_virtualFlag = _virtualFlag;
    m_virtualFlagHasBeenSet = true;
}

bool DeleteTaskDsRequest::VirtualFlagHasBeenSet() const
{
    return m_virtualFlagHasBeenSet;
}

bool DeleteTaskDsRequest::GetDeleteMode() const
{
    return m_deleteMode;
}

void DeleteTaskDsRequest::SetDeleteMode(const bool& _deleteMode)
{
    m_deleteMode = _deleteMode;
    m_deleteModeHasBeenSet = true;
}

bool DeleteTaskDsRequest::DeleteModeHasBeenSet() const
{
    return m_deleteModeHasBeenSet;
}


