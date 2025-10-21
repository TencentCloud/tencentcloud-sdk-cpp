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

#include <tencentcloud/wedata/v20210820/model/ResourcePoolInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ResourcePoolInfo::ResourcePoolInfo() :
    m_resourcePoolsHasBeenSet(false),
    m_storageSizeHasBeenSet(false),
    m_storageFileNumHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_storageTypeHasBeenSet(false)
{
}

CoreInternalOutcome ResourcePoolInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourcePools") && !value["ResourcePools"].IsNull())
    {
        if (!value["ResourcePools"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourcePoolInfo.ResourcePools` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourcePools"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourcePools.push_back((*itr).GetString());
        }
        m_resourcePoolsHasBeenSet = true;
    }

    if (value.HasMember("StorageSize") && !value["StorageSize"].IsNull())
    {
        if (!value["StorageSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolInfo.StorageSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageSize = value["StorageSize"].GetInt64();
        m_storageSizeHasBeenSet = true;
    }

    if (value.HasMember("StorageFileNum") && !value["StorageFileNum"].IsNull())
    {
        if (!value["StorageFileNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolInfo.StorageFileNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageFileNum = value["StorageFileNum"].GetInt64();
        m_storageFileNumHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolInfo.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolInfo.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourcePoolInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourcePoolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourcePools";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourcePools.begin(); itr != m_resourcePools.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_storageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageSize, allocator);
    }

    if (m_storageFileNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageFileNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageFileNum, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

}


vector<string> ResourcePoolInfo::GetResourcePools() const
{
    return m_resourcePools;
}

void ResourcePoolInfo::SetResourcePools(const vector<string>& _resourcePools)
{
    m_resourcePools = _resourcePools;
    m_resourcePoolsHasBeenSet = true;
}

bool ResourcePoolInfo::ResourcePoolsHasBeenSet() const
{
    return m_resourcePoolsHasBeenSet;
}

int64_t ResourcePoolInfo::GetStorageSize() const
{
    return m_storageSize;
}

void ResourcePoolInfo::SetStorageSize(const int64_t& _storageSize)
{
    m_storageSize = _storageSize;
    m_storageSizeHasBeenSet = true;
}

bool ResourcePoolInfo::StorageSizeHasBeenSet() const
{
    return m_storageSizeHasBeenSet;
}

int64_t ResourcePoolInfo::GetStorageFileNum() const
{
    return m_storageFileNum;
}

void ResourcePoolInfo::SetStorageFileNum(const int64_t& _storageFileNum)
{
    m_storageFileNum = _storageFileNum;
    m_storageFileNumHasBeenSet = true;
}

bool ResourcePoolInfo::StorageFileNumHasBeenSet() const
{
    return m_storageFileNumHasBeenSet;
}

string ResourcePoolInfo::GetClusterId() const
{
    return m_clusterId;
}

void ResourcePoolInfo::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ResourcePoolInfo::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ResourcePoolInfo::GetStorageType() const
{
    return m_storageType;
}

void ResourcePoolInfo::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool ResourcePoolInfo::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

