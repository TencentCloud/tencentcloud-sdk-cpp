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

#include <tencentcloud/ioa/v20220601/model/DeviceDownloadTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DeviceDownloadTask::DeviceDownloadTask() :
    m_downloadURLHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome DeviceDownloadTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DownloadURL") && !value["DownloadURL"].IsNull())
    {
        if (!value["DownloadURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDownloadTask.DownloadURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadURL = string(value["DownloadURL"].GetString());
        m_downloadURLHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeviceDownloadTask.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeviceDownloadTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_downloadURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadURL.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

}


string DeviceDownloadTask::GetDownloadURL() const
{
    return m_downloadURL;
}

void DeviceDownloadTask::SetDownloadURL(const string& _downloadURL)
{
    m_downloadURL = _downloadURL;
    m_downloadURLHasBeenSet = true;
}

bool DeviceDownloadTask::DownloadURLHasBeenSet() const
{
    return m_downloadURLHasBeenSet;
}

int64_t DeviceDownloadTask::GetTaskId() const
{
    return m_taskId;
}

void DeviceDownloadTask::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DeviceDownloadTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

