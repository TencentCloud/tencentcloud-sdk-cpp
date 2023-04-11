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

#include <tencentcloud/dasb/v20191018/model/Command.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

Command::Command() :
    m_cmdHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_timeOffsetHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome Command::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Cmd") && !value["Cmd"].IsNull())
    {
        if (!value["Cmd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Command.Cmd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cmd = string(value["Cmd"].GetString());
        m_cmdHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Command.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("TimeOffset") && !value["TimeOffset"].IsNull())
    {
        if (!value["TimeOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Command.TimeOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeOffset = value["TimeOffset"].GetUint64();
        m_timeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Command.Action` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_action = value["Action"].GetInt64();
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Command::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cmdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cmd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cmd.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_timeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeOffset, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_action, allocator);
    }

}


string Command::GetCmd() const
{
    return m_cmd;
}

void Command::SetCmd(const string& _cmd)
{
    m_cmd = _cmd;
    m_cmdHasBeenSet = true;
}

bool Command::CmdHasBeenSet() const
{
    return m_cmdHasBeenSet;
}

string Command::GetTime() const
{
    return m_time;
}

void Command::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool Command::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

uint64_t Command::GetTimeOffset() const
{
    return m_timeOffset;
}

void Command::SetTimeOffset(const uint64_t& _timeOffset)
{
    m_timeOffset = _timeOffset;
    m_timeOffsetHasBeenSet = true;
}

bool Command::TimeOffsetHasBeenSet() const
{
    return m_timeOffsetHasBeenSet;
}

int64_t Command::GetAction() const
{
    return m_action;
}

void Command::SetAction(const int64_t& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool Command::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

