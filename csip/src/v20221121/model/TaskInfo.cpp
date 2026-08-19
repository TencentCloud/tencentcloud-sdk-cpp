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

#include <tencentcloud/csip/v20221121/model/TaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

TaskInfo::TaskInfo() :
    m_scanTimeHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

CoreInternalOutcome TaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScanTime") && !value["ScanTime"].IsNull())
    {
        if (!value["ScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.ScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanTime = string(value["ScanTime"].GetString());
        m_scanTimeHasBeenSet = true;
    }

    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(value["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInfo.Progress` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetUint64();
        m_progressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

}


string TaskInfo::GetScanTime() const
{
    return m_scanTime;
}

void TaskInfo::SetScanTime(const string& _scanTime)
{
    m_scanTime = _scanTime;
    m_scanTimeHasBeenSet = true;
}

bool TaskInfo::ScanTimeHasBeenSet() const
{
    return m_scanTimeHasBeenSet;
}

string TaskInfo::GetTaskID() const
{
    return m_taskID;
}

void TaskInfo::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool TaskInfo::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string TaskInfo::GetStatus() const
{
    return m_status;
}

void TaskInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool TaskInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t TaskInfo::GetProgress() const
{
    return m_progress;
}

void TaskInfo::SetProgress(const uint64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool TaskInfo::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

