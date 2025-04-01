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

#include <tencentcloud/vod/v20240718/model/StorageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

StorageInfo::StorageInfo() :
    m_bucketIdHasBeenSet(false),
    m_storageNameHasBeenSet(false),
    m_storageRegionHasBeenSet(false),
    m_internetAccessDomainStatusHasBeenSet(false),
    m_internetAccessDomainHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome StorageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BucketId") && !value["BucketId"].IsNull())
    {
        if (!value["BucketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.BucketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketId = string(value["BucketId"].GetString());
        m_bucketIdHasBeenSet = true;
    }

    if (value.HasMember("StorageName") && !value["StorageName"].IsNull())
    {
        if (!value["StorageName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.StorageName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageName = string(value["StorageName"].GetString());
        m_storageNameHasBeenSet = true;
    }

    if (value.HasMember("StorageRegion") && !value["StorageRegion"].IsNull())
    {
        if (!value["StorageRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.StorageRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_storageRegion = string(value["StorageRegion"].GetString());
        m_storageRegionHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessDomainStatus") && !value["InternetAccessDomainStatus"].IsNull())
    {
        if (!value["InternetAccessDomainStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.InternetAccessDomainStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetAccessDomainStatus = string(value["InternetAccessDomainStatus"].GetString());
        m_internetAccessDomainStatusHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessDomain") && !value["InternetAccessDomain"].IsNull())
    {
        if (!value["InternetAccessDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.InternetAccessDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetAccessDomain = string(value["InternetAccessDomain"].GetString());
        m_internetAccessDomainHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StorageInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StorageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketId.c_str(), allocator).Move(), allocator);
    }

    if (m_storageNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageName.c_str(), allocator).Move(), allocator);
    }

    if (m_storageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_storageRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_internetAccessDomainStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessDomainStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetAccessDomainStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_internetAccessDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAccessDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetAccessDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string StorageInfo::GetBucketId() const
{
    return m_bucketId;
}

void StorageInfo::SetBucketId(const string& _bucketId)
{
    m_bucketId = _bucketId;
    m_bucketIdHasBeenSet = true;
}

bool StorageInfo::BucketIdHasBeenSet() const
{
    return m_bucketIdHasBeenSet;
}

string StorageInfo::GetStorageName() const
{
    return m_storageName;
}

void StorageInfo::SetStorageName(const string& _storageName)
{
    m_storageName = _storageName;
    m_storageNameHasBeenSet = true;
}

bool StorageInfo::StorageNameHasBeenSet() const
{
    return m_storageNameHasBeenSet;
}

string StorageInfo::GetStorageRegion() const
{
    return m_storageRegion;
}

void StorageInfo::SetStorageRegion(const string& _storageRegion)
{
    m_storageRegion = _storageRegion;
    m_storageRegionHasBeenSet = true;
}

bool StorageInfo::StorageRegionHasBeenSet() const
{
    return m_storageRegionHasBeenSet;
}

string StorageInfo::GetInternetAccessDomainStatus() const
{
    return m_internetAccessDomainStatus;
}

void StorageInfo::SetInternetAccessDomainStatus(const string& _internetAccessDomainStatus)
{
    m_internetAccessDomainStatus = _internetAccessDomainStatus;
    m_internetAccessDomainStatusHasBeenSet = true;
}

bool StorageInfo::InternetAccessDomainStatusHasBeenSet() const
{
    return m_internetAccessDomainStatusHasBeenSet;
}

string StorageInfo::GetInternetAccessDomain() const
{
    return m_internetAccessDomain;
}

void StorageInfo::SetInternetAccessDomain(const string& _internetAccessDomain)
{
    m_internetAccessDomain = _internetAccessDomain;
    m_internetAccessDomainHasBeenSet = true;
}

bool StorageInfo::InternetAccessDomainHasBeenSet() const
{
    return m_internetAccessDomainHasBeenSet;
}

string StorageInfo::GetCreateTime() const
{
    return m_createTime;
}

void StorageInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool StorageInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

