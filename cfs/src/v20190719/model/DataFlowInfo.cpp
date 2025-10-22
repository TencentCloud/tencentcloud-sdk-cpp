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

#include <tencentcloud/cfs/v20190719/model/DataFlowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

DataFlowInfo::DataFlowInfo() :
    m_dataFlowIdHasBeenSet(false),
    m_dataFlowNameHasBeenSet(false),
    m_sourceStorageTypeHasBeenSet(false),
    m_sourceStorageAddressHasBeenSet(false),
    m_sourcePathHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_fileSystemIdHasBeenSet(false)
{
}

CoreInternalOutcome DataFlowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataFlowId") && !value["DataFlowId"].IsNull())
    {
        if (!value["DataFlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataFlowInfo.DataFlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataFlowId = string(value["DataFlowId"].GetString());
        m_dataFlowIdHasBeenSet = true;
    }

    if (value.HasMember("DataFlowName") && !value["DataFlowName"].IsNull())
    {
        if (!value["DataFlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataFlowInfo.DataFlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataFlowName = string(value["DataFlowName"].GetString());
        m_dataFlowNameHasBeenSet = true;
    }

    if (value.HasMember("SourceStorageType") && !value["SourceStorageType"].IsNull())
    {
        if (!value["SourceStorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataFlowInfo.SourceStorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceStorageType = string(value["SourceStorageType"].GetString());
        m_sourceStorageTypeHasBeenSet = true;
    }

    if (value.HasMember("SourceStorageAddress") && !value["SourceStorageAddress"].IsNull())
    {
        if (!value["SourceStorageAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataFlowInfo.SourceStorageAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceStorageAddress = string(value["SourceStorageAddress"].GetString());
        m_sourceStorageAddressHasBeenSet = true;
    }

    if (value.HasMember("SourcePath") && !value["SourcePath"].IsNull())
    {
        if (!value["SourcePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataFlowInfo.SourcePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourcePath = string(value["SourcePath"].GetString());
        m_sourcePathHasBeenSet = true;
    }

    if (value.HasMember("TargetPath") && !value["TargetPath"].IsNull())
    {
        if (!value["TargetPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataFlowInfo.TargetPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetPath = string(value["TargetPath"].GetString());
        m_targetPathHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataFlowInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataFlowInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("FileSystemId") && !value["FileSystemId"].IsNull())
    {
        if (!value["FileSystemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataFlowInfo.FileSystemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileSystemId = string(value["FileSystemId"].GetString());
        m_fileSystemIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataFlowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFlowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataFlowName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceStorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceStorageType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceStorageAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceStorageAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceStorageAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_sourcePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourcePath.c_str(), allocator).Move(), allocator);
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

}


string DataFlowInfo::GetDataFlowId() const
{
    return m_dataFlowId;
}

void DataFlowInfo::SetDataFlowId(const string& _dataFlowId)
{
    m_dataFlowId = _dataFlowId;
    m_dataFlowIdHasBeenSet = true;
}

bool DataFlowInfo::DataFlowIdHasBeenSet() const
{
    return m_dataFlowIdHasBeenSet;
}

string DataFlowInfo::GetDataFlowName() const
{
    return m_dataFlowName;
}

void DataFlowInfo::SetDataFlowName(const string& _dataFlowName)
{
    m_dataFlowName = _dataFlowName;
    m_dataFlowNameHasBeenSet = true;
}

bool DataFlowInfo::DataFlowNameHasBeenSet() const
{
    return m_dataFlowNameHasBeenSet;
}

string DataFlowInfo::GetSourceStorageType() const
{
    return m_sourceStorageType;
}

void DataFlowInfo::SetSourceStorageType(const string& _sourceStorageType)
{
    m_sourceStorageType = _sourceStorageType;
    m_sourceStorageTypeHasBeenSet = true;
}

bool DataFlowInfo::SourceStorageTypeHasBeenSet() const
{
    return m_sourceStorageTypeHasBeenSet;
}

string DataFlowInfo::GetSourceStorageAddress() const
{
    return m_sourceStorageAddress;
}

void DataFlowInfo::SetSourceStorageAddress(const string& _sourceStorageAddress)
{
    m_sourceStorageAddress = _sourceStorageAddress;
    m_sourceStorageAddressHasBeenSet = true;
}

bool DataFlowInfo::SourceStorageAddressHasBeenSet() const
{
    return m_sourceStorageAddressHasBeenSet;
}

string DataFlowInfo::GetSourcePath() const
{
    return m_sourcePath;
}

void DataFlowInfo::SetSourcePath(const string& _sourcePath)
{
    m_sourcePath = _sourcePath;
    m_sourcePathHasBeenSet = true;
}

bool DataFlowInfo::SourcePathHasBeenSet() const
{
    return m_sourcePathHasBeenSet;
}

string DataFlowInfo::GetTargetPath() const
{
    return m_targetPath;
}

void DataFlowInfo::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool DataFlowInfo::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

string DataFlowInfo::GetStatus() const
{
    return m_status;
}

void DataFlowInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DataFlowInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DataFlowInfo::GetCreationTime() const
{
    return m_creationTime;
}

void DataFlowInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool DataFlowInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

string DataFlowInfo::GetFileSystemId() const
{
    return m_fileSystemId;
}

void DataFlowInfo::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool DataFlowInfo::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

