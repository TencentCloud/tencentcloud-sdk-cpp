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

#include <tencentcloud/mariadb/v20170312/model/Process.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

Process::Process() :
    m_idHasBeenSet(false),
    m_userHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dbHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_processStartTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

CoreInternalOutcome Process::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("User") && !value["User"].IsNull())
    {
        if (!value["User"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.User` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_user = string(value["User"].GetString());
        m_userHasBeenSet = true;
    }

    if (value.HasMember("Host") && !value["Host"].IsNull())
    {
        if (!value["Host"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Host` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_host = string(value["Host"].GetString());
        m_hostHasBeenSet = true;
    }

    if (value.HasMember("Db") && !value["Db"].IsNull())
    {
        if (!value["Db"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Db` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_db = string(value["Db"].GetString());
        m_dbHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Time` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_time = value["Time"].GetInt64();
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("ProcessStartTime") && !value["ProcessStartTime"].IsNull())
    {
        if (!value["ProcessStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.ProcessStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processStartTime = string(value["ProcessStartTime"].GetString());
        m_processStartTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Process.Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(value["Info"].GetString());
        m_infoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Process::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
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

    if (m_dbHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Db";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_db.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, m_time, allocator);
    }

    if (m_processStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }

}


int64_t Process::GetId() const
{
    return m_id;
}

void Process::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Process::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Process::GetUser() const
{
    return m_user;
}

void Process::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool Process::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string Process::GetHost() const
{
    return m_host;
}

void Process::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool Process::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string Process::GetDb() const
{
    return m_db;
}

void Process::SetDb(const string& _db)
{
    m_db = _db;
    m_dbHasBeenSet = true;
}

bool Process::DbHasBeenSet() const
{
    return m_dbHasBeenSet;
}

string Process::GetCommand() const
{
    return m_command;
}

void Process::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool Process::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

int64_t Process::GetTime() const
{
    return m_time;
}

void Process::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool Process::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string Process::GetProcessStartTime() const
{
    return m_processStartTime;
}

void Process::SetProcessStartTime(const string& _processStartTime)
{
    m_processStartTime = _processStartTime;
    m_processStartTimeHasBeenSet = true;
}

bool Process::ProcessStartTimeHasBeenSet() const
{
    return m_processStartTimeHasBeenSet;
}

string Process::GetState() const
{
    return m_state;
}

void Process::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool Process::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string Process::GetInfo() const
{
    return m_info;
}

void Process::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool Process::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

