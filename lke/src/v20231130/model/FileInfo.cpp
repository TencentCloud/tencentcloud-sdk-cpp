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

#include <tencentcloud/lke/v20231130/model/FileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

FileInfo::FileInfo() :
    m_fileNameHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileUrlHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_docIdHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

CoreInternalOutcome FileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileUrl") && !value["FileUrl"].IsNull())
    {
        if (!value["FileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileUrl = string(value["FileUrl"].GetString());
        m_fileUrlHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("DocId") && !value["DocId"].IsNull())
    {
        if (!value["DocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.DocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docId = string(value["DocId"].GetString());
        m_docIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileInfo.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, rapidjson::Value(m_fileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_fileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_docIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

}


string FileInfo::GetFileName() const
{
    return m_fileName;
}

void FileInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool FileInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string FileInfo::GetFileSize() const
{
    return m_fileSize;
}

void FileInfo::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool FileInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string FileInfo::GetFileUrl() const
{
    return m_fileUrl;
}

void FileInfo::SetFileUrl(const string& _fileUrl)
{
    m_fileUrl = _fileUrl;
    m_fileUrlHasBeenSet = true;
}

bool FileInfo::FileUrlHasBeenSet() const
{
    return m_fileUrlHasBeenSet;
}

string FileInfo::GetFileType() const
{
    return m_fileType;
}

void FileInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool FileInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string FileInfo::GetDocId() const
{
    return m_docId;
}

void FileInfo::SetDocId(const string& _docId)
{
    m_docId = _docId;
    m_docIdHasBeenSet = true;
}

bool FileInfo::DocIdHasBeenSet() const
{
    return m_docIdHasBeenSet;
}

string FileInfo::GetCreatedAt() const
{
    return m_createdAt;
}

void FileInfo::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool FileInfo::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

