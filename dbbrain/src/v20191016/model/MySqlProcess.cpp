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

#include <tencentcloud/dbbrain/v20191016/model/MySqlProcess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20191016::Model;
using namespace std;

MySqlProcess::MySqlProcess() :
    m_iDHasBeenSet(false),
    m_userHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dBHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

CoreInternalOutcome MySqlProcess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySqlProcess.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySqlProcess.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySqlProcess.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("DB") && !value["DB"].IsNull())
    {
        if (!value["DB"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySqlProcess.DB` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dB = string(value["DB"].GetString());
        m_dBHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySqlProcess.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySqlProcess.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySqlProcess.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MySqlProcess.Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(value["Info"].GetString());
        m_infoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MySqlProcess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_dBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dB.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }

}


string MySqlProcess::GetID() const
{
    return m_iD;
}

void MySqlProcess::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool MySqlProcess::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string MySqlProcess::GetUser() const
{
    return m_user;
}

void MySqlProcess::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool MySqlProcess::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string MySqlProcess::GetHost() const
{
    return m_host;
}

void MySqlProcess::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool MySqlProcess::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string MySqlProcess::GetDB() const
{
    return m_dB;
}

void MySqlProcess::SetDB(const string& _dB)
{
    m_dB = _dB;
    m_dBHasBeenSet = true;
}

bool MySqlProcess::DBHasBeenSet() const
{
    return m_dBHasBeenSet;
}

string MySqlProcess::GetState() const
{
    return m_state;
}

void MySqlProcess::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool MySqlProcess::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string MySqlProcess::GetCommand() const
{
    return m_command;
}

void MySqlProcess::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool MySqlProcess::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string MySqlProcess::GetTime() const
{
    return m_time;
}

void MySqlProcess::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool MySqlProcess::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string MySqlProcess::GetInfo() const
{
    return m_info;
}

void MySqlProcess::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool MySqlProcess::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

