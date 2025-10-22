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

#include <tencentcloud/wedata/v20250806/model/UpdateCodeFileRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

UpdateCodeFileRequest::UpdateCodeFileRequest() :
    m_projectIdHasBeenSet(false),
    m_codeFileIdHasBeenSet(false),
    m_codeFileConfigHasBeenSet(false),
    m_codeFileContentHasBeenSet(false)
{
}

string UpdateCodeFileRequest::ToJsonString() const
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

    if (m_codeFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeFileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_codeFileId.c_str(), allocator).Move(), allocator);
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


string UpdateCodeFileRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateCodeFileRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateCodeFileRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string UpdateCodeFileRequest::GetCodeFileId() const
{
    return m_codeFileId;
}

void UpdateCodeFileRequest::SetCodeFileId(const string& _codeFileId)
{
    m_codeFileId = _codeFileId;
    m_codeFileIdHasBeenSet = true;
}

bool UpdateCodeFileRequest::CodeFileIdHasBeenSet() const
{
    return m_codeFileIdHasBeenSet;
}

CodeFileConfig UpdateCodeFileRequest::GetCodeFileConfig() const
{
    return m_codeFileConfig;
}

void UpdateCodeFileRequest::SetCodeFileConfig(const CodeFileConfig& _codeFileConfig)
{
    m_codeFileConfig = _codeFileConfig;
    m_codeFileConfigHasBeenSet = true;
}

bool UpdateCodeFileRequest::CodeFileConfigHasBeenSet() const
{
    return m_codeFileConfigHasBeenSet;
}

string UpdateCodeFileRequest::GetCodeFileContent() const
{
    return m_codeFileContent;
}

void UpdateCodeFileRequest::SetCodeFileContent(const string& _codeFileContent)
{
    m_codeFileContent = _codeFileContent;
    m_codeFileContentHasBeenSet = true;
}

bool UpdateCodeFileRequest::CodeFileContentHasBeenSet() const
{
    return m_codeFileContentHasBeenSet;
}


