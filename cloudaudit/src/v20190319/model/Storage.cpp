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

#include <tencentcloud/cloudaudit/v20190319/model/Storage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

Storage::Storage() :
    m_storageTypeHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_storageNameHasBeenSet(false),
    m_storagePrefixHasBeenSet(false),
    m_storageAccountIdHasBeenSet(false),
    m_storageAppIdHasBeenSet(false)
{
}

CoreInternalOutcome Storage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StorageType") && !value["StorageType"].IsNull())
    {
        if (!value["StorageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Storage.StorageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageType = string(value["StorageType"].GetString());
        m_storageTypeHasBeenSet = true;
    }

    if (value.HasMember("StorageRegion") && !value["StorageRegion"].IsNull())
    {
        if (!value["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Storage.StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(value["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (value.HasMember("StorageName") && !value["StorageName"].IsNull())
    {
        if (!value["StorageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Storage.StorageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageName = string(value["StorageName"].GetString());
        m_storageNameHasBeenSet = true;
    }

    if (value.HasMember("StoragePrefix") && !value["StoragePrefix"].IsNull())
    {
        if (!value["StoragePrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Storage.StoragePrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storagePrefix = string(value["StoragePrefix"].GetString());
        m_storagePrefixHasBeenSet = true;
    }

    if (value.HasMember("StorageAccountId") && !value["StorageAccountId"].IsNull())
    {
        if (!value["StorageAccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Storage.StorageAccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageAccountId = string(value["StorageAccountId"].GetString());
        m_storageAccountIdHasBeenSet = true;
    }

    if (value.HasMember("StorageAppId") && !value["StorageAppId"].IsNull())
    {
        if (!value["StorageAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Storage.StorageAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageAppId = string(value["StorageAppId"].GetString());
        m_storageAppIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Storage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_storageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageType.c_str(), allocator).Move(), allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_storageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageName.c_str(), allocator).Move(), allocator);
    }

    if (m_storagePrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StoragePrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storagePrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_storageAccountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageAccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageAccountId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageAppId.c_str(), allocator).Move(), allocator);
    }

}


string Storage::GetStorageType() const
{
    return m_storageType;
}

void Storage::SetStorageType(const string& _storageType)
{
    m_storageType = _storageType;
    m_storageTypeHasBeenSet = true;
}

bool Storage::StorageTypeHasBeenSet() const
{
    return m_storageTypeHasBeenSet;
}

string Storage::GetStorageRegion() const
{
    return m_storageRegion;
}

void Storage::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool Storage::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string Storage::GetStorageName() const
{
    return m_storageName;
}

void Storage::SetStorageName(const string& _storageName)
{
    m_storageName = _storageName;
    m_storageNameHasBeenSet = true;
}

bool Storage::StorageNameHasBeenSet() const
{
    return m_storageNameHasBeenSet;
}

string Storage::GetStoragePrefix() const
{
    return m_storagePrefix;
}

void Storage::SetStoragePrefix(const string& _storagePrefix)
{
    m_storagePrefix = _storagePrefix;
    m_storagePrefixHasBeenSet = true;
}

bool Storage::StoragePrefixHasBeenSet() const
{
    return m_storagePrefixHasBeenSet;
}

string Storage::GetStorageAccountId() const
{
    return m_storageAccountId;
}

void Storage::SetStorageAccountId(const string& _storageAccountId)
{
    m_storageAccountId = _storageAccountId;
    m_storageAccountIdHasBeenSet = true;
}

bool Storage::StorageAccountIdHasBeenSet() const
{
    return m_storageAccountIdHasBeenSet;
}

string Storage::GetStorageAppId() const
{
    return m_storageAppId;
}

void Storage::SetStorageAppId(const string& _storageAppId)
{
    m_storageAppId = _storageAppId;
    m_storageAppIdHasBeenSet = true;
}

bool Storage::StorageAppIdHasBeenSet() const
{
    return m_storageAppIdHasBeenSet;
}

