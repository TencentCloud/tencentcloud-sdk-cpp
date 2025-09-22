/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/wedata/v20250806/model/CreateCodeFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateCodeFileRequest::CreateCodeFileRequest() :
    m_projectIdHasBeenSet(false),
    m_codeFileNameHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_codeFileConfigHasBeenSet(false),
    m_codeFileContentHasBeenSet(false)
{
}

string CreateCodeFileRequest::ToJsonString() const
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

    if (m_codeFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_codeFileConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codeFileConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_codeFileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeFileContent.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCodeFileRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateCodeFileRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateCodeFileRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateCodeFileRequest::GetCodeFileName() const
{
    return m_codeFileName;
}

void CreateCodeFileRequest::SetCodeFileName(const string& _codeFileName)
{
    m_codeFileName = _codeFileName;
    m_codeFileNameHasBeenSet = true;
}

bool CreateCodeFileRequest::CodeFileNameHasBeenSet() const
{
    return m_codeFileNameHasBeenSet;
}

string CreateCodeFileRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void CreateCodeFileRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool CreateCodeFileRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

CodeFileConfig CreateCodeFileRequest::GetCodeFileConfig() const
{
    return m_codeFileConfig;
}

void CreateCodeFileRequest::SetCodeFileConfig(const CodeFileConfig& _codeFileConfig)
{
    m_codeFileConfig = _codeFileConfig;
    m_codeFileConfigHasBeenSet = true;
}

bool CreateCodeFileRequest::CodeFileConfigHasBeenSet() const
{
    return m_codeFileConfigHasBeenSet;
}

string CreateCodeFileRequest::GetCodeFileContent() const
{
    return m_codeFileContent;
}

void CreateCodeFileRequest::SetCodeFileContent(const string& _codeFileContent)
{
    m_codeFileContent = _codeFileContent;
    m_codeFileContentHasBeenSet = true;
}

bool CreateCodeFileRequest::CodeFileContentHasBeenSet() const
{
    return m_codeFileContentHasBeenSet;
}


