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

#include <tencentcloud/wedata/v20210820/model/CreateCodeTemplateVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateCodeTemplateVersionRequest::CreateCodeTemplateVersionRequest() :
    m_codeTemplateIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_originalParamsHasBeenSet(false),
    m_versionRemarkHasBeenSet(false),
    m_needSubmitScheduleForTemplateHasBeenSet(false)
{
}

string CreateCodeTemplateVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_codeTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
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

    if (m_originalParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originalParams.begin(); itr != m_originalParams.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_versionRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionRemark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_needSubmitScheduleForTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedSubmitScheduleForTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needSubmitScheduleForTemplate, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCodeTemplateVersionRequest::GetCodeTemplateId() const
{
    return m_codeTemplateId;
}

void CreateCodeTemplateVersionRequest::SetCodeTemplateId(const string& _codeTemplateId)
{
    m_codeTemplateId = _codeTemplateId;
    m_codeTemplateIdHasBeenSet = true;
}

bool CreateCodeTemplateVersionRequest::CodeTemplateIdHasBeenSet() const
{
    return m_codeTemplateIdHasBeenSet;
}

string CreateCodeTemplateVersionRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateCodeTemplateVersionRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateCodeTemplateVersionRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<TaskFormParams> CreateCodeTemplateVersionRequest::GetTasks() const
{
    return m_tasks;
}

void CreateCodeTemplateVersionRequest::SetTasks(const vector<TaskFormParams>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CreateCodeTemplateVersionRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

vector<string> CreateCodeTemplateVersionRequest::GetOriginalParams() const
{
    return m_originalParams;
}

void CreateCodeTemplateVersionRequest::SetOriginalParams(const vector<string>& _originalParams)
{
    m_originalParams = _originalParams;
    m_originalParamsHasBeenSet = true;
}

bool CreateCodeTemplateVersionRequest::OriginalParamsHasBeenSet() const
{
    return m_originalParamsHasBeenSet;
}

string CreateCodeTemplateVersionRequest::GetVersionRemark() const
{
    return m_versionRemark;
}

void CreateCodeTemplateVersionRequest::SetVersionRemark(const string& _versionRemark)
{
    m_versionRemark = _versionRemark;
    m_versionRemarkHasBeenSet = true;
}

bool CreateCodeTemplateVersionRequest::VersionRemarkHasBeenSet() const
{
    return m_versionRemarkHasBeenSet;
}

bool CreateCodeTemplateVersionRequest::GetNeedSubmitScheduleForTemplate() const
{
    return m_needSubmitScheduleForTemplate;
}

void CreateCodeTemplateVersionRequest::SetNeedSubmitScheduleForTemplate(const bool& _needSubmitScheduleForTemplate)
{
    m_needSubmitScheduleForTemplate = _needSubmitScheduleForTemplate;
    m_needSubmitScheduleForTemplateHasBeenSet = true;
}

bool CreateCodeTemplateVersionRequest::NeedSubmitScheduleForTemplateHasBeenSet() const
{
    return m_needSubmitScheduleForTemplateHasBeenSet;
}


