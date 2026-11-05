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

#include <tencentcloud/dlc/v20210125/model/CreateModelVersionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateModelVersionRequest::CreateModelVersionRequest() :
    m_modelUidHasBeenSet(false),
    m_modelVersionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_storageUriHasBeenSet(false),
    m_useCustomStorageHasBeenSet(false),
    m_gooseFSConfigHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_modelSourceHasBeenSet(false),
    m_registerMetaHasBeenSet(false),
    m_fileListHasBeenSet(false)
{
}

string CreateModelVersionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelUid.c_str(), allocator).Move(), allocator);
    }

    if (m_modelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_storageUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageUri";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageUri.c_str(), allocator).Move(), allocator);
    }

    if (m_useCustomStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseCustomStorage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useCustomStorage, allocator);
    }

    if (m_gooseFSConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GooseFSConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_gooseFSConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_modelSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelSource.c_str(), allocator).Move(), allocator);
    }

    if (m_registerMetaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterMeta";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_registerMeta.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_fileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileList.begin(); itr != m_fileList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateModelVersionRequest::GetModelUid() const
{
    return m_modelUid;
}

void CreateModelVersionRequest::SetModelUid(const string& _modelUid)
{
    m_modelUid = _modelUid;
    m_modelUidHasBeenSet = true;
}

bool CreateModelVersionRequest::ModelUidHasBeenSet() const
{
    return m_modelUidHasBeenSet;
}

string CreateModelVersionRequest::GetModelVersion() const
{
    return m_modelVersion;
}

void CreateModelVersionRequest::SetModelVersion(const string& _modelVersion)
{
    m_modelVersion = _modelVersion;
    m_modelVersionHasBeenSet = true;
}

bool CreateModelVersionRequest::ModelVersionHasBeenSet() const
{
    return m_modelVersionHasBeenSet;
}

string CreateModelVersionRequest::GetDescription() const
{
    return m_description;
}

void CreateModelVersionRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateModelVersionRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateModelVersionRequest::GetStorageUri() const
{
    return m_storageUri;
}

void CreateModelVersionRequest::SetStorageUri(const string& _storageUri)
{
    m_storageUri = _storageUri;
    m_storageUriHasBeenSet = true;
}

bool CreateModelVersionRequest::StorageUriHasBeenSet() const
{
    return m_storageUriHasBeenSet;
}

bool CreateModelVersionRequest::GetUseCustomStorage() const
{
    return m_useCustomStorage;
}

void CreateModelVersionRequest::SetUseCustomStorage(const bool& _useCustomStorage)
{
    m_useCustomStorage = _useCustomStorage;
    m_useCustomStorageHasBeenSet = true;
}

bool CreateModelVersionRequest::UseCustomStorageHasBeenSet() const
{
    return m_useCustomStorageHasBeenSet;
}

GooseFSConfig CreateModelVersionRequest::GetGooseFSConfig() const
{
    return m_gooseFSConfig;
}

void CreateModelVersionRequest::SetGooseFSConfig(const GooseFSConfig& _gooseFSConfig)
{
    m_gooseFSConfig = _gooseFSConfig;
    m_gooseFSConfigHasBeenSet = true;
}

bool CreateModelVersionRequest::GooseFSConfigHasBeenSet() const
{
    return m_gooseFSConfigHasBeenSet;
}

string CreateModelVersionRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateModelVersionRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateModelVersionRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string CreateModelVersionRequest::GetModelSource() const
{
    return m_modelSource;
}

void CreateModelVersionRequest::SetModelSource(const string& _modelSource)
{
    m_modelSource = _modelSource;
    m_modelSourceHasBeenSet = true;
}

bool CreateModelVersionRequest::ModelSourceHasBeenSet() const
{
    return m_modelSourceHasBeenSet;
}

RegisterMeta CreateModelVersionRequest::GetRegisterMeta() const
{
    return m_registerMeta;
}

void CreateModelVersionRequest::SetRegisterMeta(const RegisterMeta& _registerMeta)
{
    m_registerMeta = _registerMeta;
    m_registerMetaHasBeenSet = true;
}

bool CreateModelVersionRequest::RegisterMetaHasBeenSet() const
{
    return m_registerMetaHasBeenSet;
}

vector<FileNode> CreateModelVersionRequest::GetFileList() const
{
    return m_fileList;
}

void CreateModelVersionRequest::SetFileList(const vector<FileNode>& _fileList)
{
    m_fileList = _fileList;
    m_fileListHasBeenSet = true;
}

bool CreateModelVersionRequest::FileListHasBeenSet() const
{
    return m_fileListHasBeenSet;
}


