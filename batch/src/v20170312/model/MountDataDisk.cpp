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

#include <tencentcloud/batch/v20170312/model/MountDataDisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

MountDataDisk::MountDataDisk() :
    m_localPathHasBeenSet(false),
    m_fileSystemTypeHasBeenSet(false)
{
}

CoreInternalOutcome MountDataDisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocalPath") && !value["LocalPath"].IsNull())
    {
        if (!value["LocalPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountDataDisk.LocalPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_localPath = string(value["LocalPath"].GetString());
        m_localPathHasBeenSet = true;
    }

    if (value.HasMember("FileSystemType") && !value["FileSystemType"].IsNull())
    {
        if (!value["FileSystemType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountDataDisk.FileSystemType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemType = string(value["FileSystemType"].GetString());
        m_fileSystemTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MountDataDisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_localPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_localPath.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemType.c_str(), allocator).Move(), allocator);
    }

}


string MountDataDisk::GetLocalPath() const
{
    return m_localPath;
}

void MountDataDisk::SetLocalPath(const string& _localPath)
{
    m_localPath = _localPath;
    m_localPathHasBeenSet = true;
}

bool MountDataDisk::LocalPathHasBeenSet() const
{
    return m_localPathHasBeenSet;
}

string MountDataDisk::GetFileSystemType() const
{
    return m_fileSystemType;
}

void MountDataDisk::SetFileSystemType(const string& _fileSystemType)
{
    m_fileSystemType = _fileSystemType;
    m_fileSystemTypeHasBeenSet = true;
}

bool MountDataDisk::FileSystemTypeHasBeenSet() const
{
    return m_fileSystemTypeHasBeenSet;
}

