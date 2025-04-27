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

#include <tencentcloud/iotexplorer/v20190423/model/CloudStorageAIServiceTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

CloudStorageAIServiceTask::CloudStorageAIServiceTask() :
    m_taskIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_startTimeMsHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_endTimeMsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_filesHasBeenSet(false),
    m_filesInfoHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_customIdHasBeenSet(false)
{
}

CoreInternalOutcome CloudStorageAIServiceTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("ProductId") && !value["ProductId"].IsNull())
    {
        if (!value["ProductId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.ProductId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productId = string(value["ProductId"].GetString());
        m_productIdHasBeenSet = true;
    }

    if (value.HasMember("DeviceName") && !value["DeviceName"].IsNull())
    {
        if (!value["DeviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.DeviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deviceName = string(value["DeviceName"].GetString());
        m_deviceNameHasBeenSet = true;
    }

    if (value.HasMember("ChannelId") && !value["ChannelId"].IsNull())
    {
        if (!value["ChannelId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.ChannelId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = value["ChannelId"].GetUint64();
        m_channelIdHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("StartTimeMs") && !value["StartTimeMs"].IsNull())
    {
        if (!value["StartTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.StartTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeMs = value["StartTimeMs"].GetInt64();
        m_startTimeMsHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTimeMs") && !value["EndTimeMs"].IsNull())
    {
        if (!value["EndTimeMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.EndTimeMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeMs = value["EndTimeMs"].GetInt64();
        m_endTimeMsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Files") && !value["Files"].IsNull())
    {
        if (!value["Files"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.Files` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.FilesInfo` is not array type"));

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

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CustomId") && !value["CustomId"].IsNull())
    {
        if (!value["CustomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageAIServiceTask.CustomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customId = string(value["CustomId"].GetString());
        m_customIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudStorageAIServiceTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
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
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
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

}


string CloudStorageAIServiceTask::GetTaskId() const
{
    return m_taskId;
}

void CloudStorageAIServiceTask::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CloudStorageAIServiceTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string CloudStorageAIServiceTask::GetProductId() const
{
    return m_productId;
}

void CloudStorageAIServiceTask::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool CloudStorageAIServiceTask::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string CloudStorageAIServiceTask::GetDeviceName() const
{
    return m_deviceName;
}

void CloudStorageAIServiceTask::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool CloudStorageAIServiceTask::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t CloudStorageAIServiceTask::GetChannelId() const
{
    return m_channelId;
}

void CloudStorageAIServiceTask::SetChannelId(const uint64_t& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool CloudStorageAIServiceTask::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string CloudStorageAIServiceTask::GetServiceType() const
{
    return m_serviceType;
}

void CloudStorageAIServiceTask::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool CloudStorageAIServiceTask::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t CloudStorageAIServiceTask::GetStartTime() const
{
    return m_startTime;
}

void CloudStorageAIServiceTask::SetStartTime(const int64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool CloudStorageAIServiceTask::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

int64_t CloudStorageAIServiceTask::GetStartTimeMs() const
{
    return m_startTimeMs;
}

void CloudStorageAIServiceTask::SetStartTimeMs(const int64_t& _startTimeMs)
{
    m_startTimeMs = _startTimeMs;
    m_startTimeMsHasBeenSet = true;
}

bool CloudStorageAIServiceTask::StartTimeMsHasBeenSet() const
{
    return m_startTimeMsHasBeenSet;
}

int64_t CloudStorageAIServiceTask::GetEndTime() const
{
    return m_endTime;
}

void CloudStorageAIServiceTask::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool CloudStorageAIServiceTask::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t CloudStorageAIServiceTask::GetEndTimeMs() const
{
    return m_endTimeMs;
}

void CloudStorageAIServiceTask::SetEndTimeMs(const int64_t& _endTimeMs)
{
    m_endTimeMs = _endTimeMs;
    m_endTimeMsHasBeenSet = true;
}

bool CloudStorageAIServiceTask::EndTimeMsHasBeenSet() const
{
    return m_endTimeMsHasBeenSet;
}

uint64_t CloudStorageAIServiceTask::GetStatus() const
{
    return m_status;
}

void CloudStorageAIServiceTask::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudStorageAIServiceTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CloudStorageAIServiceTask::GetResult() const
{
    return m_result;
}

void CloudStorageAIServiceTask::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool CloudStorageAIServiceTask::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

vector<string> CloudStorageAIServiceTask::GetFiles() const
{
    return m_files;
}

void CloudStorageAIServiceTask::SetFiles(const vector<string>& _files)
{
    m_files = _files;
    m_filesHasBeenSet = true;
}

bool CloudStorageAIServiceTask::FilesHasBeenSet() const
{
    return m_filesHasBeenSet;
}

vector<CloudStorageAIServiceTaskFileInfo> CloudStorageAIServiceTask::GetFilesInfo() const
{
    return m_filesInfo;
}

void CloudStorageAIServiceTask::SetFilesInfo(const vector<CloudStorageAIServiceTaskFileInfo>& _filesInfo)
{
    m_filesInfo = _filesInfo;
    m_filesInfoHasBeenSet = true;
}

bool CloudStorageAIServiceTask::FilesInfoHasBeenSet() const
{
    return m_filesInfoHasBeenSet;
}

int64_t CloudStorageAIServiceTask::GetCreateTime() const
{
    return m_createTime;
}

void CloudStorageAIServiceTask::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudStorageAIServiceTask::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CloudStorageAIServiceTask::GetUpdateTime() const
{
    return m_updateTime;
}

void CloudStorageAIServiceTask::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CloudStorageAIServiceTask::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string CloudStorageAIServiceTask::GetCustomId() const
{
    return m_customId;
}

void CloudStorageAIServiceTask::SetCustomId(const string& _customId)
{
    m_customId = _customId;
    m_customIdHasBeenSet = true;
}

bool CloudStorageAIServiceTask::CustomIdHasBeenSet() const
{
    return m_customIdHasBeenSet;
}

