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

#include <tencentcloud/wedata/v20210820/model/CreateCodeTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

CreateCodeTemplateRequest::CreateCodeTemplateRequest() :
    m_projectIdHasBeenSet(false),
    m_codeTemplateNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_codeTemplateDescHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

string CreateCodeTemplateRequest::ToJsonString() const
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

    if (m_codeTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTemplateName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_codeTemplateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeTemplateDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeTemplateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_folderId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCodeTemplateRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateCodeTemplateRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateCodeTemplateRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateCodeTemplateRequest::GetCodeTemplateName() const
{
    return m_codeTemplateName;
}

void CreateCodeTemplateRequest::SetCodeTemplateName(const string& _codeTemplateName)
{
    m_codeTemplateName = _codeTemplateName;
    m_codeTemplateNameHasBeenSet = true;
}

bool CreateCodeTemplateRequest::CodeTemplateNameHasBeenSet() const
{
    return m_codeTemplateNameHasBeenSet;
}

int64_t CreateCodeTemplateRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateCodeTemplateRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateCodeTemplateRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string CreateCodeTemplateRequest::GetCodeTemplateDesc() const
{
    return m_codeTemplateDesc;
}

void CreateCodeTemplateRequest::SetCodeTemplateDesc(const string& _codeTemplateDesc)
{
    m_codeTemplateDesc = _codeTemplateDesc;
    m_codeTemplateDescHasBeenSet = true;
}

bool CreateCodeTemplateRequest::CodeTemplateDescHasBeenSet() const
{
    return m_codeTemplateDescHasBeenSet;
}

string CreateCodeTemplateRequest::GetFolderId() const
{
    return m_folderId;
}

void CreateCodeTemplateRequest::SetFolderId(const string& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool CreateCodeTemplateRequest::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

string CreateCodeTemplateRequest::GetContent() const
{
    return m_content;
}

void CreateCodeTemplateRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool CreateCodeTemplateRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}


