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

#include <tencentcloud/wedata/v20210820/model/SubmitPythonTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SubmitPythonTaskRequest::SubmitPythonTaskRequest() :
    m_groupIdHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_scriptTypeHasBeenSet(false),
    m_scriptNameHasBeenSet(false),
    m_scriptPathHasBeenSet(false),
    m_runParamsHasBeenSet(false),
    m_scriptIdHasBeenSet(false),
    m_scriptEncryptionHasBeenSet(false)
{
}

string SubmitPythonTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptType.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptName.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptPath.c_str(), allocator).Move(), allocator);
    }

    if (m_runParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runParams.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptEncryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptEncryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scriptEncryption, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitPythonTaskRequest::GetGroupId() const
{
    return m_groupId;
}

void SubmitPythonTaskRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SubmitPythonTaskRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string SubmitPythonTaskRequest::GetScriptContent() const
{
    return m_scriptContent;
}

void SubmitPythonTaskRequest::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool SubmitPythonTaskRequest::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string SubmitPythonTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void SubmitPythonTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SubmitPythonTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SubmitPythonTaskRequest::GetScriptType() const
{
    return m_scriptType;
}

void SubmitPythonTaskRequest::SetScriptType(const string& _scriptType)
{
    m_scriptType = _scriptType;
    m_scriptTypeHasBeenSet = true;
}

bool SubmitPythonTaskRequest::ScriptTypeHasBeenSet() const
{
    return m_scriptTypeHasBeenSet;
}

string SubmitPythonTaskRequest::GetScriptName() const
{
    return m_scriptName;
}

void SubmitPythonTaskRequest::SetScriptName(const string& _scriptName)
{
    m_scriptName = _scriptName;
    m_scriptNameHasBeenSet = true;
}

bool SubmitPythonTaskRequest::ScriptNameHasBeenSet() const
{
    return m_scriptNameHasBeenSet;
}

string SubmitPythonTaskRequest::GetScriptPath() const
{
    return m_scriptPath;
}

void SubmitPythonTaskRequest::SetScriptPath(const string& _scriptPath)
{
    m_scriptPath = _scriptPath;
    m_scriptPathHasBeenSet = true;
}

bool SubmitPythonTaskRequest::ScriptPathHasBeenSet() const
{
    return m_scriptPathHasBeenSet;
}

string SubmitPythonTaskRequest::GetRunParams() const
{
    return m_runParams;
}

void SubmitPythonTaskRequest::SetRunParams(const string& _runParams)
{
    m_runParams = _runParams;
    m_runParamsHasBeenSet = true;
}

bool SubmitPythonTaskRequest::RunParamsHasBeenSet() const
{
    return m_runParamsHasBeenSet;
}

string SubmitPythonTaskRequest::GetScriptId() const
{
    return m_scriptId;
}

void SubmitPythonTaskRequest::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool SubmitPythonTaskRequest::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

bool SubmitPythonTaskRequest::GetScriptEncryption() const
{
    return m_scriptEncryption;
}

void SubmitPythonTaskRequest::SetScriptEncryption(const bool& _scriptEncryption)
{
    m_scriptEncryption = _scriptEncryption;
    m_scriptEncryptionHasBeenSet = true;
}

bool SubmitPythonTaskRequest::ScriptEncryptionHasBeenSet() const
{
    return m_scriptEncryptionHasBeenSet;
}


