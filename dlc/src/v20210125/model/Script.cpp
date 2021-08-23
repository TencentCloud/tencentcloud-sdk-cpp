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

#include <tencentcloud/dlc/v20210125/model/Script.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

Script::Script() :
    m_scriptIdHasBeenSet(false),
    m_scriptNameHasBeenSet(false),
    m_scriptDescHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_sQLStatementHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome Script::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScriptId") && !value["ScriptId"].IsNull())
    {
        if (!value["ScriptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Script.ScriptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptId = string(value["ScriptId"].GetString());
        m_scriptIdHasBeenSet = true;
    }

    if (value.HasMember("ScriptName") && !value["ScriptName"].IsNull())
    {
        if (!value["ScriptName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Script.ScriptName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptName = string(value["ScriptName"].GetString());
        m_scriptNameHasBeenSet = true;
    }

    if (value.HasMember("ScriptDesc") && !value["ScriptDesc"].IsNull())
    {
        if (!value["ScriptDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Script.ScriptDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptDesc = string(value["ScriptDesc"].GetString());
        m_scriptDescHasBeenSet = true;
    }

    if (value.HasMember("DatabaseName") && !value["DatabaseName"].IsNull())
    {
        if (!value["DatabaseName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Script.DatabaseName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_databaseName = string(value["DatabaseName"].GetString());
        m_databaseNameHasBeenSet = true;
    }

    if (value.HasMember("SQLStatement") && !value["SQLStatement"].IsNull())
    {
        if (!value["SQLStatement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Script.SQLStatement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sQLStatement = string(value["SQLStatement"].GetString());
        m_sQLStatementHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Script.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Script::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scriptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptId.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptName.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_databaseNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatabaseName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_databaseName.c_str(), allocator).Move(), allocator);
    }

    if (m_sQLStatementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SQLStatement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sQLStatement.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string Script::GetScriptId() const
{
    return m_scriptId;
}

void Script::SetScriptId(const string& _scriptId)
{
    m_scriptId = _scriptId;
    m_scriptIdHasBeenSet = true;
}

bool Script::ScriptIdHasBeenSet() const
{
    return m_scriptIdHasBeenSet;
}

string Script::GetScriptName() const
{
    return m_scriptName;
}

void Script::SetScriptName(const string& _scriptName)
{
    m_scriptName = _scriptName;
    m_scriptNameHasBeenSet = true;
}

bool Script::ScriptNameHasBeenSet() const
{
    return m_scriptNameHasBeenSet;
}

string Script::GetScriptDesc() const
{
    return m_scriptDesc;
}

void Script::SetScriptDesc(const string& _scriptDesc)
{
    m_scriptDesc = _scriptDesc;
    m_scriptDescHasBeenSet = true;
}

bool Script::ScriptDescHasBeenSet() const
{
    return m_scriptDescHasBeenSet;
}

string Script::GetDatabaseName() const
{
    return m_databaseName;
}

void Script::SetDatabaseName(const string& _databaseName)
{
    m_databaseName = _databaseName;
    m_databaseNameHasBeenSet = true;
}

bool Script::DatabaseNameHasBeenSet() const
{
    return m_databaseNameHasBeenSet;
}

string Script::GetSQLStatement() const
{
    return m_sQLStatement;
}

void Script::SetSQLStatement(const string& _sQLStatement)
{
    m_sQLStatement = _sQLStatement;
    m_sQLStatementHasBeenSet = true;
}

bool Script::SQLStatementHasBeenSet() const
{
    return m_sQLStatementHasBeenSet;
}

int64_t Script::GetUpdateTime() const
{
    return m_updateTime;
}

void Script::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool Script::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

