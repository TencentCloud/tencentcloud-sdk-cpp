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

#include <tencentcloud/dlc/v20210125/model/CreateMlflowServerRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CreateMlflowServerRequest::CreateMlflowServerRequest() :
    m_serverNameHasBeenSet(false),
    m_resourcePartitionIdHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_storageConfigHasBeenSet(false),
    m_storageModeHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateMlflowServerRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourcePartitionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePartitionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourcePartitionId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_storageConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_storageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_storageMode.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
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


string CreateMlflowServerRequest::GetServerName() const
{
    return m_serverName;
}

void CreateMlflowServerRequest::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool CreateMlflowServerRequest::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string CreateMlflowServerRequest::GetResourcePartitionId() const
{
    return m_resourcePartitionId;
}

void CreateMlflowServerRequest::SetResourcePartitionId(const string& _resourcePartitionId)
{
    m_resourcePartitionId = _resourcePartitionId;
    m_resourcePartitionIdHasBeenSet = true;
}

bool CreateMlflowServerRequest::ResourcePartitionIdHasBeenSet() const
{
    return m_resourcePartitionIdHasBeenSet;
}

string CreateMlflowServerRequest::GetQueue() const
{
    return m_queue;
}

void CreateMlflowServerRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool CreateMlflowServerRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string CreateMlflowServerRequest::GetImage() const
{
    return m_image;
}

void CreateMlflowServerRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreateMlflowServerRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string CreateMlflowServerRequest::GetStorageConfig() const
{
    return m_storageConfig;
}

void CreateMlflowServerRequest::SetStorageConfig(const string& _storageConfig)
{
    m_storageConfig = _storageConfig;
    m_storageConfigHasBeenSet = true;
}

bool CreateMlflowServerRequest::StorageConfigHasBeenSet() const
{
    return m_storageConfigHasBeenSet;
}

string CreateMlflowServerRequest::GetStorageMode() const
{
    return m_storageMode;
}

void CreateMlflowServerRequest::SetStorageMode(const string& _storageMode)
{
    m_storageMode = _storageMode;
    m_storageModeHasBeenSet = true;
}

bool CreateMlflowServerRequest::StorageModeHasBeenSet() const
{
    return m_storageModeHasBeenSet;
}

MlFlowResourceConfig CreateMlflowServerRequest::GetResourceConfig() const
{
    return m_resourceConfig;
}

void CreateMlflowServerRequest::SetResourceConfig(const MlFlowResourceConfig& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool CreateMlflowServerRequest::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

vector<Tag> CreateMlflowServerRequest::GetTags() const
{
    return m_tags;
}

void CreateMlflowServerRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateMlflowServerRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


