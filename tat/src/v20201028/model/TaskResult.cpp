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

#include <tencentcloud/tat/v20201028/model/TaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tat::V20201028::Model;
using namespace rapidjson;
using namespace std;

TaskResult::TaskResult() :
    m_exitCodeHasBeenSet(false),
    m_outputHasBeenSet(false),
    m_execStartTimeHasBeenSet(false),
    m_execEndTimeHasBeenSet(false)
{
}

CoreInternalOutcome TaskResult::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ExitCode") && !value["ExitCode"].IsNull())
    {
        if (!value["ExitCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TaskResult.ExitCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exitCode = value["ExitCode"].GetInt64();
        m_exitCodeHasBeenSet = true;
    }

    if (value.HasMember("Output") && !value["Output"].IsNull())
    {
        if (!value["Output"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskResult.Output` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_output = string(value["Output"].GetString());
        m_outputHasBeenSet = true;
    }

    if (value.HasMember("ExecStartTime") && !value["ExecStartTime"].IsNull())
    {
        if (!value["ExecStartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskResult.ExecStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execStartTime = string(value["ExecStartTime"].GetString());
        m_execStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ExecEndTime") && !value["ExecEndTime"].IsNull())
    {
        if (!value["ExecEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskResult.ExecEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_execEndTime = string(value["ExecEndTime"].GetString());
        m_execEndTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskResult::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_exitCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExitCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exitCode, allocator);
    }

    if (m_outputHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Output";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_output.c_str(), allocator).Move(), allocator);
    }

    if (m_execStartTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExecStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_execStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_execEndTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExecEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_execEndTime.c_str(), allocator).Move(), allocator);
    }

}


int64_t TaskResult::GetExitCode() const
{
    return m_exitCode;
}

void TaskResult::SetExitCode(const int64_t& _exitCode)
{
    m_exitCode = _exitCode;
    m_exitCodeHasBeenSet = true;
}

bool TaskResult::ExitCodeHasBeenSet() const
{
    return m_exitCodeHasBeenSet;
}

string TaskResult::GetOutput() const
{
    return m_output;
}

void TaskResult::SetOutput(const string& _output)
{
    m_output = _output;
    m_outputHasBeenSet = true;
}

bool TaskResult::OutputHasBeenSet() const
{
    return m_outputHasBeenSet;
}

string TaskResult::GetExecStartTime() const
{
    return m_execStartTime;
}

void TaskResult::SetExecStartTime(const string& _execStartTime)
{
    m_execStartTime = _execStartTime;
    m_execStartTimeHasBeenSet = true;
}

bool TaskResult::ExecStartTimeHasBeenSet() const
{
    return m_execStartTimeHasBeenSet;
}

string TaskResult::GetExecEndTime() const
{
    return m_execEndTime;
}

void TaskResult::SetExecEndTime(const string& _execEndTime)
{
    m_execEndTime = _execEndTime;
    m_execEndTimeHasBeenSet = true;
}

bool TaskResult::ExecEndTimeHasBeenSet() const
{
    return m_execEndTimeHasBeenSet;
}

