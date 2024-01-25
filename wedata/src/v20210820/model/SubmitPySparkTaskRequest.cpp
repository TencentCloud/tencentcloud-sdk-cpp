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

#include <tencentcloud/wedata/v20210820/model/SubmitPySparkTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SubmitPySparkTaskRequest::SubmitPySparkTaskRequest() :
    m_groupIdHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_pythonTypeHasBeenSet(false),
    m_scriptPathHasBeenSet(false),
    m_runParamsHasBeenSet(false),
    m_scriptIdHasBeenSet(false),
    m_resourceQueueHasBeenSet(false),
    m_configParamsHasBeenSet(false),
    m_scriptEncryptionHasBeenSet(false)
{
}

string SubmitPySparkTaskRequest::ToJsonString() const
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

    if (m_pythonTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PythonType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pythonType.c_str(), allocator).Move(), allocator);
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

    if (m_resourceQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceQueue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_configParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_configParams.c_str(), allocator).Move(), allocator);
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


string SubmitPySparkTaskRequest::GetGroupId() const
{
    return m_groupId;
}

void SubmitPySparkTaskRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool SubmitPySparkTaskRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string SubmitPySparkTaskRequest::GetScriptContent() const
{
    return m_scriptContent;
}

void SubmitPySparkTaskRequest::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool SubmitPySparkTaskRequest::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string SubmitPySparkTaskRequest::GetProjectId() const
{
    return m_projectId;
}

void SubmitPySparkTaskRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SubmitPySparkTaskRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string SubmitPySparkTaskRequest::GetPythonType() const
{
    return m_pythonType;
}

void SubmitPySparkTaskRequest::SetPythonType(const string& _pythonType)
{
    m_pythonType = _pythonType;
    m_pythonTypeHasBeenSet = true;
}

bool SubmitPySparkTaskRequest::PythonTypeHasBeenSet() const
{
    return m_pythonTypeHasBeenSet;
}

string SubmitPySparkTaskRequest::GetScriptPath() const
{
    return m_scriptPath;
}

void SubmitPySparkTaskRequest::SetScriptPath(const string& _scriptPath)
{
    m_scriptPath = _scriptPath;
    m_scriptPathHasBeenSet = true;
}

bool SubmitPySparkTaskRequest::ScriptPathHasBeenSet() const
{
    return m_scriptPathHasBeenSet;
}

string SubmitPySparkTaskRequest::GetRunParams() const
{
    return m_runParams;
}

void SubmitPySparkTaskRequest::SetRunParams(const string& _runParams)
{
    m_runParams = _runParams;
    m_runParamsHasBeenSet = true;
}

bool SubmitPySparkTaskRequest::RunParamsHasBeenSet() const
{
    return m_runParamsHasBeenSet;
}

string SubmitPySparkTaskRequest::GetScriptId() const
{
    return m_scriptId;
}

void SubmitPySparkTaskRequest::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool SubmitPySparkTaskRequest::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

string SubmitPySparkTaskRequest::GetResourceQueue() const
{
    return m_resourceQueue;
}

void SubmitPySparkTaskRequest::SetResourceQueue(const string& _resourceQueue)
{
    m_resourceQueue = _resourceQueue;
    m_resourceQueueHasBeenSet = true;
}

bool SubmitPySparkTaskRequest::ResourceQueueHasBeenSet() const
{
    return m_resourceQueueHasBeenSet;
}

string SubmitPySparkTaskRequest::GetConfigParams() const
{
    return m_configParams;
}

void SubmitPySparkTaskRequest::SetConfigParams(const string& _configParams)
{
    m_configParams = _configParams;
    m_configParamsHasBeenSet = true;
}

bool SubmitPySparkTaskRequest::ConfigParamsHasBeenSet() const
{
    return m_configParamsHasBeenSet;
}

bool SubmitPySparkTaskRequest::GetScriptEncryption() const
{
    return m_scriptEncryption;
}

void SubmitPySparkTaskRequest::SetScriptEncryption(const bool& _scriptEncryption)
{
    m_scriptEncryption = _scriptEncryption;
    m_scriptEncryptionHasBeenSet = true;
}

bool SubmitPySparkTaskRequest::ScriptEncryptionHasBeenSet() const
{
    return m_scriptEncryptionHasBeenSet;
}


