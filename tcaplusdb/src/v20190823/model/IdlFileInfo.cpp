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

#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

IdlFileInfo::IdlFileInfo() :
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileExtTypeHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_fileContentHasBeenSet(false)
{
}

CoreInternalOutcome IdlFileInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileExtType") && !value["FileExtType"].IsNull())
    {
        if (!value["FileExtType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfo.FileExtType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtType = string(value["FileExtType"].GetString());
        m_fileExtTypeHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfo.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfo.FileId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = value["FileId"].GetInt64();
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("FileContent") && !value["FileContent"].IsNull())
    {
        if (!value["FileContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfo.FileContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileContent = string(value["FileContent"].GetString());
        m_fileContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IdlFileInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileExtTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileExtType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileExtType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileId, allocator);
    }

    if (m_fileContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileContent.c_str(), allocator).Move(), allocator);
    }

}


string IdlFileInfo::GetFileName() const
{
    return m_fileName;
}

void IdlFileInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool IdlFileInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string IdlFileInfo::GetFileType() const
{
    return m_fileType;
}

void IdlFileInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool IdlFileInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string IdlFileInfo::GetFileExtType() const
{
    return m_fileExtType;
}

void IdlFileInfo::SetFileExtType(const string& _fileExtType)
{
    m_fileExtType = _fileExtType;
    m_fileExtTypeHasBeenSet = true;
}

bool IdlFileInfo::FileExtTypeHasBeenSet() const
{
    return m_fileExtTypeHasBeenSet;
}

int64_t IdlFileInfo::GetFileSize() const
{
    return m_fileSize;
}

void IdlFileInfo::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool IdlFileInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

int64_t IdlFileInfo::GetFileId() const
{
    return m_fileId;
}

void IdlFileInfo::SetFileId(const int64_t& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool IdlFileInfo::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string IdlFileInfo::GetFileContent() const
{
    return m_fileContent;
}

void IdlFileInfo::SetFileContent(const string& _fileContent)
{
    m_fileContent = _fileContent;
    m_fileContentHasBeenSet = true;
}

bool IdlFileInfo::FileContentHasBeenSet() const
{
    return m_fileContentHasBeenSet;
}

