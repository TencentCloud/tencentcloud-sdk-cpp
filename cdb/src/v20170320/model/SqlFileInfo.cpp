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

#include <tencentcloud/cdb/v20170320/model/SqlFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

SqlFileInfo::SqlFileInfo() :
    m_uploadTimeHasBeenSet(false),
    m_uploadInfoHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_isUploadFinishedHasBeenSet(false),
    m_fileIdHasBeenSet(false)
{
}

CoreInternalOutcome SqlFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UploadTime") && !value["UploadTime"].IsNull())
    {
        if (!value["UploadTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlFileInfo.UploadTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uploadTime = string(value["UploadTime"].GetString());
        m_uploadTimeHasBeenSet = true;
    }

    if (value.HasMember("UploadInfo") && !value["UploadInfo"].IsNull())
    {
        if (!value["UploadInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SqlFileInfo.UploadInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_uploadInfo.Deserialize(value["UploadInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_uploadInfoHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlFileInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SqlFileInfo.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("IsUploadFinished") && !value["IsUploadFinished"].IsNull())
    {
        if (!value["IsUploadFinished"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SqlFileInfo.IsUploadFinished` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isUploadFinished = value["IsUploadFinished"].GetInt64();
        m_isUploadFinishedHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SqlFileInfo.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SqlFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uploadTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uploadTime.c_str(), allocator).Move(), allocator);
    }

    if (m_uploadInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UploadInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_uploadInfo.ToJsonObject(value[key.c_str()], allocator);
    }

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

    if (m_isUploadFinishedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUploadFinished";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUploadFinished, allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

}


string SqlFileInfo::GetUploadTime() const
{
    return m_uploadTime;
}

void SqlFileInfo::SetUploadTime(const string& _uploadTime)
{
    m_uploadTime = _uploadTime;
    m_uploadTimeHasBeenSet = true;
}

bool SqlFileInfo::UploadTimeHasBeenSet() const
{
    return m_uploadTimeHasBeenSet;
}

UploadInfo SqlFileInfo::GetUploadInfo() const
{
    return m_uploadInfo;
}

void SqlFileInfo::SetUploadInfo(const UploadInfo& _uploadInfo)
{
    m_uploadInfo = _uploadInfo;
    m_uploadInfoHasBeenSet = true;
}

bool SqlFileInfo::UploadInfoHasBeenSet() const
{
    return m_uploadInfoHasBeenSet;
}

string SqlFileInfo::GetFileName() const
{
    return m_fileName;
}

void SqlFileInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool SqlFileInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

int64_t SqlFileInfo::GetFileSize() const
{
    return m_fileSize;
}

void SqlFileInfo::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool SqlFileInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

int64_t SqlFileInfo::GetIsUploadFinished() const
{
    return m_isUploadFinished;
}

void SqlFileInfo::SetIsUploadFinished(const int64_t& _isUploadFinished)
{
    m_isUploadFinished = _isUploadFinished;
    m_isUploadFinishedHasBeenSet = true;
}

bool SqlFileInfo::IsUploadFinishedHasBeenSet() const
{
    return m_isUploadFinishedHasBeenSet;
}

string SqlFileInfo::GetFileId() const
{
    return m_fileId;
}

void SqlFileInfo::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool SqlFileInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

