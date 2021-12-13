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

#include <tencentcloud/vod/v20180717/model/RestoreMediaTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

RestoreMediaTask::RestoreMediaTask() :
    m_fileIdHasBeenSet(false),
    m_originalStorageClassHasBeenSet(false),
    m_targetStorageClassHasBeenSet(false),
    m_restoreTierHasBeenSet(false),
    m_restoreDayHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome RestoreMediaTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreMediaTask.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("OriginalStorageClass") && !value["OriginalStorageClass"].IsNull())
    {
        if (!value["OriginalStorageClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreMediaTask.OriginalStorageClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalStorageClass = string(value["OriginalStorageClass"].GetString());
        m_originalStorageClassHasBeenSet = true;
    }

    if (value.HasMember("TargetStorageClass") && !value["TargetStorageClass"].IsNull())
    {
        if (!value["TargetStorageClass"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreMediaTask.TargetStorageClass` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetStorageClass = string(value["TargetStorageClass"].GetString());
        m_targetStorageClassHasBeenSet = true;
    }

    if (value.HasMember("RestoreTier") && !value["RestoreTier"].IsNull())
    {
        if (!value["RestoreTier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreMediaTask.RestoreTier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_restoreTier = string(value["RestoreTier"].GetString());
        m_restoreTierHasBeenSet = true;
    }

    if (value.HasMember("RestoreDay") && !value["RestoreDay"].IsNull())
    {
        if (!value["RestoreDay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreMediaTask.RestoreDay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restoreDay = value["RestoreDay"].GetInt64();
        m_restoreDayHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreMediaTask.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RestoreMediaTask.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RestoreMediaTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_originalStorageClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalStorageClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalStorageClass.c_str(), allocator).Move(), allocator);
    }

    if (m_targetStorageClassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetStorageClass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetStorageClass.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreTierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreTier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_restoreTier.c_str(), allocator).Move(), allocator);
    }

    if (m_restoreDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestoreDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restoreDay, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string RestoreMediaTask::GetFileId() const
{
    return m_fileId;
}

void RestoreMediaTask::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool RestoreMediaTask::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string RestoreMediaTask::GetOriginalStorageClass() const
{
    return m_originalStorageClass;
}

void RestoreMediaTask::SetOriginalStorageClass(const string& _originalStorageClass)
{
    m_originalStorageClass = _originalStorageClass;
    m_originalStorageClassHasBeenSet = true;
}

bool RestoreMediaTask::OriginalStorageClassHasBeenSet() const
{
    return m_originalStorageClassHasBeenSet;
}

string RestoreMediaTask::GetTargetStorageClass() const
{
    return m_targetStorageClass;
}

void RestoreMediaTask::SetTargetStorageClass(const string& _targetStorageClass)
{
    m_targetStorageClass = _targetStorageClass;
    m_targetStorageClassHasBeenSet = true;
}

bool RestoreMediaTask::TargetStorageClassHasBeenSet() const
{
    return m_targetStorageClassHasBeenSet;
}

string RestoreMediaTask::GetRestoreTier() const
{
    return m_restoreTier;
}

void RestoreMediaTask::SetRestoreTier(const string& _restoreTier)
{
    m_restoreTier = _restoreTier;
    m_restoreTierHasBeenSet = true;
}

bool RestoreMediaTask::RestoreTierHasBeenSet() const
{
    return m_restoreTierHasBeenSet;
}

int64_t RestoreMediaTask::GetRestoreDay() const
{
    return m_restoreDay;
}

void RestoreMediaTask::SetRestoreDay(const int64_t& _restoreDay)
{
    m_restoreDay = _restoreDay;
    m_restoreDayHasBeenSet = true;
}

bool RestoreMediaTask::RestoreDayHasBeenSet() const
{
    return m_restoreDayHasBeenSet;
}

int64_t RestoreMediaTask::GetStatus() const
{
    return m_status;
}

void RestoreMediaTask::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RestoreMediaTask::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RestoreMediaTask::GetMessage() const
{
    return m_message;
}

void RestoreMediaTask::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool RestoreMediaTask::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

