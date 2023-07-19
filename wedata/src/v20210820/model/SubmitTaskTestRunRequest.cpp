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

#include <tencentcloud/wedata/v20210820/model/SubmitTaskTestRunRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SubmitTaskTestRunRequest::SubmitTaskTestRunRequest() :
    m_taskIdsHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_workFlowIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_runParamsHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

string SubmitTaskTestRunRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskIds.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_workFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkFlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
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

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_runParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runParams.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_versionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitTaskTestRunRequest::GetTaskIds() const
{
    return m_taskIds;
}

void SubmitTaskTestRunRequest::SetTaskIds(const string& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool SubmitTaskTestRunRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string SubmitTaskTestRunRequest::GetProjectId() const
{
    return m_projectId;
}

void SubmitTaskTestRunRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SubmitTaskTestRunRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SubmitTaskTestRunRequest::GetWorkFlowId() const
{
    return m_workFlowId;
}

void SubmitTaskTestRunRequest::SetWorkFlowId(const string& _workFlowId)
{
    m_workFlowId = _workFlowId;
    m_workFlowIdHasBeenSet = true;
}

bool SubmitTaskTestRunRequest::WorkFlowIdHasBeenSet() const
{
    return m_workFlowIdHasBeenSet;
}

string SubmitTaskTestRunRequest::GetName() const
{
    return m_name;
}

void SubmitTaskTestRunRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SubmitTaskTestRunRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<StageCloudApiRequest> SubmitTaskTestRunRequest::GetTasks() const
{
    return m_tasks;
}

void SubmitTaskTestRunRequest::SetTasks(const vector<StageCloudApiRequest>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool SubmitTaskTestRunRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string SubmitTaskTestRunRequest::GetDescription() const
{
    return m_description;
}

void SubmitTaskTestRunRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SubmitTaskTestRunRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SubmitTaskTestRunRequest::GetRunParams() const
{
    return m_runParams;
}

void SubmitTaskTestRunRequest::SetRunParams(const string& _runParams)
{
    m_runParams = _runParams;
    m_runParamsHasBeenSet = true;
}

bool SubmitTaskTestRunRequest::RunParamsHasBeenSet() const
{
    return m_runParamsHasBeenSet;
}

string SubmitTaskTestRunRequest::GetScriptContent() const
{
    return m_scriptContent;
}

void SubmitTaskTestRunRequest::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool SubmitTaskTestRunRequest::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string SubmitTaskTestRunRequest::GetVersionId() const
{
    return m_versionId;
}

void SubmitTaskTestRunRequest::SetVersionId(const string& _versionId)
{
    m_versionId = _versionId;
    m_versionIdHasBeenSet = true;
}

bool SubmitTaskTestRunRequest::VersionIdHasBeenSet() const
{
    return m_versionIdHasBeenSet;
}


