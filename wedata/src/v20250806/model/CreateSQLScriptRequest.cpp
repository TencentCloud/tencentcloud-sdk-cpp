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

#include <tencentcloud/wedata/v20250806/model/CreateSQLScriptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

CreateSQLScriptRequest::CreateSQLScriptRequest() :
    m_scriptNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_parentFolderPathHasBeenSet(false),
    m_scriptConfigHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_accessScopeHasBeenSet(false)
{
}

string CreateSQLScriptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scriptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_parentFolderPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentFolderPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parentFolderPath.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scriptConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_accessScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessScope";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessScope.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSQLScriptRequest::GetScriptName() const
{
    return m_scriptName;
}

void CreateSQLScriptRequest::SetScriptName(const string& _scriptName)
{
    m_scriptName = _scriptName;
    m_scriptNameHasBeenSet = true;
}

bool CreateSQLScriptRequest::ScriptNameHasBeenSet() const
{
    return m_scriptNameHasBeenSet;
}

string CreateSQLScriptRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateSQLScriptRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateSQLScriptRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateSQLScriptRequest::GetParentFolderPath() const
{
    return m_parentFolderPath;
}

void CreateSQLScriptRequest::SetParentFolderPath(const string& _parentFolderPath)
{
    m_parentFolderPath = _parentFolderPath;
    m_parentFolderPathHasBeenSet = true;
}

bool CreateSQLScriptRequest::ParentFolderPathHasBeenSet() const
{
    return m_parentFolderPathHasBeenSet;
}

SQLScriptConfig CreateSQLScriptRequest::GetScriptConfig() const
{
    return m_scriptConfig;
}

void CreateSQLScriptRequest::SetScriptConfig(const SQLScriptConfig& _scriptConfig)
{
    m_scriptConfig = _scriptConfig;
    m_scriptConfigHasBeenSet = true;
}

bool CreateSQLScriptRequest::ScriptConfigHasBeenSet() const
{
    return m_scriptConfigHasBeenSet;
}

string CreateSQLScriptRequest::GetScriptContent() const
{
    return m_scriptContent;
}

void CreateSQLScriptRequest::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool CreateSQLScriptRequest::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string CreateSQLScriptRequest::GetAccessScope() const
{
    return m_accessScope;
}

void CreateSQLScriptRequest::SetAccessScope(const string& _accessScope)
{
    m_accessScope = _accessScope;
    m_accessScopeHasBeenSet = true;
}

bool CreateSQLScriptRequest::AccessScopeHasBeenSet() const
{
    return m_accessScopeHasBeenSet;
}


