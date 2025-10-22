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

#include <tencentcloud/cfs/v20190719/model/CreateDataFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

CreateDataFlowRequest::CreateDataFlowRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_sourceStorageTypeHasBeenSet(false),
    m_sourceStorageAddressHasBeenSet(false),
    m_sourcePathHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_secretIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_dataFlowNameHasBeenSet(false)
{
}

string CreateDataFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceStorageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceStorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceStorageType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceStorageAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceStorageAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceStorageAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_sourcePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourcePath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourcePath.c_str(), allocator).Move(), allocator);
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_dataFlowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataFlowName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataFlowName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDataFlowRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void CreateDataFlowRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool CreateDataFlowRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string CreateDataFlowRequest::GetSourceStorageType() const
{
    return m_sourceStorageType;
}

void CreateDataFlowRequest::SetSourceStorageType(const string& _sourceStorageType)
{
    m_sourceStorageType = _sourceStorageType;
    m_sourceStorageTypeHasBeenSet = true;
}

bool CreateDataFlowRequest::SourceStorageTypeHasBeenSet() const
{
    return m_sourceStorageTypeHasBeenSet;
}

string CreateDataFlowRequest::GetSourceStorageAddress() const
{
    return m_sourceStorageAddress;
}

void CreateDataFlowRequest::SetSourceStorageAddress(const string& _sourceStorageAddress)
{
    m_sourceStorageAddress = _sourceStorageAddress;
    m_sourceStorageAddressHasBeenSet = true;
}

bool CreateDataFlowRequest::SourceStorageAddressHasBeenSet() const
{
    return m_sourceStorageAddressHasBeenSet;
}

string CreateDataFlowRequest::GetSourcePath() const
{
    return m_sourcePath;
}

void CreateDataFlowRequest::SetSourcePath(const string& _sourcePath)
{
    m_sourcePath = _sourcePath;
    m_sourcePathHasBeenSet = true;
}

bool CreateDataFlowRequest::SourcePathHasBeenSet() const
{
    return m_sourcePathHasBeenSet;
}

string CreateDataFlowRequest::GetTargetPath() const
{
    return m_targetPath;
}

void CreateDataFlowRequest::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool CreateDataFlowRequest::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

string CreateDataFlowRequest::GetSecretId() const
{
    return m_secretId;
}

void CreateDataFlowRequest::SetSecretId(const string& _secretId)
{
    m_secretId = _secretId;
    m_secretIdHasBeenSet = true;
}

bool CreateDataFlowRequest::SecretIdHasBeenSet() const
{
    return m_secretIdHasBeenSet;
}

string CreateDataFlowRequest::GetSecretKey() const
{
    return m_secretKey;
}

void CreateDataFlowRequest::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool CreateDataFlowRequest::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string CreateDataFlowRequest::GetDataFlowName() const
{
    return m_dataFlowName;
}

void CreateDataFlowRequest::SetDataFlowName(const string& _dataFlowName)
{
    m_dataFlowName = _dataFlowName;
    m_dataFlowNameHasBeenSet = true;
}

bool CreateDataFlowRequest::DataFlowNameHasBeenSet() const
{
    return m_dataFlowNameHasBeenSet;
}


