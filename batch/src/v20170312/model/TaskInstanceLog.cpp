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

#include <tencentcloud/batch/v20170312/model/TaskInstanceLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

TaskInstanceLog::TaskInstanceLog() :
    m_taskInstanceIndexHasBeenSet(false),
    m_stdoutLogHasBeenSet(false),
    m_stderrLogHasBeenSet(false),
    m_stdoutRedirectPathHasBeenSet(false),
    m_stderrRedirectPathHasBeenSet(false),
    m_stdoutRedirectFileNameHasBeenSet(false),
    m_stderrRedirectFileNameHasBeenSet(false)
{
}

CoreInternalOutcome TaskInstanceLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskInstanceIndex") && !value["TaskInstanceIndex"].IsNull())
    {
        if (!value["TaskInstanceIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceLog.TaskInstanceIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskInstanceIndex = value["TaskInstanceIndex"].GetUint64();
        m_taskInstanceIndexHasBeenSet = true;
    }

    if (value.HasMember("StdoutLog") && !value["StdoutLog"].IsNull())
    {
        if (!value["StdoutLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceLog.StdoutLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stdoutLog = string(value["StdoutLog"].GetString());
        m_stdoutLogHasBeenSet = true;
    }

    if (value.HasMember("StderrLog") && !value["StderrLog"].IsNull())
    {
        if (!value["StderrLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceLog.StderrLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stderrLog = string(value["StderrLog"].GetString());
        m_stderrLogHasBeenSet = true;
    }

    if (value.HasMember("StdoutRedirectPath") && !value["StdoutRedirectPath"].IsNull())
    {
        if (!value["StdoutRedirectPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceLog.StdoutRedirectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stdoutRedirectPath = string(value["StdoutRedirectPath"].GetString());
        m_stdoutRedirectPathHasBeenSet = true;
    }

    if (value.HasMember("StderrRedirectPath") && !value["StderrRedirectPath"].IsNull())
    {
        if (!value["StderrRedirectPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceLog.StderrRedirectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stderrRedirectPath = string(value["StderrRedirectPath"].GetString());
        m_stderrRedirectPathHasBeenSet = true;
    }

    if (value.HasMember("StdoutRedirectFileName") && !value["StdoutRedirectFileName"].IsNull())
    {
        if (!value["StdoutRedirectFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceLog.StdoutRedirectFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stdoutRedirectFileName = string(value["StdoutRedirectFileName"].GetString());
        m_stdoutRedirectFileNameHasBeenSet = true;
    }

    if (value.HasMember("StderrRedirectFileName") && !value["StderrRedirectFileName"].IsNull())
    {
        if (!value["StderrRedirectFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInstanceLog.StderrRedirectFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stderrRedirectFileName = string(value["StderrRedirectFileName"].GetString());
        m_stderrRedirectFileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInstanceLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskInstanceIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInstanceIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskInstanceIndex, allocator);
    }

    if (m_stdoutLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StdoutLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stdoutLog.c_str(), allocator).Move(), allocator);
    }

    if (m_stderrLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StderrLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stderrLog.c_str(), allocator).Move(), allocator);
    }

    if (m_stdoutRedirectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StdoutRedirectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stdoutRedirectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_stderrRedirectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StderrRedirectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stderrRedirectPath.c_str(), allocator).Move(), allocator);
    }

    if (m_stdoutRedirectFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StdoutRedirectFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stdoutRedirectFileName.c_str(), allocator).Move(), allocator);
    }

    if (m_stderrRedirectFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StderrRedirectFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stderrRedirectFileName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TaskInstanceLog::GetTaskInstanceIndex() const
{
    return m_taskInstanceIndex;
}

void TaskInstanceLog::SetTaskInstanceIndex(const uint64_t& _taskInstanceIndex)
{
    m_taskInstanceIndex = _taskInstanceIndex;
    m_taskInstanceIndexHasBeenSet = true;
}

bool TaskInstanceLog::TaskInstanceIndexHasBeenSet() const
{
    return m_taskInstanceIndexHasBeenSet;
}

string TaskInstanceLog::GetStdoutLog() const
{
    return m_stdoutLog;
}

void TaskInstanceLog::SetStdoutLog(const string& _stdoutLog)
{
    m_stdoutLog = _stdoutLog;
    m_stdoutLogHasBeenSet = true;
}

bool TaskInstanceLog::StdoutLogHasBeenSet() const
{
    return m_stdoutLogHasBeenSet;
}

string TaskInstanceLog::GetStderrLog() const
{
    return m_stderrLog;
}

void TaskInstanceLog::SetStderrLog(const string& _stderrLog)
{
    m_stderrLog = _stderrLog;
    m_stderrLogHasBeenSet = true;
}

bool TaskInstanceLog::StderrLogHasBeenSet() const
{
    return m_stderrLogHasBeenSet;
}

string TaskInstanceLog::GetStdoutRedirectPath() const
{
    return m_stdoutRedirectPath;
}

void TaskInstanceLog::SetStdoutRedirectPath(const string& _stdoutRedirectPath)
{
    m_stdoutRedirectPath = _stdoutRedirectPath;
    m_stdoutRedirectPathHasBeenSet = true;
}

bool TaskInstanceLog::StdoutRedirectPathHasBeenSet() const
{
    return m_stdoutRedirectPathHasBeenSet;
}

string TaskInstanceLog::GetStderrRedirectPath() const
{
    return m_stderrRedirectPath;
}

void TaskInstanceLog::SetStderrRedirectPath(const string& _stderrRedirectPath)
{
    m_stderrRedirectPath = _stderrRedirectPath;
    m_stderrRedirectPathHasBeenSet = true;
}

bool TaskInstanceLog::StderrRedirectPathHasBeenSet() const
{
    return m_stderrRedirectPathHasBeenSet;
}

string TaskInstanceLog::GetStdoutRedirectFileName() const
{
    return m_stdoutRedirectFileName;
}

void TaskInstanceLog::SetStdoutRedirectFileName(const string& _stdoutRedirectFileName)
{
    m_stdoutRedirectFileName = _stdoutRedirectFileName;
    m_stdoutRedirectFileNameHasBeenSet = true;
}

bool TaskInstanceLog::StdoutRedirectFileNameHasBeenSet() const
{
    return m_stdoutRedirectFileNameHasBeenSet;
}

string TaskInstanceLog::GetStderrRedirectFileName() const
{
    return m_stderrRedirectFileName;
}

void TaskInstanceLog::SetStderrRedirectFileName(const string& _stderrRedirectFileName)
{
    m_stderrRedirectFileName = _stderrRedirectFileName;
    m_stderrRedirectFileNameHasBeenSet = true;
}

bool TaskInstanceLog::StderrRedirectFileNameHasBeenSet() const
{
    return m_stderrRedirectFileNameHasBeenSet;
}

