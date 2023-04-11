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

#include <tencentcloud/tiw/v20190919/model/RunningTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

RunningTaskItem::RunningTaskItem() :
    m_sdkAppIDHasBeenSet(false),
    m_taskIDHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_cancelTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_fileURLHasBeenSet(false),
    m_roomIDHasBeenSet(false)
{
}

CoreInternalOutcome RunningTaskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SdkAppID") && !value["SdkAppID"].IsNull())
    {
        if (!value["SdkAppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTaskItem.SdkAppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppID = value["SdkAppID"].GetInt64();
        m_sdkAppIDHasBeenSet = true;
    }

    if (value.HasMember("TaskID") && !value["TaskID"].IsNull())
    {
        if (!value["TaskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTaskItem.TaskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskID = string(value["TaskID"].GetString());
        m_taskIDHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTaskItem.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTaskItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CancelTime") && !value["CancelTime"].IsNull())
    {
        if (!value["CancelTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTaskItem.CancelTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cancelTime = string(value["CancelTime"].GetString());
        m_cancelTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTaskItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTaskItem.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("FileURL") && !value["FileURL"].IsNull())
    {
        if (!value["FileURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTaskItem.FileURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileURL = string(value["FileURL"].GetString());
        m_fileURLHasBeenSet = true;
    }

    if (value.HasMember("RoomID") && !value["RoomID"].IsNull())
    {
        if (!value["RoomID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RunningTaskItem.RoomID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomID = value["RoomID"].GetInt64();
        m_roomIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RunningTaskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdkAppIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppID, allocator);
    }

    if (m_taskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskID.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cancelTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CancelTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cancelTime.c_str(), allocator).Move(), allocator);
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

    if (m_fileURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileURL.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomID, allocator);
    }

}


int64_t RunningTaskItem::GetSdkAppID() const
{
    return m_sdkAppID;
}

void RunningTaskItem::SetSdkAppID(const int64_t& _sdkAppID)
{
    m_sdkAppID = _sdkAppID;
    m_sdkAppIDHasBeenSet = true;
}

bool RunningTaskItem::SdkAppIDHasBeenSet() const
{
    return m_sdkAppIDHasBeenSet;
}

string RunningTaskItem::GetTaskID() const
{
    return m_taskID;
}

void RunningTaskItem::SetTaskID(const string& _taskID)
{
    m_taskID = _taskID;
    m_taskIDHasBeenSet = true;
}

bool RunningTaskItem::TaskIDHasBeenSet() const
{
    return m_taskIDHasBeenSet;
}

string RunningTaskItem::GetTaskType() const
{
    return m_taskType;
}

void RunningTaskItem::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool RunningTaskItem::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string RunningTaskItem::GetCreateTime() const
{
    return m_createTime;
}

void RunningTaskItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RunningTaskItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RunningTaskItem::GetCancelTime() const
{
    return m_cancelTime;
}

void RunningTaskItem::SetCancelTime(const string& _cancelTime)
{
    m_cancelTime = _cancelTime;
    m_cancelTimeHasBeenSet = true;
}

bool RunningTaskItem::CancelTimeHasBeenSet() const
{
    return m_cancelTimeHasBeenSet;
}

string RunningTaskItem::GetStatus() const
{
    return m_status;
}

void RunningTaskItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RunningTaskItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RunningTaskItem::GetProgress() const
{
    return m_progress;
}

void RunningTaskItem::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool RunningTaskItem::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string RunningTaskItem::GetFileURL() const
{
    return m_fileURL;
}

void RunningTaskItem::SetFileURL(const string& _fileURL)
{
    m_fileURL = _fileURL;
    m_fileURLHasBeenSet = true;
}

bool RunningTaskItem::FileURLHasBeenSet() const
{
    return m_fileURLHasBeenSet;
}

int64_t RunningTaskItem::GetRoomID() const
{
    return m_roomID;
}

void RunningTaskItem::SetRoomID(const int64_t& _roomID)
{
    m_roomID = _roomID;
    m_roomIDHasBeenSet = true;
}

bool RunningTaskItem::RoomIDHasBeenSet() const
{
    return m_roomIDHasBeenSet;
}

