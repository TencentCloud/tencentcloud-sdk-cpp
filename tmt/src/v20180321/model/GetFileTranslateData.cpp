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

#include <tencentcloud/tmt/v20180321/model/GetFileTranslateData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

GetFileTranslateData::GetFileTranslateData() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fileDataHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_usedAmountHasBeenSet(false)
{
}

CoreInternalOutcome GetFileTranslateData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileTranslateData.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileTranslateData.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FileData") && !value["FileData"].IsNull())
    {
        if (!value["FileData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileTranslateData.FileData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileData = string(value["FileData"].GetString());
        m_fileDataHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileTranslateData.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileTranslateData.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("UsedAmount") && !value["UsedAmount"].IsNull())
    {
        if (!value["UsedAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileTranslateData.UsedAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedAmount = value["UsedAmount"].GetInt64();
        m_usedAmountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetFileTranslateData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_fileDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileData.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_usedAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedAmount, allocator);
    }

}


string GetFileTranslateData::GetTaskId() const
{
    return m_taskId;
}

void GetFileTranslateData::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool GetFileTranslateData::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string GetFileTranslateData::GetStatus() const
{
    return m_status;
}

void GetFileTranslateData::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool GetFileTranslateData::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GetFileTranslateData::GetFileData() const
{
    return m_fileData;
}

void GetFileTranslateData::SetFileData(const string& _fileData)
{
    m_fileData = _fileData;
    m_fileDataHasBeenSet = true;
}

bool GetFileTranslateData::FileDataHasBeenSet() const
{
    return m_fileDataHasBeenSet;
}

string GetFileTranslateData::GetMessage() const
{
    return m_message;
}

void GetFileTranslateData::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool GetFileTranslateData::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

int64_t GetFileTranslateData::GetProgress() const
{
    return m_progress;
}

void GetFileTranslateData::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool GetFileTranslateData::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

int64_t GetFileTranslateData::GetUsedAmount() const
{
    return m_usedAmount;
}

void GetFileTranslateData::SetUsedAmount(const int64_t& _usedAmount)
{
    m_usedAmount = _usedAmount;
    m_usedAmountHasBeenSet = true;
}

bool GetFileTranslateData::UsedAmountHasBeenSet() const
{
    return m_usedAmountHasBeenSet;
}

