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

#include <tencentcloud/emr/v20190103/model/AirflowCfsSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

AirflowCfsSource::AirflowCfsSource() :
    m_fileSystemIdHasBeenSet(false),
    m_directoryHasBeenSet(false)
{
}

CoreInternalOutcome AirflowCfsSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirflowCfsSource.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }

    if (value.HasMember("Directory") && !value["Directory"].IsNull())
    {
        if (!value["Directory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AirflowCfsSource.Directory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directory = string(value["Directory"].GetString());
        m_directoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AirflowCfsSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_directoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Directory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directory.c_str(), allocator).Move(), allocator);
    }

}


string AirflowCfsSource::GetFileSystemId() const
{
    return m_fileSystemId;
}

void AirflowCfsSource::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool AirflowCfsSource::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string AirflowCfsSource::GetDirectory() const
{
    return m_directory;
}

void AirflowCfsSource::SetDirectory(const string& _directory)
{
    m_directory = _directory;
    m_directoryHasBeenSet = true;
}

bool AirflowCfsSource::DirectoryHasBeenSet() const
{
    return m_directoryHasBeenSet;
}

