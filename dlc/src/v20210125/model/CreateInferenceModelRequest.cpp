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

#include <tencentcloud/dlc/v20210125/model/CreateInferenceModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateInferenceModelRequest::CreateInferenceModelRequest() :
    m_nameHasBeenSet(false),
    m_modelTypeHasBeenSet(false),
    m_initialVersionHasBeenSet(false),
    m_providerHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parameterSizeHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_storageUriHasBeenSet(false),
    m_useCustomStorageHasBeenSet(false),
    m_tasksHasBeenSet(false),
    m_modelUidHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_gooseFSConfigHasBeenSet(false),
    m_storageTypeHasBeenSet(false)
{
}

string CreateInferenceModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_modelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelType.c_str(), allocator).Move(), allocator);
    }

    if (m_initialVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InitialVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_initialVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_providerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Provider";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_provider.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_parameterSize.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_tasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tasks.begin(); itr != m_tasks.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modelUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelUid.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInferenceModelRequest::GetName() const
{
    return m_name;
}

void CreateInferenceModelRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateInferenceModelRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateInferenceModelRequest::GetModelType() const
{
    return m_modelType;
}

void CreateInferenceModelRequest::SetModelType(const string& _modelType)
{
    m_modelType = _modelType;
    m_modelTypeHasBeenSet = true;
}

bool CreateInferenceModelRequest::ModelTypeHasBeenSet() const
{
    return m_modelTypeHasBeenSet;
}

string CreateInferenceModelRequest::GetInitialVersion() const
{
    return m_initialVersion;
}

void CreateInferenceModelRequest::SetInitialVersion(const string& _initialVersion)
{
    m_initialVersion = _initialVersion;
    m_initialVersionHasBeenSet = true;
}

bool CreateInferenceModelRequest::InitialVersionHasBeenSet() const
{
    return m_initialVersionHasBeenSet;
}

string CreateInferenceModelRequest::GetProvider() const
{
    return m_provider;
}

void CreateInferenceModelRequest::SetProvider(const string& _provider)
{
    m_provider = _provider;
    m_providerHasBeenSet = true;
}

bool CreateInferenceModelRequest::ProviderHasBeenSet() const
{
    return m_providerHasBeenSet;
}

string CreateInferenceModelRequest::GetDescription() const
{
    return m_description;
}

void CreateInferenceModelRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateInferenceModelRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateInferenceModelRequest::GetParameterSize() const
{
    return m_parameterSize;
}

void CreateInferenceModelRequest::SetParameterSize(const string& _parameterSize)
{
    m_parameterSize = _parameterSize;
    m_parameterSizeHasBeenSet = true;
}

bool CreateInferenceModelRequest::ParameterSizeHasBeenSet() const
{
    return m_parameterSizeHasBeenSet;
}

vector<string> CreateInferenceModelRequest::GetTags() const
{
    return m_tags;
}

void CreateInferenceModelRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateInferenceModelRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateInferenceModelRequest::GetStorageUri() const
{
    return m_storageUri;
}

void CreateInferenceModelRequest::SetStorageUri(const string& _storageUri)
{
    m_storageUri = _storageUri;
    m_storageUriHasBeenSet = true;
}

bool CreateInferenceModelRequest::StorageUriHasBeenSet() const
{
    return m_storageUriHasBeenSet;
}

bool CreateInferenceModelRequest::GetUseCustomStorage() const
{
    return m_useCustomStorage;
}

void CreateInferenceModelRequest::SetUseCustomStorage(const bool& _useCustomStorage)
{
    m_useCustomStorage = _useCustomStorage;
    m_useCustomStorageHasBeenSet = true;
}

bool CreateInferenceModelRequest::UseCustomStorageHasBeenSet() const
{
    return m_useCustomStorageHasBeenSet;
}

vector<string> CreateInferenceModelRequest::GetTasks() const
{
    return m_tasks;
}

void CreateInferenceModelRequest::SetTasks(const vector<string>& _tasks)
{
    m_tasks = _tasks;
    m_tasksHasBeenSet = true;
}

bool CreateInferenceModelRequest::TasksHasBeenSet() const
{
    return m_tasksHasBeenSet;
}

string CreateInferenceModelRequest::GetModelUid() const
{
    return m_modelUid;
}

void CreateInferenceModelRequest::SetModelUid(const string& _modelUid)
{
    m_modelUid = _modelUid;
    m_modelUidHasBeenSet = true;
}

bool CreateInferenceModelRequest::ModelUidHasBeenSet() const
{
    return m_modelUidHasBeenSet;
}

vector<Tag> CreateInferenceModelRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void CreateInferenceModelRequest::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool CreateInferenceModelRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

GooseFSConfig CreateInferenceModelRequest::GetGooseFSConfig() const
{
    return m_gooseFSConfig;
}

void CreateInferenceModelRequest::SetGooseFSConfig(const GooseFSConfig& _gooseFSConfig)
{
    m_gooseFSConfig = _gooseFSConfig;
    m_gooseFSConfigHasBeenSet = true;
}

bool CreateInferenceModelRequest::GooseFSConfigHasBeenSet() const
{
    return m_gooseFSConfigHasBeenSet;
}

string CreateInferenceModelRequest::GetStorageType() const
{
    return m_storageType;
}

void CreateInferenceModelRequest::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool CreateInferenceModelRequest::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}


