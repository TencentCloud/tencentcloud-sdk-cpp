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

#include <tencentcloud/redis/v20180412/model/BackupDownloadInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Redis::V20180412::Model;
using namespace std;

BackupDownloadInfo::BackupDownloadInfo() :
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_downloadUrlHasBeenSet(false),
    m_innerDownloadUrlHasBeenSet(false)
{
}

CoreInternalOutcome BackupDownloadInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadInfo.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("DownloadUrl") && !value["DownloadUrl"].IsNull())
    {
        if (!value["DownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadInfo.DownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_downloadUrl = string(value["DownloadUrl"].GetString());
        m_downloadUrlHasBeenSet = true;
    }

    if (value.HasMember("InnerDownloadUrl") && !value["InnerDownloadUrl"].IsNull())
    {
        if (!value["InnerDownloadUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupDownloadInfo.InnerDownloadUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_innerDownloadUrl = string(value["InnerDownloadUrl"].GetString());
        m_innerDownloadUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BackupDownloadInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_downloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_downloadUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_innerDownloadUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InnerDownloadUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_innerDownloadUrl.c_str(), allocator).Move(), allocator);
    }

}


string BackupDownloadInfo::GetFileName() const
{
    return m_fileName;
}

void BackupDownloadInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool BackupDownloadInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t BackupDownloadInfo::GetFileSize() const
{
    return m_fileSize;
}

void BackupDownloadInfo::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool BackupDownloadInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string BackupDownloadInfo::GetDownloadUrl() const
{
    return m_downloadUrl;
}

void BackupDownloadInfo::SetDownloadUrl(const string& _downloadUrl)
{
    m_downloadUrl = _downloadUrl;
    m_downloadUrlHasBeenSet = true;
}

bool BackupDownloadInfo::DownloadUrlHasBeenSet() const
{
    return m_downloadUrlHasBeenSet;
}

string BackupDownloadInfo::GetInnerDownloadUrl() const
{
    return m_innerDownloadUrl;
}

void BackupDownloadInfo::SetInnerDownloadUrl(const string& _innerDownloadUrl)
{
    m_innerDownloadUrl = _innerDownloadUrl;
    m_innerDownloadUrlHasBeenSet = true;
}

bool BackupDownloadInfo::InnerDownloadUrlHasBeenSet() const
{
    return m_innerDownloadUrlHasBeenSet;
}

