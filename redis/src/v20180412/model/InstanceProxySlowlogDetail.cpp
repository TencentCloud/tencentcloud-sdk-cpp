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

#include <tencentcloud/redis/v20180412/model/InstanceProxySlowlogDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

InstanceProxySlowlogDetail::InstanceProxySlowlogDetail() :
    m_durationHasBeenSet(false),
    m_clientHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_commandLineHasBeenSet(false),
    m_executeTimeHasBeenSet(false)
{
}

CoreInternalOutcome InstanceProxySlowlogDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceProxySlowlogDetail.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Client") && !value["Client"].IsNull())
    {
        if (!value["Client"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceProxySlowlogDetail.Client` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_client = string(value["Client"].GetString());
        m_clientHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceProxySlowlogDetail.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("CommandLine") && !value["CommandLine"].IsNull())
    {
        if (!value["CommandLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceProxySlowlogDetail.CommandLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandLine = string(value["CommandLine"].GetString());
        m_commandLineHasBeenSet = true;
    }

    if (value.HasMember("ExecuteTime") && !value["ExecuteTime"].IsNull())
    {
        if (!value["ExecuteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceProxySlowlogDetail.ExecuteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeTime = string(value["ExecuteTime"].GetString());
        m_executeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceProxySlowlogDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
    }

    if (m_clientHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Client";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_client.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_commandLineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CommandLine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_commandLine.c_str(), allocator).Move(), allocator);
    }

    if (m_executeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t InstanceProxySlowlogDetail::GetDuration() const
{
    return m_duration;
}

void InstanceProxySlowlogDetail::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool InstanceProxySlowlogDetail::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string InstanceProxySlowlogDetail::GetClient() const
{
    return m_client;
}

void InstanceProxySlowlogDetail::SetClient(const string& _client)
{
    m_client = _client;
    m_clientHasBeenSet = true;
}

bool InstanceProxySlowlogDetail::ClientHasBeenSet() const
{
    return m_clientHasBeenSet;
}

string InstanceProxySlowlogDetail::GetCommand() const
{
    return m_command;
}

void InstanceProxySlowlogDetail::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool InstanceProxySlowlogDetail::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string InstanceProxySlowlogDetail::GetCommandLine() const
{
    return m_commandLine;
}

void InstanceProxySlowlogDetail::SetCommandLine(const string& _commandLine)
{
    m_commandLine = _commandLine;
    m_commandLineHasBeenSet = true;
}

bool InstanceProxySlowlogDetail::CommandLineHasBeenSet() const
{
    return m_commandLineHasBeenSet;
}

string InstanceProxySlowlogDetail::GetExecuteTime() const
{
    return m_executeTime;
}

void InstanceProxySlowlogDetail::SetExecuteTime(const string& _executeTime)
{
    m_executeTime = _executeTime;
    m_executeTimeHasBeenSet = true;
}

bool InstanceProxySlowlogDetail::ExecuteTimeHasBeenSet() const
{
    return m_executeTimeHasBeenSet;
}

