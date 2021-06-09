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

#include <tencentcloud/tione/v20191022/model/CreateNotebookLifecycleScriptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

CreateNotebookLifecycleScriptRequest::CreateNotebookLifecycleScriptRequest() :
    m_notebookLifecycleScriptsNameHasBeenSet(false),
    m_createScriptHasBeenSet(false),
    m_startScriptHasBeenSet(false)
{
}

string CreateNotebookLifecycleScriptRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_notebookLifecycleScriptsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotebookLifecycleScriptsName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notebookLifecycleScriptsName.c_str(), allocator).Move(), allocator);
    }

    if (m_createScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_createScript.c_str(), allocator).Move(), allocator);
    }

    if (m_startScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startScript.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateNotebookLifecycleScriptRequest::GetNotebookLifecycleScriptsName() const
{
    return m_notebookLifecycleScriptsName;
}

void CreateNotebookLifecycleScriptRequest::SetNotebookLifecycleScriptsName(const string& _notebookLifecycleScriptsName)
{
    m_notebookLifecycleScriptsName = _notebookLifecycleScriptsName;
    m_notebookLifecycleScriptsNameHasBeenSet = true;
}

bool CreateNotebookLifecycleScriptRequest::NotebookLifecycleScriptsNameHasBeenSet() const
{
    return m_notebookLifecycleScriptsNameHasBeenSet;
}

string CreateNotebookLifecycleScriptRequest::GetCreateScript() const
{
    return m_createScript;
}

void CreateNotebookLifecycleScriptRequest::SetCreateScript(const string& _createScript)
{
    m_createScript = _createScript;
    m_createScriptHasBeenSet = true;
}

bool CreateNotebookLifecycleScriptRequest::CreateScriptHasBeenSet() const
{
    return m_createScriptHasBeenSet;
}

string CreateNotebookLifecycleScriptRequest::GetStartScript() const
{
    return m_startScript;
}

void CreateNotebookLifecycleScriptRequest::SetStartScript(const string& _startScript)
{
    m_startScript = _startScript;
    m_startScriptHasBeenSet = true;
}

bool CreateNotebookLifecycleScriptRequest::StartScriptHasBeenSet() const
{
    return m_startScriptHasBeenSet;
}


