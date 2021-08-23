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

#include <tencentcloud/tcaplusdb/v20190823/model/IdlFileInfoWithoutContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

IdlFileInfoWithoutContent::IdlFileInfoWithoutContent() :
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileExtTypeHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_errorHasBeenSet(false)
{
}

CoreInternalOutcome IdlFileInfoWithoutContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfoWithoutContent.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfoWithoutContent.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileExtType") && !value["FileExtType"].IsNull())
    {
        if (!value["FileExtType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfoWithoutContent.FileExtType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileExtType = string(value["FileExtType"].GetString());
        m_fileExtTypeHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfoWithoutContent.FileSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetInt64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfoWithoutContent.FileId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = value["FileId"].GetInt64();
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("Error") && !value["Error"].IsNull())
    {
        if (!value["Error"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IdlFileInfoWithoutContent.Error` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_error.Deserialize(value["Error"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IdlFileInfoWithoutContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_errorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Error";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_error.ToJsonObject(value[key.c_str()], allocator);
    }

}


string IdlFileInfoWithoutContent::GetFileName() const
{
    return m_fileName;
}

void IdlFileInfoWithoutContent::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool IdlFileInfoWithoutContent::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string IdlFileInfoWithoutContent::GetFileType() const
{
    return m_fileType;
}

void IdlFileInfoWithoutContent::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool IdlFileInfoWithoutContent::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string IdlFileInfoWithoutContent::GetFileExtType() const
{
    return m_fileExtType;
}

void IdlFileInfoWithoutContent::SetFileExtType(const string& _fileExtType)
{
    m_fileExtType = _fileExtType;
    m_fileExtTypeHasBeenSet = true;
}

bool IdlFileInfoWithoutContent::FileExtTypeHasBeenSet() const
{
    return m_fileExtTypeHasBeenSet;
}

int64_t IdlFileInfoWithoutContent::GetFileSize() const
{
    return m_fileSize;
}

void IdlFileInfoWithoutContent::SetFileSize(const int64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool IdlFileInfoWithoutContent::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

int64_t IdlFileInfoWithoutContent::GetFileId() const
{
    return m_fileId;
}

void IdlFileInfoWithoutContent::SetFileId(const int64_t& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool IdlFileInfoWithoutContent::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

ErrorInfo IdlFileInfoWithoutContent::GetError() const
{
    return m_error;
}

void IdlFileInfoWithoutContent::SetError(const ErrorInfo& _error)
{
    m_error = _error;
    m_errorHasBeenSet = true;
}

bool IdlFileInfoWithoutContent::ErrorHasBeenSet() const
{
    return m_errorHasBeenSet;
}

