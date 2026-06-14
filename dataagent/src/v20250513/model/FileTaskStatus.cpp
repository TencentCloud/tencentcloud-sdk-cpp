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

#include <tencentcloud/dataagent/v20250513/model/FileTaskStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

FileTaskStatus::FileTaskStatus() :
    m_fileIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_isTerminatedHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome FileTaskStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTaskStatus.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTaskStatus.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("IsTerminated") && !value["IsTerminated"].IsNull())
    {
        if (!value["IsTerminated"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTaskStatus.IsTerminated` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isTerminated = value["IsTerminated"].GetUint64();
        m_isTerminatedHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileTaskStatus.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileTaskStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_isTerminatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsTerminated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isTerminated, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

}


string FileTaskStatus::GetFileId() const
{
    return m_fileId;
}

void FileTaskStatus::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool FileTaskStatus::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

uint64_t FileTaskStatus::GetStatus() const
{
    return m_status;
}

void FileTaskStatus::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FileTaskStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t FileTaskStatus::GetIsTerminated() const
{
    return m_isTerminated;
}

void FileTaskStatus::SetIsTerminated(const uint64_t& _isTerminated)
{
    m_isTerminated = _isTerminated;
    m_isTerminatedHasBeenSet = true;
}

bool FileTaskStatus::IsTerminatedHasBeenSet() const
{
    return m_isTerminatedHasBeenSet;
}

string FileTaskStatus::GetErrorMsg() const
{
    return m_errorMsg;
}

void FileTaskStatus::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool FileTaskStatus::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

