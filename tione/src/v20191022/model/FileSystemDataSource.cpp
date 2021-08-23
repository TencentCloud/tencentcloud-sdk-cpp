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

#include <tencentcloud/tione/v20191022/model/FileSystemDataSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20191022::Model;
using namespace std;

FileSystemDataSource::FileSystemDataSource() :
    m_directoryPathHasBeenSet(false),
    m_fileSystemTypeHasBeenSet(false),
    m_fileSystemAccessModeHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false)
{
}

CoreInternalOutcome FileSystemDataSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DirectoryPath") && !value["DirectoryPath"].IsNull())
    {
        if (!value["DirectoryPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemDataSource.DirectoryPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directoryPath = string(value["DirectoryPath"].GetString());
        m_directoryPathHasBeenSet = true;
    }

    if (value.HasMember("FileSystemType") && !value["FileSystemType"].IsNull())
    {
        if (!value["FileSystemType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemDataSource.FileSystemType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemType = string(value["FileSystemType"].GetString());
        m_fileSystemTypeHasBeenSet = true;
    }

    if (value.HasMember("FileSystemAccessMode") && !value["FileSystemAccessMode"].IsNull())
    {
        if (!value["FileSystemAccessMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemDataSource.FileSystemAccessMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemAccessMode = string(value["FileSystemAccessMode"].GetString());
        m_fileSystemAccessModeHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemDataSource.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileSystemDataSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_directoryPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectoryPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directoryPath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemAccessModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemAccessMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemAccessMode.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

}


string FileSystemDataSource::GetDirectoryPath() const
{
    return m_directoryPath;
}

void FileSystemDataSource::SetDirectoryPath(const string& _directoryPath)
{
    m_directoryPath = _directoryPath;
    m_directoryPathHasBeenSet = true;
}

bool FileSystemDataSource::DirectoryPathHasBeenSet() const
{
    return m_directoryPathHasBeenSet;
}

string FileSystemDataSource::GetFileSystemType() const
{
    return m_fileSystemType;
}

void FileSystemDataSource::SetFileSystemType(const string& _fileSystemType)
{
    m_fileSystemType = _fileSystemType;
    m_fileSystemTypeHasBeenSet = true;
}

bool FileSystemDataSource::FileSystemTypeHasBeenSet() const
{
    return m_fileSystemTypeHasBeenSet;
}

string FileSystemDataSource::GetFileSystemAccessMode() const
{
    return m_fileSystemAccessMode;
}

void FileSystemDataSource::SetFileSystemAccessMode(const string& _fileSystemAccessMode)
{
    m_fileSystemAccessMode = _fileSystemAccessMode;
    m_fileSystemAccessModeHasBeenSet = true;
}

bool FileSystemDataSource::FileSystemAccessModeHasBeenSet() const
{
    return m_fileSystemAccessModeHasBeenSet;
}

string FileSystemDataSource::GetFileSystemId() const
{
    return m_fileSystemId;
}

void FileSystemDataSource::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool FileSystemDataSource::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

