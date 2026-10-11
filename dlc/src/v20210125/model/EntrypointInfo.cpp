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

#include <tencentcloud/dlc/v20210125/model/EntrypointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

EntrypointInfo::EntrypointInfo() :
    m_statementHasBeenSet(false),
    m_entryFileHasBeenSet(false),
    m_entryPointHasBeenSet(false),
    m_mainArgsHasBeenSet(false)
{
}

CoreInternalOutcome EntrypointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Statement") && !value["Statement"].IsNull())
    {
        if (!value["Statement"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntrypointInfo.Statement` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statement = string(value["Statement"].GetString());
        m_statementHasBeenSet = true;
    }

    if (value.HasMember("EntryFile") && !value["EntryFile"].IsNull())
    {
        if (!value["EntryFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntrypointInfo.EntryFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryFile = string(value["EntryFile"].GetString());
        m_entryFileHasBeenSet = true;
    }

    if (value.HasMember("EntryPoint") && !value["EntryPoint"].IsNull())
    {
        if (!value["EntryPoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntrypointInfo.EntryPoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entryPoint = string(value["EntryPoint"].GetString());
        m_entryPointHasBeenSet = true;
    }

    if (value.HasMember("MainArgs") && !value["MainArgs"].IsNull())
    {
        if (!value["MainArgs"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EntrypointInfo.MainArgs` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mainArgs = string(value["MainArgs"].GetString());
        m_mainArgsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EntrypointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statementHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Statement";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statement.c_str(), allocator).Move(), allocator);
    }

    if (m_entryFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryFile.c_str(), allocator).Move(), allocator);
    }

    if (m_entryPointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntryPoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entryPoint.c_str(), allocator).Move(), allocator);
    }

    if (m_mainArgsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainArgs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mainArgs.c_str(), allocator).Move(), allocator);
    }

}


string EntrypointInfo::GetStatement() const
{
    return m_statement;
}

void EntrypointInfo::SetStatement(const string& _statement)
{
    m_statement = _statement;
    m_statementHasBeenSet = true;
}

bool EntrypointInfo::StatementHasBeenSet() const
{
    return m_statementHasBeenSet;
}

string EntrypointInfo::GetEntryFile() const
{
    return m_entryFile;
}

void EntrypointInfo::SetEntryFile(const string& _entryFile)
{
    m_entryFile = _entryFile;
    m_entryFileHasBeenSet = true;
}

bool EntrypointInfo::EntryFileHasBeenSet() const
{
    return m_entryFileHasBeenSet;
}

string EntrypointInfo::GetEntryPoint() const
{
    return m_entryPoint;
}

void EntrypointInfo::SetEntryPoint(const string& _entryPoint)
{
    m_entryPoint = _entryPoint;
    m_entryPointHasBeenSet = true;
}

bool EntrypointInfo::EntryPointHasBeenSet() const
{
    return m_entryPointHasBeenSet;
}

string EntrypointInfo::GetMainArgs() const
{
    return m_mainArgs;
}

void EntrypointInfo::SetMainArgs(const string& _mainArgs)
{
    m_mainArgs = _mainArgs;
    m_mainArgsHasBeenSet = true;
}

bool EntrypointInfo::MainArgsHasBeenSet() const
{
    return m_mainArgsHasBeenSet;
}

