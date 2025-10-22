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

#include <tencentcloud/iotexplorer/v20190423/model/VisionRecognitionTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

VisionRecognitionTask::VisionRecognitionTask() :
    m_taskIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_startTimeMsHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_endTimeMsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_customIdHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_filesInfoHasBeenSet(false)
{
}

CoreInternalOutcome VisionRecognitionTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.ChannelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = value["ChannelId"].GetUint64();
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTimeMs") && !value["StartTimeMs"].IsNull())
    {
        if (!value["StartTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.StartTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeMs = value["StartTimeMs"].GetInt64();
        m_startTimeMsHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTimeMs") && !value["EndTimeMs"].IsNull())
    {
        if (!value["EndTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.EndTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeMs = value["EndTimeMs"].GetInt64();
        m_endTimeMsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CustomId") && !value["CustomId"].IsNull())
    {
        if (!value["CustomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.CustomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customId = string(value["CustomId"].GetString());
        m_customIdHasBeenSet = true;
    }

    if (value.HasMember("Files") && !value["Files"].IsNull())
    {
        if (!value["Files"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.Files` is not array type"));

        const rapidjson::Value &tmpValue = value["Files"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_files.push_back((*itr).GetString());
        }
        m_filesHasBeenSet = true;
    }

    if (value.HasMember("FilesInfo") && !value["FilesInfo"].IsNull())
    {
        if (!value["FilesInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionTask.FilesInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["FilesInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudStorageAIServiceTaskFileInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filesInfo.push_back(item);
        }
        m_filesInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VisionRecognitionTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelId, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_startTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeMs, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_endTimeMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeMs, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_customIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customId.c_str(), allocator).Move(), allocator);
    }

    if (m_filesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Files";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_files.begin(); itr != m_files.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_filesInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilesInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filesInfo.begin(); itr != m_filesInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string VisionRecognitionTask::GetTaskId() const
{
    return m_taskId;
}

void VisionRecognitionTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool VisionRecognitionTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string VisionRecognitionTask::GetProductId() const
{
    return m_productId;
}

void VisionRecognitionTask::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool VisionRecognitionTask::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string VisionRecognitionTask::GetDeviceName() const
{
    return m_deviceName;
}

void VisionRecognitionTask::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool VisionRecognitionTask::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t VisionRecognitionTask::GetChannelId() const
{
    return m_channelId;
}

void VisionRecognitionTask::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool VisionRecognitionTask::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

int64_t VisionRecognitionTask::GetStartTime() const
{
    return m_startTime;
}

void VisionRecognitionTask::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool VisionRecognitionTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t VisionRecognitionTask::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void VisionRecognitionTask::SetStartTimeMs(const int64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool VisionRecognitionTask::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

int64_t VisionRecognitionTask::GetEndTime() const
{
    return m_endTime;
}

void VisionRecognitionTask::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool VisionRecognitionTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t VisionRecognitionTask::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void VisionRecognitionTask::SetEndTimeMs(const int64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool VisionRecognitionTask::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

uint64_t VisionRecognitionTask::GetStatus() const
{
    return m_status;
}

void VisionRecognitionTask::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VisionRecognitionTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

VisionRecognitionResult VisionRecognitionTask::GetResult() const
{
    return m_result;
}

void VisionRecognitionTask::SetResult(const VisionRecognitionResult& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool VisionRecognitionTask::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

int64_t VisionRecognitionTask::GetCreateTime() const
{
    return m_createTime;
}

void VisionRecognitionTask::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool VisionRecognitionTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t VisionRecognitionTask::GetUpdateTime() const
{
    return m_updateTime;
}

void VisionRecognitionTask::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VisionRecognitionTask::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string VisionRecognitionTask::GetCustomId() const
{
    return m_customId;
}

void VisionRecognitionTask::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool VisionRecognitionTask::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

vector<string> VisionRecognitionTask::GetFiles() const
{
    return m_files;
}

void VisionRecognitionTask::SetFiles(const vector<string>& _files)
{
    m_files = _files;
    m_filesHasBeenSet = true;
}

bool VisionRecognitionTask::FilesHasBeenSet() const
{
    return m_filesHasBeenSet;
}

vector<CloudStorageAIServiceTaskFileInfo> VisionRecognitionTask::GetFilesInfo() const
{
    return m_filesInfo;
}

void VisionRecognitionTask::SetFilesInfo(const vector<CloudStorageAIServiceTaskFileInfo>& _filesInfo)
{
    m_filesInfo = _filesInfo;
    m_filesInfoHasBeenSet = true;
}

bool VisionRecognitionTask::FilesInfoHasBeenSet() const
{
    return m_filesInfoHasBeenSet;
}

