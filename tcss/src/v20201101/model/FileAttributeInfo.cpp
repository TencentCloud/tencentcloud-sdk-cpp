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

#include <tencentcloud/tcss/v20201101/model/FileAttributeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

FileAttributeInfo::FileAttributeInfo() :
    m_fileNameHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileCreateTimeHasBeenSet(false),
    m_latestTamperedFileMTimeHasBeenSet(false),
    m_newFileHasBeenSet(false),
    m_fileDiffHasBeenSet(false)
{
}

CoreInternalOutcome FileAttributeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileAttributeInfo.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileAttributeInfo.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FileAttributeInfo.FileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetUint64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FilePath") && !value["FilePath"].IsNull())
    {
        if (!value["FilePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileAttributeInfo.FilePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filePath = string(value["FilePath"].GetString());
        m_filePathHasBeenSet = true;
    }

    if (value.HasMember("FileCreateTime") && !value["FileCreateTime"].IsNull())
    {
        if (!value["FileCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileAttributeInfo.FileCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileCreateTime = string(value["FileCreateTime"].GetString());
        m_fileCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestTamperedFileMTime") && !value["LatestTamperedFileMTime"].IsNull())
    {
        if (!value["LatestTamperedFileMTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileAttributeInfo.LatestTamperedFileMTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestTamperedFileMTime = string(value["LatestTamperedFileMTime"].GetString());
        m_latestTamperedFileMTimeHasBeenSet = true;
    }

    if (value.HasMember("NewFile") && !value["NewFile"].IsNull())
    {
        if (!value["NewFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileAttributeInfo.NewFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_newFile = string(value["NewFile"].GetString());
        m_newFileHasBeenSet = true;
    }

    if (value.HasMember("FileDiff") && !value["FileDiff"].IsNull())
    {
        if (!value["FileDiff"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileAttributeInfo.FileDiff` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileDiff = string(value["FileDiff"].GetString());
        m_fileDiffHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileAttributeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_filePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filePath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestTamperedFileMTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestTamperedFileMTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestTamperedFileMTime.c_str(), allocator).Move(), allocator);
    }

    if (m_newFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_newFile.c_str(), allocator).Move(), allocator);
    }

    if (m_fileDiffHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileDiff";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileDiff.c_str(), allocator).Move(), allocator);
    }

}


string FileAttributeInfo::GetFileName() const
{
    return m_fileName;
}

void FileAttributeInfo::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool FileAttributeInfo::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string FileAttributeInfo::GetFileType() const
{
    return m_fileType;
}

void FileAttributeInfo::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool FileAttributeInfo::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

uint64_t FileAttributeInfo::GetFileSize() const
{
    return m_fileSize;
}

void FileAttributeInfo::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool FileAttributeInfo::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string FileAttributeInfo::GetFilePath() const
{
    return m_filePath;
}

void FileAttributeInfo::SetFilePath(const string& _filePath)
{
    m_filePath = _filePath;
    m_filePathHasBeenSet = true;
}

bool FileAttributeInfo::FilePathHasBeenSet() const
{
    return m_filePathHasBeenSet;
}

string FileAttributeInfo::GetFileCreateTime() const
{
    return m_fileCreateTime;
}

void FileAttributeInfo::SetFileCreateTime(const string& _fileCreateTime)
{
    m_fileCreateTime = _fileCreateTime;
    m_fileCreateTimeHasBeenSet = true;
}

bool FileAttributeInfo::FileCreateTimeHasBeenSet() const
{
    return m_fileCreateTimeHasBeenSet;
}

string FileAttributeInfo::GetLatestTamperedFileMTime() const
{
    return m_latestTamperedFileMTime;
}

void FileAttributeInfo::SetLatestTamperedFileMTime(const string& _latestTamperedFileMTime)
{
    m_latestTamperedFileMTime = _latestTamperedFileMTime;
    m_latestTamperedFileMTimeHasBeenSet = true;
}

bool FileAttributeInfo::LatestTamperedFileMTimeHasBeenSet() const
{
    return m_latestTamperedFileMTimeHasBeenSet;
}

string FileAttributeInfo::GetNewFile() const
{
    return m_newFile;
}

void FileAttributeInfo::SetNewFile(const string& _newFile)
{
    m_newFile = _newFile;
    m_newFileHasBeenSet = true;
}

bool FileAttributeInfo::NewFileHasBeenSet() const
{
    return m_newFileHasBeenSet;
}

string FileAttributeInfo::GetFileDiff() const
{
    return m_fileDiff;
}

void FileAttributeInfo::SetFileDiff(const string& _fileDiff)
{
    m_fileDiff = _fileDiff;
    m_fileDiffHasBeenSet = true;
}

bool FileAttributeInfo::FileDiffHasBeenSet() const
{
    return m_fileDiffHasBeenSet;
}

