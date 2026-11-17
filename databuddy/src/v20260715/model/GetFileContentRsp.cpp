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

#include <tencentcloud/databuddy/v20260715/model/GetFileContentRsp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

GetFileContentRsp::GetFileContentRsp() :
    m_fileIdHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_contentEncodingHasBeenSet(false)
{
}

CoreInternalOutcome GetFileContentRsp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileId") && !value["FileId"].IsNull())
    {
        if (!value["FileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileContentRsp.FileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileId = string(value["FileId"].GetString());
        m_fileIdHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileContentRsp.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileContentRsp.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileContentRsp.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileContentRsp.FileSize` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = string(value["FileSize"].GetString());
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileContentRsp.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("ContentEncoding") && !value["ContentEncoding"].IsNull())
    {
        if (!value["ContentEncoding"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GetFileContentRsp.ContentEncoding` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentEncoding = string(value["ContentEncoding"].GetString());
        m_contentEncodingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GetFileContentRsp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSize.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_contentEncodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentEncoding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentEncoding.c_str(), allocator).Move(), allocator);
    }

}


string GetFileContentRsp::GetFileId() const
{
    return m_fileId;
}

void GetFileContentRsp::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool GetFileContentRsp::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string GetFileContentRsp::GetFileName() const
{
    return m_fileName;
}

void GetFileContentRsp::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool GetFileContentRsp::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string GetFileContentRsp::GetFilePath() const
{
    return m_filePath;
}

void GetFileContentRsp::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool GetFileContentRsp::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string GetFileContentRsp::GetFileType() const
{
    return m_fileType;
}

void GetFileContentRsp::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool GetFileContentRsp::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string GetFileContentRsp::GetFileSize() const
{
    return m_fileSize;
}

void GetFileContentRsp::SetFileSize(const string& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool GetFileContentRsp::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string GetFileContentRsp::GetContent() const
{
    return m_content;
}

void GetFileContentRsp::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool GetFileContentRsp::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string GetFileContentRsp::GetContentEncoding() const
{
    return m_contentEncoding;
}

void GetFileContentRsp::SetContentEncoding(const string& _contentEncoding)
{
    m_contentEncoding = _contentEncoding;
    m_contentEncodingHasBeenSet = true;
}

bool GetFileContentRsp::ContentEncodingHasBeenSet() const
{
    return m_contentEncodingHasBeenSet;
}

