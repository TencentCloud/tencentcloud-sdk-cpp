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

#include <tencentcloud/cvd/v20201104/model/CommandDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

CommandDetail::CommandDetail() :
    m_uinHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_commandIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_invocationsHasBeenSet(false),
    m_runAsBoundUserHasBeenSet(false),
    m_runForegroundHasBeenSet(false)
{
}

CoreInternalOutcome CommandDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDetail.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDetail.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDetail.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDetail.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDetail.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("CommandId") && !value["CommandId"].IsNull())
    {
        if (!value["CommandId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDetail.CommandId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandId = string(value["CommandId"].GetString());
        m_commandIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDetail.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("Invocations") && !value["Invocations"].IsNull())
    {
        if (!value["Invocations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CommandDetail.Invocations` is not array type"));

        const rapidjson::Value &tmpValue = value["Invocations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InvocationDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invocations.push_back(item);
        }
        m_invocationsHasBeenSet = true;
    }

    if (value.HasMember("RunAsBoundUser") && !value["RunAsBoundUser"].IsNull())
    {
        if (!value["RunAsBoundUser"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDetail.RunAsBoundUser` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_runAsBoundUser = value["RunAsBoundUser"].GetBool();
        m_runAsBoundUserHasBeenSet = true;
    }

    if (value.HasMember("RunForeground") && !value["RunForeground"].IsNull())
    {
        if (!value["RunForeground"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommandDetail.RunForeground` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_runForeground = value["RunForeground"].GetBool();
        m_runForegroundHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommandDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_commandIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_invocationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invocations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invocations.begin(); itr != m_invocations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_runAsBoundUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAsBoundUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runAsBoundUser, allocator);
    }

    if (m_runForegroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunForeground";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runForeground, allocator);
    }

}


string CommandDetail::GetUin() const
{
    return m_uin;
}

void CommandDetail::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool CommandDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

int64_t CommandDetail::GetAppId() const
{
    return m_appId;
}

void CommandDetail::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CommandDetail::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CommandDetail::GetType() const
{
    return m_type;
}

void CommandDetail::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CommandDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CommandDetail::GetStatus() const
{
    return m_status;
}

void CommandDetail::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CommandDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CommandDetail::GetCommand() const
{
    return m_command;
}

void CommandDetail::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool CommandDetail::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string CommandDetail::GetCommandId() const
{
    return m_commandId;
}

void CommandDetail::SetCommandId(const string& _commandId)
{
    m_commandId = _commandId;
    m_commandIdHasBeenSet = true;
}

bool CommandDetail::CommandIdHasBeenSet() const
{
    return m_commandIdHasBeenSet;
}

string CommandDetail::GetCreateTime() const
{
    return m_createTime;
}

void CommandDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CommandDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CommandDetail::GetFinishTime() const
{
    return m_finishTime;
}

void CommandDetail::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool CommandDetail::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

vector<InvocationDetail> CommandDetail::GetInvocations() const
{
    return m_invocations;
}

void CommandDetail::SetInvocations(const vector<InvocationDetail>& _invocations)
{
    m_invocations = _invocations;
    m_invocationsHasBeenSet = true;
}

bool CommandDetail::InvocationsHasBeenSet() const
{
    return m_invocationsHasBeenSet;
}

bool CommandDetail::GetRunAsBoundUser() const
{
    return m_runAsBoundUser;
}

void CommandDetail::SetRunAsBoundUser(const bool& _runAsBoundUser)
{
    m_runAsBoundUser = _runAsBoundUser;
    m_runAsBoundUserHasBeenSet = true;
}

bool CommandDetail::RunAsBoundUserHasBeenSet() const
{
    return m_runAsBoundUserHasBeenSet;
}

bool CommandDetail::GetRunForeground() const
{
    return m_runForeground;
}

void CommandDetail::SetRunForeground(const bool& _runForeground)
{
    m_runForeground = _runForeground;
    m_runForegroundHasBeenSet = true;
}

bool CommandDetail::RunForegroundHasBeenSet() const
{
    return m_runForegroundHasBeenSet;
}

