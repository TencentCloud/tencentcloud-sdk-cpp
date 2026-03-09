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

#include <tencentcloud/tcb/v20180608/model/MgoCommandParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

MgoCommandParam::MgoCommandParam() :
    m_tableNameHasBeenSet(false),
    m_commandTypeHasBeenSet(false),
    m_commandHasBeenSet(false)
{
}

CoreInternalOutcome MgoCommandParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MgoCommandParam.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }

    if (value.HasMember("CommandType") && !value["CommandType"].IsNull())
    {
        if (!value["CommandType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MgoCommandParam.CommandType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandType = string(value["CommandType"].GetString());
        m_commandTypeHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MgoCommandParam.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MgoCommandParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

    if (m_commandTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandType.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

}


string MgoCommandParam::GetTableName() const
{
    return m_tableName;
}

void MgoCommandParam::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool MgoCommandParam::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

string MgoCommandParam::GetCommandType() const
{
    return m_commandType;
}

void MgoCommandParam::SetCommandType(const string& _commandType)
{
    m_commandType = _commandType;
    m_commandTypeHasBeenSet = true;
}

bool MgoCommandParam::CommandTypeHasBeenSet() const
{
    return m_commandTypeHasBeenSet;
}

string MgoCommandParam::GetCommand() const
{
    return m_command;
}

void MgoCommandParam::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool MgoCommandParam::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

