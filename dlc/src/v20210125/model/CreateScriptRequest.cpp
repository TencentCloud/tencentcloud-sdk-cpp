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

#include <tencentcloud/dlc/v20210125/model/CreateScriptRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateScriptRequest::CreateScriptRequest() :
    m_scriptNameHasBeenSet(false),
    m_sQLStatementHasBeenSet(false),
    m_scriptDescHasBeenSet(false),
    m_databaseNameHasBeenSet(false)
{
}

string CreateScriptRequest::ToJsonString() const
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

    if (m_sQLStatementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLStatement";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sQLStatement.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scriptDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateScriptRequest::GetScriptName() const
{
    return m_scriptName;
}

void CreateScriptRequest::SetScriptName(const string& _scriptName)
{
    m_scriptName = _scriptName;
    m_scriptNameHasBeenSet = true;
}

bool CreateScriptRequest::ScriptNameHasBeenSet() const
{
    return m_scriptNameHasBeenSet;
}

string CreateScriptRequest::GetSQLStatement() const
{
    return m_sQLStatement;
}

void CreateScriptRequest::SetSQLStatement(const string& _sQLStatement)
{
    m_sQLStatement = _sQLStatement;
    m_sQLStatementHasBeenSet = true;
}

bool CreateScriptRequest::SQLStatementHasBeenSet() const
{
    return m_sQLStatementHasBeenSet;
}

string CreateScriptRequest::GetScriptDesc() const
{
    return m_scriptDesc;
}

void CreateScriptRequest::SetScriptDesc(const string& _scriptDesc)
{
    m_scriptDesc = _scriptDesc;
    m_scriptDescHasBeenSet = true;
}

bool CreateScriptRequest::ScriptDescHasBeenSet() const
{
    return m_scriptDescHasBeenSet;
}

string CreateScriptRequest::GetDatabaseName() const
{
    return m_databaseName;
}

void CreateScriptRequest::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool CreateScriptRequest::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}


