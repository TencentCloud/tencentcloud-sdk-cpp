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

#include <tencentcloud/keewidb/v20220308/model/TendisSlowLogDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Keewidb::V20220308::Model;
using namespace std;

TendisSlowLogDetail::TendisSlowLogDetail() :
    m_executeTimeHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_commandLineHasBeenSet(false),
    m_nodeHasBeenSet(false)
{
}

CoreInternalOutcome TendisSlowLogDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExecuteTime") && !value["ExecuteTime"].IsNull())
    {
        if (!value["ExecuteTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TendisSlowLogDetail.ExecuteTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executeTime = string(value["ExecuteTime"].GetString());
        m_executeTimeHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TendisSlowLogDetail.Duration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_duration = value["Duration"].GetInt64();
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Command") && !value["Command"].IsNull())
    {
        if (!value["Command"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TendisSlowLogDetail.Command` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_command = string(value["Command"].GetString());
        m_commandHasBeenSet = true;
    }

    if (value.HasMember("CommandLine") && !value["CommandLine"].IsNull())
    {
        if (!value["CommandLine"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TendisSlowLogDetail.CommandLine` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_commandLine = string(value["CommandLine"].GetString());
        m_commandLineHasBeenSet = true;
    }

    if (value.HasMember("Node") && !value["Node"].IsNull())
    {
        if (!value["Node"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TendisSlowLogDetail.Node` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_node = string(value["Node"].GetString());
        m_nodeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TendisSlowLogDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_executeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecuteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_duration, allocator);
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

    if (m_nodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Node";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_node.c_str(), allocator).Move(), allocator);
    }

}


string TendisSlowLogDetail::GetExecuteTime() const
{
    return m_executeTime;
}

void TendisSlowLogDetail::SetExecuteTime(const string& _executeTime)
{
    m_executeTime = _executeTime;
    m_executeTimeHasBeenSet = true;
}

bool TendisSlowLogDetail::ExecuteTimeHasBeenSet() const
{
    return m_executeTimeHasBeenSet;
}

int64_t TendisSlowLogDetail::GetDuration() const
{
    return m_duration;
}

void TendisSlowLogDetail::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool TendisSlowLogDetail::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string TendisSlowLogDetail::GetCommand() const
{
    return m_command;
}

void TendisSlowLogDetail::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool TendisSlowLogDetail::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string TendisSlowLogDetail::GetCommandLine() const
{
    return m_commandLine;
}

void TendisSlowLogDetail::SetCommandLine(const string& _commandLine)
{
    m_commandLine = _commandLine;
    m_commandLineHasBeenSet = true;
}

bool TendisSlowLogDetail::CommandLineHasBeenSet() const
{
    return m_commandLineHasBeenSet;
}

string TendisSlowLogDetail::GetNode() const
{
    return m_node;
}

void TendisSlowLogDetail::SetNode(const string& _node)
{
    m_node = _node;
    m_nodeHasBeenSet = true;
}

bool TendisSlowLogDetail::NodeHasBeenSet() const
{
    return m_nodeHasBeenSet;
}

