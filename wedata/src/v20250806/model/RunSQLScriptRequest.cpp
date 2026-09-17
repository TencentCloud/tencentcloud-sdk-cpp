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

#include <tencentcloud/wedata/v20250806/model/RunSQLScriptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

RunSQLScriptRequest::RunSQLScriptRequest() :
    m_projectIdHasBeenSet(false),
    m_scriptIdHasBeenSet(false),
    m_scriptConfigHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_paramsHasBeenSet(false)
{
}

string RunSQLScriptRequest::ToJsonString() const
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

    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
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

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_params.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunSQLScriptRequest::GetProjectId() const
{
    return m_projectId;
}

void RunSQLScriptRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RunSQLScriptRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RunSQLScriptRequest::GetScriptId() const
{
    return m_scriptId;
}

void RunSQLScriptRequest::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool RunSQLScriptRequest::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

SQLScriptConfig RunSQLScriptRequest::GetScriptConfig() const
{
    return m_scriptConfig;
}

void RunSQLScriptRequest::SetScriptConfig(const SQLScriptConfig& _scriptConfig)
{
    m_scriptConfig = _scriptConfig;
    m_scriptConfigHasBeenSet = true;
}

bool RunSQLScriptRequest::ScriptConfigHasBeenSet() const
{
    return m_scriptConfigHasBeenSet;
}

string RunSQLScriptRequest::GetScriptContent() const
{
    return m_scriptContent;
}

void RunSQLScriptRequest::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool RunSQLScriptRequest::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string RunSQLScriptRequest::GetParams() const
{
    return m_params;
}

void RunSQLScriptRequest::SetParams(const string& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool RunSQLScriptRequest::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}


