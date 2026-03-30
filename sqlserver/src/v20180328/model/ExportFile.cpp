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

#include <tencentcloud/sqlserver/v20180328/model/ExportFile.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ExportFile::ExportFile() :
    m_fileNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_progressHasBeenSet(false),
    m_finishTimeHasBeenSet(false),
    m_asyncRequestIdHasBeenSet(false)
{
}

CoreInternalOutcome ExportFile::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportFile.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportFile.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportFile.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportFile.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportFile.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportFile.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("Progress") && !value["Progress"].IsNull())
    {
        if (!value["Progress"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportFile.Progress` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_progress = value["Progress"].GetInt64();
        m_progressHasBeenSet = true;
    }

    if (value.HasMember("FinishTime") && !value["FinishTime"].IsNull())
    {
        if (!value["FinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportFile.FinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishTime = string(value["FinishTime"].GetString());
        m_finishTimeHasBeenSet = true;
    }

    if (value.HasMember("AsyncRequestId") && !value["AsyncRequestId"].IsNull())
    {
        if (!value["AsyncRequestId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExportFile.AsyncRequestId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asyncRequestId = value["AsyncRequestId"].GetInt64();
        m_asyncRequestIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExportFile::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_progressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Progress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_progress, allocator);
    }

    if (m_finishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_asyncRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsyncRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asyncRequestId, allocator);
    }

}


string ExportFile::GetFileName() const
{
    return m_fileName;
}

void ExportFile::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ExportFile::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ExportFile::GetStatus() const
{
    return m_status;
}

void ExportFile::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ExportFile::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t ExportFile::GetFileSize() const
{
    return m_fileSize;
}

void ExportFile::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool ExportFile::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string ExportFile::GetCreateTime() const
{
    return m_createTime;
}

void ExportFile::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ExportFile::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ExportFile::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void ExportFile::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool ExportFile::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string ExportFile::GetErrMsg() const
{
    return m_errMsg;
}

void ExportFile::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool ExportFile::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

int64_t ExportFile::GetProgress() const
{
    return m_progress;
}

void ExportFile::SetProgress(const int64_t& _progress)
{
    m_progress = _progress;
    m_progressHasBeenSet = true;
}

bool ExportFile::ProgressHasBeenSet() const
{
    return m_progressHasBeenSet;
}

string ExportFile::GetFinishTime() const
{
    return m_finishTime;
}

void ExportFile::SetFinishTime(const string& _finishTime)
{
    m_finishTime = _finishTime;
    m_finishTimeHasBeenSet = true;
}

bool ExportFile::FinishTimeHasBeenSet() const
{
    return m_finishTimeHasBeenSet;
}

int64_t ExportFile::GetAsyncRequestId() const
{
    return m_asyncRequestId;
}

void ExportFile::SetAsyncRequestId(const int64_t& _asyncRequestId)
{
    m_asyncRequestId = _asyncRequestId;
    m_asyncRequestIdHasBeenSet = true;
}

bool ExportFile::AsyncRequestIdHasBeenSet() const
{
    return m_asyncRequestIdHasBeenSet;
}

